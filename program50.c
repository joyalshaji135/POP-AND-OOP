// Write a program to print all postive elements in an array

#include<stdio.h>
void Positive(int limit,int arr[]);
int main()
{
    int arr[100];
    int limit,i;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    Positive(limit,arr);
    return 0;
}
// Logic of the Code
void Positive(int limit,int arr[])
{
    printf("All Positive Numbers :\t");
    for (int i = 0; i < limit; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d\t",arr[i]);
        }
    }  
}