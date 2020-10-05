#include<stdio.h>
#include<string.h>
int main()
{
    char st1[35];
    char st2[35];
    char c;
    int i = 0;
    
    printf("Enter the first string :\n");
    scanf("%s", st1);

    printf("Enter the second string : \n");

    while(c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }

    st2[i-1] = '\0';

    printf("The first string is %s", st1);
    printf("The second string is %s", st2);
    printf("The comparison of 2 string is %d", strcmp(st1, st2));
    return 0;
}