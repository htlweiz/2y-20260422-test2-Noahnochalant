/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv) {
   // write your solution here
int number = 0;
int count = 0;
printf("Geben Sie eine Zahl ein:\n");
scanf("%d",&number);
if (number > 0)
{
do
{
   printf("Geben Sie eine Zahl ein:\n");
   scanf("%d",&number);
   count = number +1 ;
} while (count != number);

}else{
   do
   {
      printf("Geben Sie eine Zahl ein:\n");
      scanf("%d",&number);
      count = number - 1;
   } while (count != number);
   
}
 
 
   
   
   
}




