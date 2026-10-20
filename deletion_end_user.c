#include <stdio.h>

int main()
{
    int a[10], n, i;

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

    n--;

    printf("Array after deletion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
