#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialise(struct Rectangle *r, int l, int b){
    r-> length = l;
    r-> breadth = b;

}

int area(struct Rectangle r){
    
    return r.length * r.breadth;
}

int perimeter(struct Rectangle r){
    
    int p;
    p = 2*(r.length + r.breadth);
    return p;
}

int main(){

    printf("Enter the length and breadth of the rectangle: ");

    // We can do one thing, instead of initiallizing the length and breadth variables seperately, why not take them into a Structure??
    Rectangle r = {0,0}; // Initialising using structures.


    int l,b;
    // cin>>r.length>>r.breadth;
    cin>>l>>b;

    initialise(&r, l, b);

    int Area = area(r);
    int Perimeter = perimeter(r);

    printf("Area: %d\nand Perimeter: %d\n", Area, Perimeter);
    return 0;
}