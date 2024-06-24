//* WAP to print fibonacci series. (Using Iterative Approach)

#include <stdio.h>

void main()
{
    // Variable declare
    int i, userNum, n1=0, n2=1, n3;

    // Read the number from the user
    printf("Enter the number here : ");
    scanf("%d", &userNum);
    printf("\n");

    printf("%d", n1);
    printf("%d", n2);

    // Print the fibonacci series
    for(i=2; i<userNum; i++){
        n3 = n1 + n2;

        // Print the fibonacci series
        printf("%d", n3);
        n1 = n2;
        n2 = n3;
    }
}