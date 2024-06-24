//* WAP to print the sum of the 1 to 50 numbers. (Using Iterative Approach)

#include <stdio.h>

void main()
{
    // Variables Declare
    int i, userNum, sum = 0;

    // Read the end range from the user want to sum the numbers
    printf("Enter the end range here : ");
    scanf("%d", &userNum);

    // Calculate the sum
    for(i=1; i<=userNum; i++){
        sum = sum + i;
    }

    // Print the sum
    printf("The sum from 1 to %d is : %d",userNum,sum);
}