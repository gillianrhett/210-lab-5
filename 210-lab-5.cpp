// COMSC210 | Lab 5 | Gillian Rhett
#include <iostream>
using namespace std;

int swap(int*, int*);

int main() {
    int x = 5, y = 10;
    int *ptrx = &x;
    int *ptry = &y;

    cout << "x = " << x << "  | y = " << y << endl;

    cout << "Swapping...\n";
    int sum = swap(ptrx, ptry);
    cout << "x = " << x << " | y = " << y << endl;
    cout << "sum = " << sum << endl;
    return 0;
}

int swap(int* ptra, int* ptrb) {
// swap the values of 2 variables via pointers to them, and return their sum
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
    return *ptra + *ptrb;
}