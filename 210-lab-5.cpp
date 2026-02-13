// COMSC210 | Lab 5 | Gillian Rhett
#include <iostream>
using namespace std;

int swap(int*, int*);

int main() {
    int *ptrx = new int;
    int *ptry = new int;
    *ptrx = 5;
    *ptry = 10;

    cout << "x = " << *ptrx << "  | y = " << *ptry << endl;

    cout << "Swapping...\n";
    int sum = swap(ptrx, ptry);
    cout << "x = " << *ptrx << " | y = " << *ptry << endl;
    cout << "sum = " << sum << endl;

    delete ptrx;
    ptrx = nullptr;
    delete ptry;
    ptry = nullptr;

    return 0;
}

int swap(int *ptra, int *ptrb) {
// swap the values of 2 variables via pointers to them, and return their sum
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
    return *ptra + *ptrb;
}