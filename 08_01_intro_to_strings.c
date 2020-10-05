#include<stdio.h>
int main()
{
    char name[] = {'A', 'm', 'a', 'r', '\0'};
    char str[] = "Amar";
    printf("The address OF NAME IS : %u\n", name[0]);
    printf("The address OF NAME IS : %u\n", name[1]);
    printf("The address OF NAME IS : %u\n", name[2]);
    printf("The address OF NAME IS : %u\n", name[3]);

    return 0;
}