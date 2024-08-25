#include <stdio.h>

int main()
{  
    printf("***Program of Sum and Average of 3 numbers***\n");
    printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");    
    int num1, num2, num3, sum;
    float avg;
    
    printf("Enter the First Number  = ");
    scanf("%d",&num1);

    printf("Enter the Second Number = ");
    scanf("%d",&num2);

    printf("Enter the Third Number  = ");
    scanf("%d",&num3);
    
    sum  = num1 + num2 + num3;

    avg = sum / 3;

    printf("\nThe Sum of Three Numbers     = %d", sum); 
    printf("\nThe Average of Three Numbers = %.2f\n", avg);
}
