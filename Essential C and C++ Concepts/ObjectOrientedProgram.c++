#include <iostream>
#include <stdio.h>

using namespace std;

// struct Rectangle{
//     int length;
//     int breadth;


// void initialise(int l, int b){
//     length= l;
//     breadth = b;

// }

// int area(){
    
//     return length * breadth;
// }

// int perimeter(){
    
//     int p;
//     p = 2*(length + breadth);
//     return p;
// }

// };

// int main(){

//     Rectangle r = {0,0};

//     int l,b;
//     printf("Enter the Length and Breadth: ");
//     cin>>l>>b;

//     r.initialise(l, b);

//     int Area = r.area();
//     int Perimeter = r.perimeter();

//     printf("Area: %d\nand Perimeter: %d\n", Area, Perimeter);
//     return 0;



//     // In C++ Struct and Class are same. But there is 1 difference:
//     // Within stuctures everything is public.
//     // Within class everything is private.
// }


// Same code, but with class

class Rectangle{

public: // Just specify everything within public    
    int length;
    int breadth;


void initialise(int l, int b){
    length= l;
    breadth = b;

}

int area(){
    
    return length * breadth;
}

int perimeter(){
    
    int p;
    p = 2*(length + breadth);
    return p;
}

};

int main(){

    Rectangle r = {0,0};

    int l,b;
    printf("Enter the Length and Breadth: ");
    cin>>l>>b;

    r.initialise(l, b);

    int Area = r.area();
    int Perimeter = r.perimeter();

    printf("Area: %d\nand Perimeter: %d\n", Area, Perimeter);
    return 0;



    // In C++ Struct and Class are same. But there is 1 difference:
    // Within stuctures everything is public.
    // Within class everything is private.
}
