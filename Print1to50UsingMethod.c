//* Write a program to print the 1 to 50 numbers using the method. (Using Functional Approach)

#include <stdio.h>

// Method to print 1 to 50 numbers
void printNum(int n){
    // Variable declare
    int i;

    // Print the numbers
    for(i=1; i<=n; i++){
        printf("%d, ",i);
    }
}

void main()
{
    // Variables
    int userNum;

    // Read the nd range from the user
    printf("Enter the end range here : ");
    scanf("%d", &userNum);

    // Function call
    printNum(userNum);
}