// Remainder Theorem
#include<stdio.h>

int main(){
    int a, b, Q, R;
    printf("Enter Dividend: ");
    scanf("%d",&a);
    printf("Enter Divisor: ");
    scanf("%d",&b);
    Q = a/b;
    printf("Quotient: %d", Q);

    R = a - (b*Q); 
    printf("\nRemainder is: %d", R);

    // R = a % b;
    // printf("The Remainder is: %d", R);
    
    return 0;
}