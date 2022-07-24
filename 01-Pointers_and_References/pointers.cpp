/*
A pointer is a variable that stores the address of another variable or function.
*/

#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    int* pAge = &age;
    int* p;
    int *np = nullptr;

    cout << "pAge: " << pAge << endl;
    cout << "*pAge: " << *pAge << endl;
    cout << "p: " << p << endl;
    // cout << "*p: " << *p << endl;
    cout << "np: " << np << endl;
    // cout << "*np: " << *np << endl;

    return 0;
}