//* WAP to print fibonacci series. (Using Functional Approach)

#include <stdio.h>

// Function to print fibonacci series
void fibonacci(int n){
    // Variable declare
    int i, n1=0, n2=1, n3;

    printf("%d, ", n1);
    printf("%d, ", n2);

    // Loop to print fibonacci series
    for(i=2; i<n; i++){
        n3 = n1 + n2;

        printf("%d, ", n3);
        n1 = n2;
        n2 = n3;
    }
}

void main()
{
    // Variable declare
    int userNum;

    // Read the number from the user
    printf("Enter the number here : ");
    scanf("%d", &userNum);

    // Call the function
    fibonacci(userNum);
}