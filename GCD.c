//* WAP to calculate GCD (Greatest Common Divisor). (Using Iterative Approach)

#include <stdio.h>

void main()
{
    // Variable declare
    int i=1, num1, num2, temp=1;

    // Read the two numbers from the user
    printf("Enter the number-1 here : ");
    scanf("%d", &num1);
    printf("Enter the number-2 here : ");
    scanf("%d", &num2);

    // Loop to calculate the GCD
    while(i<=num1 && i<=num2){
        if(num1%i==0 && num2%i==0){
            temp=i;
        }
        i++;
    }

    // Print the result
    printf("The GCD of %d and %d is : %d",num1,num2,temp);
}