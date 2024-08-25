#include<stdio.h>   
int main()  
{  
	printf("***program to check if the given number is a perfect number***\n");
        printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
	int i = 1,num,Sum=0;  
	printf(" Enter the number:");  
	scanf("%d", &num);  
  	while(i < num )  
        {  
            if(num % i == 0)  
            Sum = Sum + i;  
            i++;  
        }  
        if(Sum == num)  
           printf("%d is Perfect Number\n", num);  
        else  
           printf("%d is not a Perfect Number\n", num);  
return 0;  
}  
