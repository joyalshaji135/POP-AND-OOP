// Write a program to print array elements in reverse order and find the 2nd
// largest number.

#include<stdio.h>
int main()
{
    int arr[100];
    int limit,i,j;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }

    // Logic of the Code
    return 0;
}