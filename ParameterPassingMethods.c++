#include <iostream>

using namespace std;


//1). Call by value mechanism: In this mechanism, the values of actual parameters are copied to the formal parameters. Changes made to the formal parameters do not affect the actual parameters.
// int add(int a, int b){ 
//     // int c = a+b;

//     a++; 
//     cout<<a<<endl;
//     return 0;
// }

// int main(){
    
//     int num1 = 10, num2 = 20;
//     int result = add(num1, num2);

//     // cout<<"Sum is:"<<result<<endl;
//     cout<<num1<<endl;

//     //Here in the add function, the value of a is incremented by 1, but this change does not affect the value of num1 in main function. This is because the add function uses call by value mechanism, where the values of actual parameters (num1 and num2) are copied to the formal parameters (a and b). Therefore, any changes made to a and b inside the add function do not affect num1 and num2 in main.
//     // We use call by value when we want the function to process something and return the result. It should take the values and just return the result without changing the original values of the actual parameters.
//     return 0;
// }


// 2). Call by address.
// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){
//     int num1 = 10;
//     int num2 = 20;

//     swap(&num1,&num2);

//     cout<<"First Number is: "<<num1<<endl;
//     cout<<"Second Number is: "<<num2<<endl;

//     // Here the formal parameters a and b are pointers that point to the memory addresses of the actual parameters num1 and num2. When we dereference the pointers using the * operator, we can access and modify the values stored at those memory addresses. Therefore, when we swap the values of a and b inside the swap function, we are actually swapping the values of num1 and num2 in main. This is because we passed the memory addresses of num1 and num2 to the swap function, allowing it to directly modify their values.


//     // When to use: See, this swap function is modifying the values of the actual parameters, so the swap funtion is not returning anything. Whatever are the results of the swap function, they are directly reflected in the actual parameters. So when you want a function to directly work upon the actual parameters then go for call by address mechanism. 
//     // Also, here you can see that swap function is modifying 2 variables (num1 and num2) but a function can return only 1 value. We want 2 results from swap function, so better use call by address.
//     //  Also, if you have some variable and if you want the same variable to be modified then send it as address to the function. If you send it as value then the original variable will not be modified. So, if you want to modify the original variable then send it as address to the function.
//     return 0;
// }


//  3). Call by reference (Supported only in C++).

// void swap(int &a, int &b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// int main(){
//     int num1 = 10;
//     int num2 = 20;

//     swap(num1,num2);

//     cout<<"First Number is: "<<num1<<endl;
//     cout<<"Second Number is: "<<num2<<endl;

//     return 0;

//     // The mechanism of working is almost the same as call by address. The reference is just a nickname of a variable.. so it should be directly representing num1. So this swap function may become inline function. The reference variable is just a nickname of the original variable. So, when we swap the values of a and b inside the swap function, we are actually swapping the values of num1 and num2 in main. This is because we passed the references of num1 and num2 to the swap function, allowing it to directly modify their values.
// }

// Now what if we have 2 variables and one we made it as call by reference and the other one is not call by reference, then will the compiler make it as inline functions?

// void swap(int &a, int b){

//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// int main(){

//     int num1 = 10;
//     int num2 = 20;
    
//     swap(num1,num2);

//     cout<<"First Number is: "<<num1<<endl;
//     cout<<"Second Number is: "<<num2<<endl;

//     return 0;

//     // The answer is no!, the compiler will not make it as inline function. Only 1 is call by reference.. so definetly it won't.


//     // Note: It all depends upon the compiler. Some compilers may choose to inline the function even if it has a mix of call by reference and call by value parameters, while others may not. However, in general, it is less likely for a function with mixed parameter types to be inlined compared to a function with all parameters being call by reference or all parameters being call by value.
// }


// Now what if one variable is call by address and the other one is call by reference, then will the compiler make it as inline functions?

#include <iostream>

using namespace std;

void swap(int *a, int &b){

    int temp;
    temp = *a;
    *a = b;
    b = temp;
}

int main(){

    int num1 = 10;
    int num2 = 20;

    swap(&num1,num2);

    cout<<"First Number is: "<<num1<<endl;
    cout<<"Second Number is: "<<num2<<endl;
    return 0;

    // The answer is yes!, we can use different types of format parameters. The compiler will make it as inline function. The reason is that the function is small and simple, and the compiler can easily determine that inlining it would be beneficial for performance. In this case, the function has a mix of call by address and call by reference parameters, but since the function is small and does not have any complex logic, the compiler can still inline it.
}