#include<iostream>
using namespace std;

//Declaring a global variable

struct Square{
    int length;
    int breadth;
    char x; // char takes 1 bytes
} r1,r2;

//or

// struct triangle r1,r2;

struct Rectangle{
    int length;
    int breadth;
    char y; //It allocates 4 bytes for Char, but uses only 1 byte of it, which is known as padding.
}; //Defining a Structure

int main(){
    // struct Rectangle r1; //Declaring a variable
    struct Rectangle r1 = {10,5}; //Declaration + Initialisation

    // printf("%ld\n", sizeof(r1)); //Integar takes 4 bites

    // printf("Hello World!!");

    r1.length = 15; //Changing the length
    r1.breadth = 7; //Changing the breadth

    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    return 0;
}