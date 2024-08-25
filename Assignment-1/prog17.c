#include<stdio.h>  
void main() 
{  
    printf("***program to check whether a year is a leap year or not.***\n");
    printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
    int year;  
    printf("Enter a year: ");  
    scanf("%d", &year);  
     if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {  
        printf("%d is a leap year\n",year);  
    } else 
    {  
        printf("%d is not a leap year\n",year);  
    }  
}
