
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
  int *a, n, i, j, d, temp;
  scanf("%d", &n);
  a = (int *)malloc(n * sizeof(int));
  scanf("%d", &d);
  for (i = 0; i < n; i++) 
  {
    scanf("%d", a+i);
  }
  for (j = 0; j < d; j++) 
  {
    temp = a[0];
    for (i = 0; i < n; i++) 
    {
      if (i == n - 1) 
      {
        a[i] = temp;
        break;
      }
      a[i] = a[i + 1];
    }
  }
  for (i = 0; i < n; i++) 
  {
    printf("%d ", *(a+i));
  }
  return 0;
}
