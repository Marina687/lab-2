#include "stdio.h"
#include "stdbool.h"
#include <conio.h>
#include "stdlib.h"

_Bool isInArea(double x, double y);
 
double f(double x);
 
int main()
{
  printf("1. Zadanie 1\n2. Zadanie 2\n");
 
  switch (_getch())
  {
    case '1':
      printf("Zadanie 1\n Vvedite x y: ");
      double x, y;
      scanf("%lf %lf", &x, &y);
 
      _Bool result = isInArea(x, y);
 
      if (result == 1)
        
        printf("Prinadlezhit oblasti\n");
      else
        printf("Ne prinadlezhit oblasti\n");
        break;
      
    case '2':
      printf("Zadanie 2\nVvedite x: ");
      double x1;
      scanf("%lf", &x1);
 
      double result1 = f(x1);
      printf("f(%lf) = %lf\n", x1, result1);
      break;

    default:
      printf("Neverny vvod");
      break;
  }
  system("pause");
   
  return 0;
}