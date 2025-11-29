#include<bits/stdc++.h>
using namespace std;

// 1D Array
int main (){
    int arr[2];
    cin >> arr[0] >> arr[1] >> arr [2];

    arr[1] += 15 ;//modify existing array
    cout << arr[1];


    return 0;
}

// 2D Array

int main (){
    int arr1[1][5];
    arr1[1][5] = 54;
    cout << arr1[1][5];
    return 0;
}

// String Array

int main (){
    string g = "Google";
    int len = g.size();
    g[len - 1]='h';//to replace the character
    cout << g[len - 1];//to print last character

    cout << g[2];//to get the index number
    return 0;
}