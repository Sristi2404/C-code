#include<stdio.h>
int main()
{
 printf("*** program to convert temperatures in Celsius to Fahrenheit and vice-versa***\n");
 printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
 float celsius, fahrenheit;
 printf("Enter Temp in Celsius:");
 scanf("%f", &celsius);
 fahrenheit = (1.8 * celsius) + 32;
 printf("Temperature in Fahrenheit :%.2f\n ",fahrenheit);
 return 0;
}
