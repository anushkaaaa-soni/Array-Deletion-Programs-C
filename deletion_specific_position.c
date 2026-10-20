#include <stdio.h>

int main()
{
    int a[10], n, i, p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 1 || n > 10)
    {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &p);

    if(p < 1 || p > n)
    {
        printf("Invalid position");
        return 0;
    }

    for(i = p - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    printf("Array after deletion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
