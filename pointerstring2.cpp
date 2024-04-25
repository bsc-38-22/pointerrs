# include <iostream>
#include <cstring>

using namespace std;

int main(){
    char* harriet = new char;
    cout << "Enter a string"<<endl;
    cin >> *harriet;
    cout <<"Dynamically allocated string:" << harriet <<endl;

    delete[] harriet;
    return 0;

}

