#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5], b[5], c[10];
    int n, m, i, k;

    clrscr();

    printf("Enter the size of first array: ");
    scanf("%d", &n);

    printf("Enter the elements of first array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    k = i;

    printf("Enter the size of second array: ");
    scanf("%d", &m);

    printf("Enter the elements of second array:\n");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        c[k] = b[i];
        k++;
    }

    printf("Elements in the merged array:\n");

    for(i = 0; i < n + m; i++)
    {
        printf("%d\n", c[i]);
    }

    getch();
}
}
