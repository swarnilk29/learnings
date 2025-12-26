#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    // int arr[5]; // initialising the size

    int arr1[5] = {1, 2, 3, 4, 5};

    // to get the size of a static array
    int size = sizeof(arr1) / sizeof(arr1[0]);

    for (int i=0; i<size; i++){
        cout << arr1[i];            
    }
}