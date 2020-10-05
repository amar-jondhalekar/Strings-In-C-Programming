#include<stdio.h>
#include<string.h>
int main()
{
    char str1[23] = "Amar";
    char *str2 = "Amar";
    int val = strcmp(str1, str2);
    printf("Now the val is: %d", val);  // TO check ascii value
    return 0;
}
