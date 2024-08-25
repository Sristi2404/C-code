#include <stdio.h>
int main()
{
    printf("***program to find the maximum among the three numbers***\n");
    printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
    int A,B,C;
    printf("Enter the three numbers: ");
    scanf("%d%d%d",&A,&B,&C);
   // finding max using compound expressions
    if (A >= B && A >= C)
        printf("%d is the largest number.\n", A);
    else if (B >= A && B >= C)
        printf("%d is the largest number.\n", B);
    else
        printf("%d is the largest number.\n", C);
    return 0;
}
  
