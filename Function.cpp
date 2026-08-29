#include<iostream>
using namespace std;

int Add(int a, int b) {
    int c = a + b;
    return c;
}

int main() {
    int x = Add(23, 4);
    cout << x;
}
