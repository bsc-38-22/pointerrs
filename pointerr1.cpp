#include <iostream>
#include <cstring>

using namespace std;

int main(){


int* harriet = new int;
cout << "Enter an integer value: ";
cin >> *harriet;

if (harriet != nullptr){

    cout << "Dynamically allocated integer value: "<< *harriet << endl;

    delete harriet;
} else {
    cerr <<"Memory allocation failed!" <<endl;
}

}
