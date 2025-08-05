# include<stdio.h>
# include<math.h>
int main() {
    float radius;
    printf("Enter the radius of the circle");
    scanf("%f", &radius);
    float area = 3.14 * pow(radius,2);
    printf("The area of the circle is %f", area);
    return 0;
}
