#include <stdio.h>
int main() 
{
    printf("***program to check whether a number is even or odd***\n");
    printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
    return 0;
}

