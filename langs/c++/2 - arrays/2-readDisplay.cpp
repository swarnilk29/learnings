#include <iostream>
using namespace std;

#define MAX 100

int main() {
    int arr[MAX], n;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "\nReading the elements into the array:\n";
    for (int i = 0; i < n; i++) {

        // cout << "arr[" << i << "] = ";
        // or
        
        cout << i << " = ";
        cin >> arr[i];
    }

    cout << "\nDisplaying the " << n << " elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
