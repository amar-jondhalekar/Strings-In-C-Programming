#include<stdio.h>
int main()
{
    int arr[10] = {3,0,8,1,12,8,9,2,13,10};
    int x, y, z;
    x = ++arr[2]; // arr[2] = 8, so ++arr[2] = 8 + 1 = 9,  but after z = arr[x++] x = 10
    y = arr[2]++; // arr[2]++ is 8 + 1 = 9
    z = arr[x++]; // arr[x++]  means x = 9 and x++ = 9 + 1 = 10, so now z also 10
    printf("%d %d %d", x, y, z);
    return 0;
}

//ans: 10 9 10

//refer:- https://stackoverflow.com/questions/44710081/decrement-and-increment-with-simple-array-example-in-c