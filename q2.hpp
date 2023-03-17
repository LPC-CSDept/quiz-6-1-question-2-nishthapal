#include <iostream>
#include <iomanip>
using namespace std;

// ******************************
// Implement all your functions here
// ******************************
void getinput(int &, int &, int &);
int findMin(int&, int&, int&);
void printresult(int &n1, int &n2, int &n3, int &min);

void getinput(int &n1, int &n2, int &n3){
    cout << "Enter three values: ";
    cin >> n1 >> n2 >> n3;
}

int findMin(int &n1, int& n2, int &n3){
    int min = 0;
    if (n1 < n2 && n1 < n3)
        min = n1;
    if (n2 < n1 && n2 < n3)
        min = n2;
    if (n3 < n1 && n3 < n2)
        min = n3;
    return min;
}

void printresult(int &n1, int &n2,int &n3, int &min){
    cout << n1 << setw(5) << n2 << setw(5) << n3 << setw(5) << min << endl;
}