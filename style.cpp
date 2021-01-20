#include <iostream>

int main() {
int a = 42;
int b = 153;
int x;

x = a;
a = b;
b = x;

std::cout << "a: " << a << "\n";
std::cout << "b: " << b << "\n";
}
