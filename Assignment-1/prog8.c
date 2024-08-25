#include<stdio.h>
int main()
{
    printf("***program to check if a given number is a strong number***\n");
    printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
    int n,i;
    int fact,rem;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    int temp = n;
    while(n)
    {
      i = 1,fact = 1;
      rem = n % 10;
      while(i <= rem)
      {
        fact = fact * i;
        i++;
      }
      sum = sum + fact;
      n = n / 10;
    }
    if(sum == temp)
      printf("%d is a strong number\n",temp);
    else
      printf("%d is not a strong number\n",temp);
   return 0;
}
