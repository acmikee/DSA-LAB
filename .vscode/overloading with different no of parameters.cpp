#include <iostream>
using namespace std;


void add(int a) {
    cout << "Single parameter: " << a << endl;
}


void add(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    add(5);      
    add(3, 7);   
    return 0;
}