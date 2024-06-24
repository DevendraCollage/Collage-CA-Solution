//* WAP to calculate the Factorial of the given number. (Using Iterative Approach)

#include <stdio.h>

void main()
{
    // Variable Declare
    int userNum, fact=1, i;

    // Read the number from the user
    printf("Enter the number : ");
    scanf("%d", &userNum);

    // Calculate the factorial of the given number
    for(i=1; i<=userNum; i++){
        fact = fact * i;
    }

    // Print the factorial
    printf("The factorial of %d is : %d",userNum,fact);
}