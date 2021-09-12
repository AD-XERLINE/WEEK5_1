#include <stdio.h>
#include <math.h>
int main()
{
  double a;
  double b;
  double c;
   
//A3 full
  printf("Enter sides of a triangle (such as :3 4 5) : ");
  scanf("%lf %lf %lf", &a ,&b ,&c);
  
  if (a+b>c && a+c>b && b+c>a){
  double A = ((a+b+c)*(b+c-a)*(a+c-b)*(a+b-c))/16;
  printf("%lf",sqrt(A));
  }
  else {
  	printf("0");
  }
}
