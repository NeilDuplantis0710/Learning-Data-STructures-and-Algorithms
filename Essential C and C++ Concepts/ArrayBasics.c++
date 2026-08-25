#include <iostream>


using namespace std;
int main()
{

    int A[5]; //Declaration of a Size 5 array.
    A[0] = 12; //Putting a value into the array
    A[1] = 15;
    A[2] = 25;

    int B[13] = {1,2,3,4,5,6,7,8,9,10}; //Initialising an array

    cout << sizeof(A) << endl; //getting size of array A
    //endl is the \n
    cout<<A[1]<<endl;
    cout<<sizeof(B)<<endl;

    printf("%d\n", B[3]);


    // for(int i; i<10; i++){ //Accessing elements in an array using C for loop.
    //     printf("%d\n", B[i]);//Here we can see since, we have decalred the size of the array already the rest of the elements are assumed to be 0.
    // }

    // for(int x: B){ //Accessing elements of an array using C++ for each loop.
    //     cout<<x<<endl; //Here we can see since, we have decalred the size of the array already the rest of the elements are assumed to be 0.
    // }


    int n;
    cout<< "Enter Size: ";
    cin>>n; //The scanf of C++
    int C[n];
    C[0] = 2;

    for(int x:C){
        cout<<x<<endl;
    }


    return 0;
}