#include <iostream>

using namespace std;

bool checkSquare(int arr[9][9], int i, int j);
bool checkCol(int arr[9][9], int i, int j);
bool checkRow(int arr[9][9], int i, int j);
bool solve(int arr[9][9]);

int main(){

    int arr[9][9];

    for(int i = 0; i < 9; ++i)
        for(int j = 0; j < 9; ++j)
            cin >> arr[i][j];

    if(solve(arr)){
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << '\n';
        }
    }
    else
        cout << "No solution exists";

    return 0;
}

bool checkRow(int arr[9][9], int i, int j){
    for (int k = 0; k < 9; ++k) {
        if(arr[i][k] == arr[i][j] && k != j)
            return false;
    }
    return true;
}

bool checkCol(int arr[9][9], int i, int j) {
    for (int k = 0; k < 9; ++k) {
        if(arr[k][j] == arr[i][j] && k != i)
            return false;
    }
    return true;
}
bool checkSquare(int arr[9][9], int i, int j){
    int row = i/3 + 1;
    int col = j/3 + 1;
    for (int k = (row-1) * 3; k < row*3; ++k) {
        for (int l = (col-1) * 3; l < col*3; ++l) {
            if(arr[k][l] == arr[i][j] && !(i == k && j == l))
                return false;
        }
    }
    return true;
}

bool solve(int arr[9][9]){
    int row = -1, col = -1;
    bool flag = false;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if(arr[i][j] == 0){
                row = i;
                col = j;
                flag = true;
                break;
            }
        }
        if(flag)
            break;
    }
    if(!flag){
        return true;
    }

    for (int i = 1; i <= 9; ++i) {
        arr[row][col] = i;
        if(checkCol(arr, row, col) && checkRow(arr, row, col) && checkSquare(arr, row, col)){
            if (solve(arr))
                return true;
            else{
                arr[row][col] = 0;
            }
        }
    }
    arr[row][col] = 0;
    return false;
}