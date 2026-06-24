#include <stdio.h>

int main()
{
    int n[10] = {1, 2, 13, 44, 53, 68, 98, 110, 143};
    int beg = 0, end = 8, mid, found = 0, num;

    printf("Which number you want search: \n");
    scanf("%d", &num);

    while (beg <= end)
    {
        mid = ((beg + end) / 2);
        if (n[mid] == num)
        {
            printf("Number found at position: %d\n", mid);
            found = 1;
            break;
        }
        else if (num > n[mid])
        {
            beg = (mid + 1);
        }
        else if (num < n[mid])
        {
            end = (mid - 1);
        }
    }
    if (found == 0)
    {
        printf("Number not found!!");
    }

    return 0;
}
