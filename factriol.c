// C program for Recursion Data Structure
#include <stdio.h>
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    // Recursive case: multiply n with factorial of (n-1)
    return n * factorial(n - 1);
}
int main() {
	int number;
 printf("enter a number you want to creat a factriol:");
    scanf("%d",&number);
    printf("Number is: %d\n" , number);
    //case 2
    if (number < 0) {
        printf("Error: Factorial is undefined for negative numbers.\n");
        return 1;
    } 
    int result = factorial(number);
    //print the output
    printf("Factorial of %d is: %d\n", number, result);
    return 0;
}
