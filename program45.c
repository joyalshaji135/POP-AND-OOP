// Write a program to separate prime and non-prime numbers in separate
// arrays.

#include<stdio.h>
void PrimeAndNonPrime(int limit,int arr[]);
int main()
{
    int arr[100];
    int i,limit;
    printf("Enter the Limit of an Array :");
    scanf("%d",&limit);
    printf("Enter the Elements of an Array :");
    for(i=0; i<limit; i++)
    {
        scanf("%d",&arr[i]);
    }
    PrimeAndNonPrime(limit,arr);
}