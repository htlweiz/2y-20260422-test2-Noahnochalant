/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

// TODO: your code goes here

int main(void) {
  double temp_celsius = 0;

  scanf("%lf", &temp_celsius);

  printf("%f", Celsius2Fahrenheit(temp_celsius));

  return 0;
}
