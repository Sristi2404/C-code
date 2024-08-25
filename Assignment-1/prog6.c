#include<stdio.h>
int main()
{
	 printf("***program to evaluate the algebraic expression (ax+b)/(ax-b)\n");
    	 printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
         int a,b,x;
         float s;
         printf("enter the values of a,b,x...");
 	 scanf("%d%d%d",&a,&b,&x);
         s=(a*x+b)/(a*x-b);
         printf("The value of s=%.2f\n",s);
}

