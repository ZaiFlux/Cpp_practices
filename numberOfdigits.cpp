#include <iostream>

using namespace std;

int main () {

    int digitCount = 0;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    string str = to_string(num);

    for(char n : str){
        if(isdigit(n)){
            digitCount++;
        }   
    }

    cout << "The number of digit here " << num <<  " are " << digitCount;
}   

