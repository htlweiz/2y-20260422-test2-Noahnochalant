/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

// TODO: your code goes here

int main(void) {
  double leg_a = 0, leg_b = 0;

  scanf("%lf", &leg_a);

  printf("%f", compute_hypotenuse(leg_a, leg_b));

  return 0;
}
