//Write a own version of strlen
#include<stdio.h>
int strlen(char *st)
{
    char *ptr = st;
    int len = 0;
    while(*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    char st[] = "Amar";
    int l = strlen(st);
    printf("The length of string is: %d", l);
    return 0;
}