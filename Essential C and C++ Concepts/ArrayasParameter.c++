#include <iostream>     

using namespace std;

// void fun(int A[]){ //Here this parameter is actually a pointer.
//     cout<<sizeof(A)/sizeof(int)<<endl;
//     // The above line will not give the correct size of the array because when we pass an array to a function, it decays into a pointer. Therefore, sizeof(A) will give the size of the pointer, not the size of the array.
//     // Pointer takes 8 bytes, and int takes 4 bytes, so the output will be 2 (8/4).
// }


// int main(){
//     int A[] = {2, 4, 6, 8, 10};
//     int n = 5;

//     for(int x:A){
//         cout<<x<<endl;
//     }


//     cout<<sizeof(A)/sizeof(int)<<endl;
//     //Since this is not a parameter, it will give the correct size of the array. The output will be 5 (20/4).
//     fun(A);
//     return 0;
// }



// Now printing the characters of the array

// 1). Method 1: Using for-each loop (wrong one)
// void fun(int A[]){
//     for(int a:A){
//         cout<<a<<endl;
//         // This will not work because we cannot use for-each loop with a pointer parameter, we can only use it with an array.
//     }
// }

// int main(){
//     int A[] = {2,4,6,8,10};
//     fun(A);
//     return 0;
// }



// 2). Method 2: Using for loop (correct one)

// Remember, we can also directly denote the A parameter in function "fun" as a pointer, i.e. int *A instead of int A[].
// void fun(int *A, int n){
//     for(int i = 0; i<n; i++){
//         cout<<A[i]<<endl;
//     }
// }

// int main(){
//     int A[]= {2,4,6,8,10};
//     fun(A, 5);
//     return 0;
// }


// 3). Now, when the parameter array is passed by address, then if we change we change anything of the array inside the function "fun",  will it also change the original array in the main function?
// The answer is yes, because we are passing the address of the array to the function "fun", so any changes made to the array inside the function will also affect the original array in the main function.


// void fun(int *A, int n){
//     A[0] = 100; // Changing the first element of the array to 100
// }

// int main(){

//     int A[] = {2,4,6,8,10};
//     fun(A,5);
//     for(int x:A){
//         cout<<x<<endl; // This will print 100,4,6,8,10 because we changed the first element of the array inside the function "fun".
//     }
//     return 0;
// }


// 4). Creating an array inside a function and returning its address (function returning an array).

int* fun(int size){
  
    int * p;
    p = new int[size]; // Dynamically allocating memory for an array of size 5

    for(int i = 0; i<size; i++){
        p[i] = i+1;
    }
    return p;
}


int main(){

    int *ptr;
    int sz = 69;

    ptr = fun(sz);

    for(int i = 0; i<sz; i++){
        cout<<ptr[i]<<endl; // This will print 1,2,3,4,5 because we created an array inside the function "fun" and returned its address to the pointer "ptr" in the main function.
        // This is the benefit of dynamic memory allocation, array is created in the heap and it is created inside function "fun". But even main function can access it because main function is getting its pointer. 
        // So if you create anything in heap, then it can be accessed anywhere in the program if pointer is available on it.
    }
    return 0;
}