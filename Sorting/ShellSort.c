#include <stdio.h>

int main()
{
  int a[5];
  int gap, temp, n = 5;

  printf("Enter the numbers: \n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (gap = n - 1; gap >= 1; gap--)
  {
    for (int i = 0; i < n - gap; i++)
    {
      if (a[i] > a[i + gap])
      {
        temp = a[i];
        a[i] = a[i + gap];
        a[i + gap] = temp;
      }
    }
  }

  printf("Shell sorted numbers: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", a[i]);
  }

  return 0;
}
