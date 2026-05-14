#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
    int  a = 5;
    cout << &a << endl;
    cout << sizeof(a) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "bool: " << sizeof(bool) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;

    cout << a << endl;
    cout << *(&a) << endl;
    cout << "Con sizeof" << endl;
    cout << "long: " << sizeof(long*) << endl;
    cout << "int: " << sizeof(int*) << endl;
    cout << "char: " << sizeof(char*) << endl;
    cout << "bool: " << sizeof(bool*) << endl;
    cout << "float: " << sizeof(float*) << endl;
    cout << "double: " << sizeof(double*) << endl;
    
    int * direccion;
    cout << direccion << endl;
    cout << &direccion << endl;
    cout << *direccion << endl;

    cout << "Malloc: ";
    int* dir = (int *)malloc(sizeof(int)); //En C
    *dir = 7;
    cout << *dir << endl;

    int* dir2 = new int; //En C++

    /*cout << "Malloc: ";
    cout << malloc(4) << endl;*/

    return 0;
}
