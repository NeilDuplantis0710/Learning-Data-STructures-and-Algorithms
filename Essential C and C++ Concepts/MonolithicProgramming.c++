#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    // We will be writing a program to calculate the area of a rectangle.
    // Since it is a Monolithic Programming, we will write the entire code in the main function.

    int length = 0, breadth = 0;

    printf("Enter the length and breadth of the rectangle: ");
    cin>>length>>breadth; // A question that might arise is that if we are asking for the input of length and breadth, then why are we initializing them? Becuase: It is a good practice.
    

    int area = length * breadth;

    int peri = 2*(length + breadth);

    printf("Area: %d\nand Perimeter: %d\n", area, peri);
    return 0;
}