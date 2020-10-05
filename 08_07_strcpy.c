#include<stdio.h>
#include<string.h>
int main()
{
    char *st = "This";
    char str2[34];
    strcpy(str2, st);
    printf("Now str2 is: %s", str2);
    return 0;
}