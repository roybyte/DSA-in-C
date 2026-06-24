#include <stdio.h>

int main()
{
    int a[6];
    int temp;

    printf("Enter the  numbers: \n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 6 - 1; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (a[i] > a[j]) // When I change this (>) into this (<), then whole code change in desecending oder.
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
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
