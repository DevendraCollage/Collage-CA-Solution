//* WAP to print the sum of the 1 to 50 numbers. (Using Functional Approach)

#include <stdio.h>

// Function calculate sum of 1 to 50
int sumNum(int n) {
    // Variable declare
    int i, sum = 0;

    // Loop to calculate the sum
    for(i=1; i<=n; i++){
        sum = sum + i;
    }

    // Return the value
    return sum;
}

void main()
{
    // Variable declare
    int userNum;

    // Read the end range from the user
    printf("Enter the end range here : ");
    scanf("%d", &userNum);

    // Call the function and print the sum
    printf("The sum of 1 to %d is : %d",userNum,sumNum(userNum));
}