#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter a dividend: ");
    scanf("%d", &dividend);
    printf("Enter a divisor: ");
    scanf("%d", &divisor);

    
    quotient = dividend / divisor;

   
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
