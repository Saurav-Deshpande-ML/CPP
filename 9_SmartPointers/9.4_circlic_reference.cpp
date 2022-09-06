#include <iostream>
#include <memory>

using namespace std;

class Animal
{

    // shared_ptr<Animal> animalFriend; cirlic reference
    weak_ptr<Animal> animalFriend;

public:
    string animalName;
    Animal(string name)
    {
        animalName = name;
        cout << "Animal created: " << animalName << endl;
    }
    ~Animal() { cout << "Animal destroyed: " << animalName << endl; }
    void makeFriend(shared_ptr<Animal> animal) { animalFriend = animal; }
    void displayFriend();
};
void Animal ::displayFriend() { cout << "My friend is :" << animalFriend.lock()->animalName << endl; }

int main()
{

    shared_ptr<Animal> animal1 = make_shared<Animal>("Cat");
    shared_ptr<Animal> animal2 = make_shared<Animal>("Dog");
    animal1->makeFriend(animal2);
    animal2->makeFriend(animal1);
    cout<<animal1.use_count()<<endl;
    cout<<animal2.use_count()<<endl;
    animal1->displayFriend();
    animal2->displayFriend();
}
