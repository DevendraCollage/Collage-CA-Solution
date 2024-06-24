//* WAP to calculate GCD (Greatest Common Divisor). (Using Functional Approach)

#include <stdio.h>

// Function to calculate GCD
int GCD(int n1, int n2){
    // Variable declare
    int i=1, temp=1;

    // Loop to calculate the GCD
    while(i<=n1 && i<=n2){
        if(n1%i==0 && n2%i==0){
            temp=i;
        }
        i++;
    }

    // Return the value
    return temp;
}

void main()
{
    // Variable declare
    int num1, num2;

    // Read the two numbers from the user
    printf("Enter the number 1 here : ");
    scanf("%d", &num1);
    printf("Enter the number 2 here : ");
    scanf("%d", &num2);

    // Function call and print result
    printf("The GCD of %d and %d is : %d",num1,num2,GCD(num1,num2));
}