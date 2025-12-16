#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int row, col;
    
    cout << "Enter the number of rows: ";
    cin >> row;
    
    cout << "Enter the number of columns: ";
    cin >> col;
    
    int arr[100][100];
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; ++j){
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "Averages of each row:\n";
    for(int i = 0; i < row; ++i){
        int sum = 0;
        for(int j = 0; j < col; ++j) {
            sum += arr[i][j];
        }
        double average = static_cast<double>(sum) / col;
        cout << "Row " << i + 1  << ": " << fixed << setprecision(2) << average << "\n";
    }
    return 0;
}