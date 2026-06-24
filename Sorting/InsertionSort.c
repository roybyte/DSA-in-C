#include <stdio.h>

int main()
{
    int a[6];
    int key , i, n = 6;

    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        
    }

    for (int j = 1; j < n; j++)
    {
        key  = a[j];
        i = j - 1;
        while (a[i] > key  && i > -1)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key ;
    }
 
    printf(" Sorted insertion numbers are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
