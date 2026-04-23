/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

// TODO: your code goes here
double Celsius2Fahrenheit()
{
  double Fahrnheit= 0;
  double temp_celsius = 0;
  printf("Temperatur Celsius:\n");
  Fahrnheit = temp_celsius * (9/5) +32;
  
  return Celsius2Fahrenheit;
  return temp_celsius;
}


int main(void) {
  double temp_celsius = 0;
 
  
  scanf("%lf", &temp_celsius);

  printf("%lf", Celsius2Fahrenheit(temp_celsius));

  return 0;
}
