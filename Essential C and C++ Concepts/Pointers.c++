#include <iostream>
#include <stdlib.h> //Used for dereferencing

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){

    // int a =10;

    // int *p; //Declaring a pointer

    // p = &a; //Assigning pointer P to variable a.

    // // printf("Using Pointer %d\n", *p); // dereferencing
    // // printf("Using Pointer %d\n", p); // Printing the address of the pointer
    // // printf("Using Pointer %d, %d\n", p, &a); // Printing the address of the pointer through pointer and variable


    // // Pointer to an array

    // // int A[5] = {2,4,6,8,10};
    // // int *x;
    // // x = A;

    // // for(int i = 0; i<5; i++){
    // //     // cout<<A[i]<<endl; //Using array
    // //     cout<<x[i]<<endl; //Using Pointer to get the same result
    // // }

    // //Assigning the array into heap

    // // 1). In C
    // // int *x;
    // // x = (int *)malloc(5*sizeof(int));

    // // x[0]=10; x[1]=15; x[2]=14; x[3]=21; x[4]=31;

    // // for(int i = 0; i<5; i++){
    // //     cout<<x[i]<<endl;
    // // }

    // // 2). In C++

    // int *x;
    // x = new int[5];

    // x[0]=10; x[1]=15; x[2]=14; x[3]=21; x[4]=31;

    // for(int i = 0; i<5; i++){
    //     cout<<x[i]<<endl;
    // }
    
    // delete[] x; //We must delete that memory in heap, since it is an array so we use [], for C++
    // // free(x); //We must delete that memory in heap,for C
    // cout<<a;

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;


    //Here every pointer will have the same size that is 8, every pointer will take the same number of bytes... in latest compiler it will take 8 byte.
    // The size of every pointer is independent of it's data type.
    return 0;
}