#include <stdio.h>
#include <stdlib.h>
float x,y;
//eto uchebnaya programma//
int main()
{
    printf("Vvedite chisla ");
    scanf ("%f,%f",&x, &y);
    printf ("%f + %f = %f\n", x,y,x+y);
     printf ("%f - %f = %f\n", x,y,x-y);
      printf ("%f * %f = %f\n", x,y,x*y);
    printf ("%f / %f = %3.2f\n", x,y,x/y);
    return 0;
}
