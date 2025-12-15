#include <iostream>

using namespace std;

int main () {

    char arr[8];
    int vowelCount = 0;

    cout << "Enter 8 letters: ";
    
    for(int i  = 0; i < 8; i++){
    cin >> arr[i];
    }

    for(int i = 0; i < 8; i++){
        char ch = tolower(arr[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            vowelCount++;
        }
    }
    cout << "Numbers of vowel: " << vowelCount;
}