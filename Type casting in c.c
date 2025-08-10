#include<stdio.h>
int main() {
    int a=24;
    float b=32.757;
    a = (int) b ; 
    // type casting from float to int
    // a will now be 32, as the decimal part is truncated
    printf("%d \n", a );
    return 0;
}
