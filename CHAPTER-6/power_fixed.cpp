#include<iostream>
using namespace std;

int powr(int a, int b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    
    int half = powr(a, b / 2);
    
    if (b % 2 == 0) {
        return half * half;
    } else {
        return a * half * half;
    }
}

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    int b;
    cout << "Enter b: ";
    cin >> b;

    cout << "Result: " << powr(a, b);
    
    return 0;
}
