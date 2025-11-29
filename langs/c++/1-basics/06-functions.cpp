#include<bits/stdc++.h>
using namespace std;

//Functions are set of code which performs something for you
//Functions are used to modularise code
//Functions are used to increase readability
//Functions are used to use the same code multiple time
//void -> does not return anything
//parameterised
//non-parameterised

// question : print names

// void printName(string name){
//     cout << "Hello " << name << endl;
// }

// int main (){
//     string name;
//     cin >> name;
//     printName(name);
    

//     string name2;
//     cin >> name2;
//     printName(name2);
//     return 0;
// }


//***************************************************************************


// question - Take two numbers and print its sum

// //one way :- writing with return function

// int sum (int num1, int num2) {// parameters
//     int num3 = num1 + num2;
//     return num3;
// }

// int main (){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1, num2 );
//     cout << res;


//***************************************************************************


//second way :- writing with void function

// void sum (int num1, int num2) {// parameters
//     int num3 = num1 + num2;
//     cout << num3;
// }

// int main (){
//     int num1, num2;
//     cin >> num1 >> num2;
//     sum(num1, num2 );

// }


//***************************************************************************


// using math libraries

// int main (){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int minimum = min(num1, num2 );//min/max to find min max number
//     cout << minimum;
// }


//***************************************************************************


// making min max function 

int maxx(int num1, int num2){
    if(num1 >= num2) return num1;
    else return num2;
}

// return is absent case

// int maxx(int num1, int num2){
//     if(num1 >= num2) {
//         return num1;
//     }
//     since the if condition is not true, it is looking for return value
//     hence, i will print some garbage value
// }


int main (){
    int num1, num2;
    cin >> num1 >> num2;
    int maximum = maxx(num1, num2 );
    cout << maximum;
    return 0;
}
