#include<bits/stdc++.h>
using namespace std;

// tip :- if executes all the line even after the line is true so thats why use if and else if that will avoid execution of each line, will stop when the condition is true

// this program contains combine code of - if, if else, if else ladder


int main () {
    int marks;
    cin >> marks;
    if(marks<25){
        cout << "D";
    }
    else if(marks <= 50){
        cout << "C";
    }
    else if(marks <= 75){
        cout << "B";
    }
    else if(marks <= 100){
        cout << "A";
    }
    return 0;
}


//nested "if else"

int main (){
    int age;
    cin >> age;
    if (age < 18){
        cout << "not eligible" ;
    }
    else if (age <=57){
        cout << "eligible for job" ;
        if (age >= 55){
            cout << "but retirement soon" ;
        }
    }
    else{
        cout << "retirement" ;
    }
}

// switch case
int main(){
    int day = 2;
    switch (day){
        case 1 :cout << "Monday" ; break;
        case 2 :cout << "Tuesday" ; break;
        case 3 :cout << "Wednesday" ; break;
        default : cout << "Holiday";
    }
}


//ternary operators
int main (){
int a = 10;
int b = 20;


int max = (a > b ) ? a : b;

// (a > b) =  condition.
// ? = means "if the condition is true".
// : = separates the true case from the false case.

cout << " Maximum is " << max;
}



