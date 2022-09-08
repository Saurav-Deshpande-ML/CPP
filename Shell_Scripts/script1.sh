#! /usr/bin/bash

factorial(){
    n=$1
    sum=1
    while [ $n -gt 0 ]
    do
        sum=$( expr $sum \* $n )
        (( n-- ))
    done
    echo $sum
}

function isPrime(){
    n=$1
    for((i=2; i<=$n/2; i++))
    do
        ans=$(( n%i ))
        if [ $ans -eq 0 ]
        then
            echo "$n is not a prime number."
            exit 0
        fi
    done
    echo "$n is a prime number."
}

function fibonacci(){
    a=0
    b=1
    n=$1
    echo "The Fibonacci series is : "
    
    for (( i=0; i<$n; i++ ))
    do
        echo -n "$a "
        fn=$((a + b))
        a=$b
        b=$fn
    done
    echo " "
}

while [ 1 ]
do
    select choice in factorial prime fibonacci
    do
        case $choice in 
        factorial) 
            echo -n "enter number :"
            read num
            factorial $num
            ;;
        prime)
            echo -n "enter number :"
            read num
            isPrime $num
            ;;
        fibonacci)
            echo -n "enter number :"
            read num
            fibonacci $num
            ;;
        *)
            echo "Not valid choice enter again.."
            ;;
        esac
    done
done    
