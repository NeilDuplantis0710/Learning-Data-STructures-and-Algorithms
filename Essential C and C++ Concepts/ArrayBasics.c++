#include <iostream>


using namespace std;
int main()
{

    int A[5]; //Declaration of a Size 5 array.
    A[0] = 12; //Putting a value into the array
    A[1] = 15;
    A[2] = 25;

    int B[] = {0}; //Initialising an array

    cout << sizeof(A) << endl; //getting size of array A
    //endl is the \n
    cout<<A[1]<<endl;
    cout<<sizeof(B)<<endl;

    printf("%d\n", B[3]);
    return 0;
}