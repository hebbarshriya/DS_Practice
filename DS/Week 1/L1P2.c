#include <stdio.h>
#include <stdbool.h>
int Lsearch(int arr[], int n, int k)
{
    int check = -1;
    int i = 0;
    for(i=0; i<n; i++)
    {
        if(arr[i] == k)
        {
            check = i;
            break;
        }
    }
    return check+1;
}
int main()
{
    int i, n, k;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of the array: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter the element to be searched: ");
    scanf("%d", &k);
    int check = Lsearch(arr, n, k);
    (check == -1) ? printf("%d is not present in the array", k) : printf("%d is present in the array at position %d", k, check);
    return 0;
}