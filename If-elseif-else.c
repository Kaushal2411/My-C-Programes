#include <stdio.h>

int main() {
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age > 60) // This statement will work only when the age is greater then 60.
    {

        printf("You can drive and you are a senior citizen");
    }

    else if (age > 40) // This statement will work only when the age is greater then 40.
    {

        printf("You can drive and you are elder");
    }

    else if (age > 18) // This statement will work only when the age is greater then 18.
    {

        printf("You can drive");
    }

    else // This statement will work when all the if and elseif statements are false.
    {

        printf("You cannot drive");
    }
    return 0;
}
