// 2. Write a code that will initialize variable a to 10 and variable b to 5. Swap the two value.

#include <iostream>
using namespace std;

int main() 
{
    int temp, a = 10, b = 5;

    cout << "Original Value:" << endl;
    cout << "Variable A: " << a << endl;
    cout << "Variable B: " << b << endl;
    cout << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "Swapped Value:" << endl;
    cout << "Variable A: " << a << endl;
    cout << "Variable B: " << b << endl;
    cout << endl;

    return 0;
}
