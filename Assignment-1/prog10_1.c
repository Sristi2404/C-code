#include<stdio.h>
int main()
{
 printf("*** program to convert temperatures in Celsius to Fahrenheit and vice-versa***\n");
 printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
 float celsius, fahrenheit;
 printf("Enter Temp in Fahrenheit : ");
 scanf("%f", &fahrenheit);
 celsius = (fahrenheit-32) / 1.8;
 printf("Temperature in Celsius : %.2f\n", celsius);
 return 0;
}
