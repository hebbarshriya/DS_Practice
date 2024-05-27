#include <stdio.h>
int Add(int arr[], int n)
{
    int sum=0, i=0;
    for(i=0; i<n; i++)
        sum+= arr[i];
    return sum;
}
int main()
{
    int i;
    int n; printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array: ");
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("%d",Add(arr, n));
    return 0;
}