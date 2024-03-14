#include <stdio.h>
int main()
{
  int n = 5;
  int b;
  for (n = 0; n < 5; n++) {
    for (b = 0; b <=n; b++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}