#include <stdio.h>  
int main()  
{ 
    printf("***program to check whether a number is negative, positive, or zero***\n");
    printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
    int A;  
    printf("Enter the number A:");  
    scanf("%d",&A);  
    if (A > 0)  
        printf("%d is positive.\n", A);  
    else if (A < 0)  
        printf("%d is negative.\n", A);  
    else if (A == 0)  
        printf("%d is zero.\n", A);  
    return 0;  
}
