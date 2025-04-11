#include <iostream>
using namespace std;

int main() {
    int n, set;


    cout << "Enter the array size: ";
    cin >> n;


    int* a = new int[n];


    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    cout << "Enter a number set: ";
    cin >> set;


    int lastIndex = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 5) {
            lastIndex = i;
        }
    }


    if (lastIndex != -1) {
        int temp = a[0];
        a[0] = a[lastIndex];
        a[lastIndex] = temp;
    }


    cout << "Array after permutation: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;


    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > set) {
            sum += a[i];
            count++;
        }
    }


    if (count > 0) {
        cout << "Arithmetic mean: " << (double)sum / count << endl;
    }
    else {
        cout << "There are no elements larger than set." << endl;
    }


    delete[] a;

    return 0;
}


