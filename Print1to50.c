//* Print 1 to 50 number. (Using Iterative Approach)

#include <stdio.h>

void main()
{
    // Declare variables
    int i, userNum;

    // Read the end range from the user
    printf("Enter the end range here : ");
    scanf("%d", &userNum);

    // Print the number 
    for(i=1; i<=userNum; i++){
        printf("%d, ",i);
    }
}