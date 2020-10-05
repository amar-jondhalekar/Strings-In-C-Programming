#include<stdio.h>
int main()
{
    // char str[] = "Amar";
    char str[] = {'a', 'm', 'a', 'r', '\0'};
    char *ptr = str;
    while(*ptr != '\0')
    {
        printf("character %c\n", *ptr);
        ptr++;
    }
    return 0;
}