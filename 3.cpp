#include <iostream>

using namespace std;

int main () {

    int arr[5];
    int sum = 0;

    cout << "Enter a 5 number: ";

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }

    cout << "Sum: " << sum;
}