#include <iostream>

using namespace std;

int main(){

    int rows;
    int column;

    cout <<"Enter the number of rows: up to 3"<<endl;
    cin >> rows;

    if (rows <= 0 || rows > 3){
        cout << "Invalid number of rows.please enter a value between 1 and 3."<<endl;
        return 0;

    }
    cout <<"Enter the number of columns: up to 3 please"<<endl;
    cin >> column;
    if (column <= 0 || column > 3){
        cout << "Invalid number of colums. please enter a value between 1 and 3."<<endl;
        return 0;
    }

    double** harriet = new double*[rows];
    for (int i = 0; i < rows; ++i){
        harriet[i] = new double[column];
    }

    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < column; ++j){

            cout << "Enter value for element at position (" << i << "," << j << "): ";
            cin >> harriet[i][j];

        }

        cout << "2D Array of doubles:" <<endl;

        for (int i = 0; i < rows; ++i){

        }
        for (int j = 0; j < column; ++j){
            cout << harriet[i][j] << "";}
        }
        for (int i = 0; i < rows; ++i){
            delete[] harriet[i];
        }
        delete[] harriet;

        return 0;
    }
