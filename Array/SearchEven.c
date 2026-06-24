#include <stdio.h>

int main()
{
    int n[10];
    printf("Enter the number: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }

    printf("Here the even number: \n");

    for (int i = 0; i < 10; i++)
    {
        if (n[i] % 2 == 0)
        {
            printf("%d\n", n[i]);
        }
    }

    return 0;
}
