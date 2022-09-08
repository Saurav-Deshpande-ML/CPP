#include<iostream>
#include<string>
#include"singleton.hpp"

using namespace std;

int Singleton :: counter = 0;
Singleton* Singleton::instance =nullptr;
mutex Singleton ::mtx;

Singleton :: Singleton(){

    counter++;
    cout<<"Number of Instances: "<<counter<<endl;

}

Singleton* Singleton :: getSingleInstance(){

    if(instance==nullptr){
        mtx.lock();
        if(instance==nullptr){
            instance=new Singleton();
        }
        mtx.unlock();
    }
    return instance;
}

void Singleton :: setMessage(string msg){
    cout<<msg<<endl;
}
