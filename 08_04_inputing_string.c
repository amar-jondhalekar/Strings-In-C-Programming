#include<stdio.h>
int main()
{
    char s[35];
    printf("Enter your name:");
    // scanf("%s", s);
    gets(s); // to get multi words string with spaces.
    puts(s); // print the string places the cursor on the next line.
    //printf("Your name is %s", s);
    return 0;
}