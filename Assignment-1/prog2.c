#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("***Program to find the sum of individual digits of a given positive integer***\n");
    printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
    printf("Enter the value:"); // enter a integer value
    scanf("%d",&n);
    while(n>0)  // checks the condition
    {
        sum=sum+n%10;   // sum + remainder value
        n=n/10;

    }
    printf("Sum of individual digits of a positive integer is %d.\n",sum);  // prints the sum of individual digits
    return 0;
}
