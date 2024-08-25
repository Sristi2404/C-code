#include <stdio.h>
int main() 
{
    printf("***program to check whether a character is alphabet or not.***\n");
    printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.\n", c);
    else
        printf("%c is not an alphabet.\n", c);
    return 0;
}
