// create a slice function to divide given string
#include<stdio.h>
void slice(char *str, int m, int n)
{
    int i = 0;
    while((m+i) < n){
        str[i] = str[i+m];
        i++;
    }
    str[i] = '\0';
}
int main()
{
    char str[] = "AmarJondhalekar";
    slice(str, 1, 7);
    printf("%s", str);
    return 0;
}