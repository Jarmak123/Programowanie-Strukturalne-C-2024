#include <stdio.h>

int main() {
    int a = 10; // a =0 , b =16
    int b = 5;  // a =10 , b =16
    a = a + b;  // a =10 , b =5
    b = a - b;  // a =15 , b =5
    a = a - b;  // a =15 , b =10
    b = a * b;  // a =5 , b =10
    a = b / a;  // a = 5, b =50
    b = a << 2; // a = 10, b =50
    a = b >> 1; // a = 10, b = 40
    b = a & b;  // a = 20, b = 40
    a = a ^ b;  // a = 20 , b =0
    b = ~a;     // a =20 , b =0
    return 0;
}
