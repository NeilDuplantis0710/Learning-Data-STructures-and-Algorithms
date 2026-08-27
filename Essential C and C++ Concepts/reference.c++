#include <iostream>

using namespace std;

int main(){

    int a = 10;
    int &r=a; //declaration of a referance and initialiation

    a = 25; //here r will also be 25.

    // reference is the property of a only, if we put r = b, then a = b... r will still be the property of a only.

    int b = 30;
    r = b;

    //a = b

    cout<<a<<endl<<r<<endl;

    return 0;
}