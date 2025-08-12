#include <iostream>
using namespace std;
int temp;
void swap(int &x, int &y){
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 12, b = 6;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a,b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
OUTPUT:
Before swapping: a = 12, b = 6
After swapping: a = 6, b = 12

=== Code Execution Successful ===
