#include <stdio.h>
int main()
{
    printf("***program to input any character and check whether it is an alphabet, digit, or special character. ***\n");
    printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
    char ch;
    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);
    /* Alphabet check */
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.\n", ch);
    }
    else 
    {
        printf("'%c' is special character.\n", ch);
    }
    return 0;
}
