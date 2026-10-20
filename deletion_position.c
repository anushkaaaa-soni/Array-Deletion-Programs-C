#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5, p, i;

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
