#include <stdio.h>

int main()
{
    int a[6];
    int temp;

    printf("Enter thre  number: \n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0 ; i < 6 - 1; i++)
    {
        for (int j = 0 ; j < 6-1-i; j++)
        {
            if (a[j] > a[j+1]) // When I change this (>) into this (<), then whole code change in desecending oder.
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
        }
    }
}
    printf("Sorted  number are: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
