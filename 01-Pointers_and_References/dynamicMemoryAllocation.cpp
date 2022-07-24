#include <iostream>
using namespace std;

int main()
{
    int scores[] = {100, 95, 78};
    cout << "Value of Scores: " << scores << endl;
    int* score_ptr = scores;
    cout << "Value of score_ptr: " << score_ptr << endl;

    // Array subscript notation
    cout << "scores[0] = " << scores[0] << endl;
    cout << "scores[1] = " << scores[1] << endl;
    cout << "scores[2] = " << scores[2] << endl;

    // Pointer subscript notation
    cout << "score_ptr[0] = " << score_ptr[0] << endl;
    cout << "score_ptr[1] = " << score_ptr[1] << endl;
    cout << "score_ptr[2] = " << score_ptr[2] << endl;

    // Pointer offset notation
    cout << "*score_ptr = " << *score_ptr << endl;
    cout << "*(score_ptr + 1) = " << *(score_ptr + 1) << endl;
    cout << "*(score_ptr + 2) = " << *(score_ptr + 2) << endl;

    // Array offset notation
    cout << "*scores = " << *scores << endl;
    cout << "*(scores + 1) = " << *(scores + 1) << endl;
    cout << "*(scores + 2) = " << *(scores + 2) << endl;

    return 0;
}