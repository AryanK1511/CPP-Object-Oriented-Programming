#include <iostream>
using namespace std;

int main() 
{
    int num = 100;
    int &ref = num;

    cout << ref << endl;

    return 0;
}