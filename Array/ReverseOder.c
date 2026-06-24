#include <stdio.h>

int main()
{
    int n[10];

    printf("Enter the your number in array: \n ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &n[i]);
    }

      printf("Reverse of array is: \n");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}
