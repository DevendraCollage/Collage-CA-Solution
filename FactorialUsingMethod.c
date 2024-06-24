//* WAP to calculate the Factorial of the given number. (Using Functional Approach)

#include <stdio.h>

// Function to calculate the factorial 
int factorial(int n){
    if (n==1) {
        return n;
    }else{
        return n*factorial(n-1);
    }
}

void main()
{
    // Variable declare
    int userNum;

    // Read the number from the user
    printf("Enter the number here : ");
    scanf("%d", &userNum);

    // Function call and pass the paramater
    printf("The factorial of %d is : %d",userNum,factorial(userNum));
}