#include <iostream>
using namespace std;

void display(int*);

int main() 
{
    int nums[5] = {2, 1, 4, 8, 6};
    display(nums);

    return 0;
}

void display(int* nums) {
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << endl;
    }
}
