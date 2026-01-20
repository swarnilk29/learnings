#include<iostream>//for input and output

//
#include<string>//for string
#include<math.h>//for math functions
//

using namespace std;// to avoid using std::cout everytime

#include<bits/stdc++.h>//to avoid putting libraries this can be used to include all the libraries in one line


//input & ouput code
int main () {
    int x, y;
    cin >> x >> y;
    cout << "value of x is :" << x << "value of y is :" << y;
    return 0;
}

// * endl and \n both can be use for new line



// C styled way of printing
// ex :

// int a = 10;
// float b = 3.14;
// printf("a = %d, b = %.2f\n", a, b);

// | Specifier | Meaning                     |
// | --------- | --------------------------- |
// | %d      | integer                     |
// | %f      | float/double                |
// | %s      | string (char*)              |
// | %c      | character                   |
// | %ld     | long int                    |
// | %.2f    | float with 2 decimal places |


// g++ -o code 01-userInput.cpp && code.exe