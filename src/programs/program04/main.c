/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>
#include <math.h>
// TODO: your code goes here
double compute_hypotenuse(double leg_a, double leg_b){
  double hypoth = 0;
  hypoth =sqrt(pow(leg_a ,2) + pow(leg_b ,2)) ;
  return compute_hypotenuse;

} 



int main(void) {
  double leg_a = 0, leg_b = 0;
printf("Geben sie die Länge a ein:\n");
  printf("Geben sie Länge b ein:\n");
  scanf("%lf", &leg_a);
  scanf("%lf", &leg_b);
  printf("%lf", compute_hypotenuse(leg_a, leg_b));

  return 0;
}
