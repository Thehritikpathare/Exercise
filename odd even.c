#include<stdio.h>

int main()
//Take number from user
//And show the output which is odd or even.
{
    int number;
    printf("Check the number is odd or even");
    printf("Enter an number: ");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("%d  is Even.", number);
    else
        printf("%d is Odd.", number);
    
    return 0;
}
