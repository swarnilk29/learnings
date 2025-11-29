#include<bits/stdc++.h>
using namespace std;

//Pass by Value : Example
// void doSomething1 (int a){
//     cout << a << endl;
//     a += 5;
//     cout << a << endl;
//     a += 7;
//     cout << a << endl;
// }

// int main (){
//     int a = 10;
//     doSomething1(a);
//     // cout << a << endl; //problem : it store the copy, so after calling void function 
//     //if we call the variable again it prints the orignal value
//     return 0;
// }


//***************************************************************************


// Pass by Reference : Example
//used "&a" to copy orignal value

void doSomething (int &a){
    cout << a << endl;
    a += 5;
    cout << a << endl;
    a += 7;
    cout << a << endl;
}

int main (){
    int a = 10;
    doSomething(a);
    cout << a << endl;
    return 0;
}

//"ARRAYS" always get passed by reference so you dont have to use "&";