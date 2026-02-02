#include <stdio.h>

void main()
{
    int a[50], n, i, pos;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
  
    for(i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--; 

    printf("new array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
