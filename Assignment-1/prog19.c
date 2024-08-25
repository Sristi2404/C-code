#include <stdio.h>
int main() 
{
    printf("***program to input any alphabet and check whether it is a vowel or consonant.***\n");
    printf("***Name:Sristi Shaw,Class:MCA1A,RollNo:57***\n");
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
        printf("%c is a vowel.\n", c);
    else
        printf("%c is a consonant.\n", c);
    return 0;
}
   
