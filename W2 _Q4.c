#include <stdio.h>

int main() 
{
    int arr[100], n,i, small , large;

    printf("Enter the number of elementsyou want yo insert :");
    scanf("%d", &n);

    for (i = 0; i< n; i++)
    {
        printf("Enter element %d :", i +1);
        scanf("%d", &arr[i]);
    }

    small =arr[0];
    large=arr[0];

    for (i =1; i<n; i++)
    {
        if (arr[i] < small)
        {
            small=arr[i];
        }
        if (arr[i] > large)
        {
            large=arr[i];
        }
    }

    printf("\nLargest element is :%d\n", large);
    printf("\nSmallest element is :%d\n", small);

    return 0;
}
