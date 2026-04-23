/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv) {
  int16_t count = 0;
  // write your solution here
int number = 0;
int count = 0;
do
{
  
  printf("Würfel:\n");
  scanf("%d",&number);
  count = number;
  count += count;
} while (number < 7);

 printf("Du hast %d Mal gewürfelt.", count);

}