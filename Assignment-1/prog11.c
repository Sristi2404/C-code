#include <stdio.h>
int main()
{
    printf("***program to check whether a number is a palindrome or not***\n");
    printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
    int n, reversed = 0, remainder, original;
    printf("Enter the number:");
    scanf("%d", &n);
    original = n;
    // reversed integer is stored in reversed variable
    while (n != 0) 
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
    return 0;
}
