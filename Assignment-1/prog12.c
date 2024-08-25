#include<stdio.h>
int main ()
{
  printf("***program to find the maximum between two numbers***\n");
  printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
  int num1, num2;
  printf("Enter the two numbers: ");
  scanf("%d%d", &num1, &num2);
  if (num1 > num2) 
    printf("%d is greater\n", num1);
  else
    printf("%d is greater\n", num2);
  return 0;
}
