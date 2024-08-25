#include <stdio.h>
int main()
{
    printf("***Program to check whether a given number is an Armstrong number or not\n");
    printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
    int n;
    int p = 0;
    printf("Enter the number:");
    scanf("%d",&n);
   int temp = n; 
    // Calculating the sum of individual digits
    while (n > 0)
    {
        int rem = n % 10;
        p = (p) + (rem * rem * rem);
        n = n / 10;
    }
 
    // Condition to check whether the
    // value of P equals to user input
    // or not.
    if (temp == p) {
        printf("It is an Armstrong Number\n");
    }
    else
    {
        printf("It is not an Armstrong Number\n");
    }
    return 0;
}
