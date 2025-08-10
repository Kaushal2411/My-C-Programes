# include<stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
// In the switch statement when any case is matched,
// all the other cases after the correct case will be executed.
    switch (a) { 
        case 1:
            printf("You entered 1.\n");
            break; // The break statement is used to turminate the switch statement.
        // If we do not use break statement, the program will continue to execute till the end.
        case 2:
            printf("You entered 2.\n");
            break;
        case 3:
            printf("You entered 3.\n");
            break;
        default: // The default case is executed when none of the cases match.
            // It is optional to use default case.
            printf("You have entered something other then 1, 2 and 3.\n");
            break;
    }

    return 0;
}
