#include <stdio.h>
#include <math.h>

int main ()
{
int day1, day2, month1, month2, year1, year2;

printf("Enter a day one: ");
scanf("%i", &day1);

printf("Enter a month one: ");
scanf("%i", &month1);

printf("Enter a year one: ");
scanf("%i", &year1);

printf("Enter a day two: ");
scanf("%i", &day2);

printf("Enter a month two: ");
scanf("%i", &month2);

printf("Enter a year two: ");
scanf("%i", &year2);

if (day1 > day2 || month1 > month2 && year1 > year2){
    printf("Date one is higher \n");
}
else {
   printf("Date two is higher \n");
}

return(0);
}