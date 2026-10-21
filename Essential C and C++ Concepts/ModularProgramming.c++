#include <iostream>
#include <stdio.h>

using namespace std;

int area(int length, int breath){
    
    return length * breath;
}

int perimeter(int length, int breadth){
    
    int p;
    p = 2*(length + breadth);
    return p;
}

int main(){
    
    // Modular programming was difficult to manage.
    // We break the main function into smaller functions, and each function will perform a specific task.

    // Here also we will be calculating the area and perimeter of a rectangle.

    // We will create seperate functions for calculating the area and perimeter of the rectangle.
    // But we will let the user interaction within the main function only, and we will pass the values of length and breadth to the functions.

    printf("Enter the length and breadth of the rectangle: ");
    int length = 0, breadth = 0;
    cin>>length>>breadth; 

    int Area = area(length, breadth);
    int Perimeter = perimeter(length, breadth);

    printf("Area: %d\nand Perimeter: %d\n", Area, Perimeter);
    return 0;
}