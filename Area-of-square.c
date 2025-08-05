#include<stdio.h>
int main() {
    int side;
    printf("Enter the side of the square :");
    scanf("%d", &side);
    int area = side * side;
    printf("The area of the square is : %d" , area);
    return 0;
}
