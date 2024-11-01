#include <iostream>
using namespace std;

int summation(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "The summation is: " << summation(x, y) << endl;
    return 0;
}
