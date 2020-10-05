#include<stdio.h>
#include<string.h>
int main()
{
    char str1[23] = "Amar";
    char *str2 = "Jondhalekar";
    strcat(str1, str2);
    printf("The str1 is: %s", str1);
    return 0;
}