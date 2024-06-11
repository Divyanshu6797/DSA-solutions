#include <bits/stdc++.h>
using namespace std;

void swapArithmetic(int& a, int& b) {
    
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After: a = " << a << ", b = " << b << endl;
}


void swapBitManipulation(int& a, int& b) {
  
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After: a = " << a << ", b = " << b << endl;
}

int main() {
    int a = 10, b = 20;
    swapArithmetic(a, b);
    a = 10, b = 20;
    swapBitManipulation(a, b);
    return 0;
}
