#include<stdio.h>
int main() {
    int a=6 , b=5, c=9 ;
    // What will be the answer of 2*a/6*b + c*5
    printf("The answer to the above question is %d \n" , 2*a/6*b + c*5);
    /* In C the operator precedence is as follows:-
    1. Parentheses  
    2. * , % , / (left to right ) 
    3. + , - (left to right )
    4. = (right to left)
    So the expression will be evaluated as follows:-
    2*a/6*b + c*5 
    2*a/6*b + 45 
    12/6*b + 45
    2*b + 45
    10 + 45
    55
    So the answer will be 55
    */
   return 0 ;
}
