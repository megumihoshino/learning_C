#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846
int main()
{
  float r;
  printf("radius lingkaran: ");
  scanf("%f", &r);
  float lingkaran = pi*r*r;

  printf("luas lingkaran = %f cm^2 \n", lingkaran); 
  printf("akhir program\n");


  return 0;
}