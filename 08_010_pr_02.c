#include<stdio.h>
int main()
{
    char str1[34];
    char str2[34];
    char c;
    int i = 0;
    printf("Enter the first string:\n");
    scanf("%s", &str1);
    
    printf("Enter the value of second string character by character:\n");
    
    while(c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
       str2[i] = '\0';
        printf("The value of str1 is %s\n", str1);
        printf("The value of str2 is %s\n", str2);
    return 0;
}

