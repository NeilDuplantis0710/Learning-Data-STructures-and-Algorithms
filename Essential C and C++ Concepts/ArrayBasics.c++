#include <iostream>


using namespace std;
int main()
{

    int A[5]; //Declaration of a Size 5 array.
    A[0] = 12; //Putting a value into the array
    A[1] = 15;
    A[2] = 25;

    cout << sizeof(A) << endl; //getting size of array A
    //endl is the \n
    cout<<A[1]<<endl;

    printf("%d\n", A[2]);
    return 0;
}