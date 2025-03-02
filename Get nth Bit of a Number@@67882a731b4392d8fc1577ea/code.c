// Your code here...
#include <stdio.h>
int main()
{
    int num,bit;
    scanf ("%d%d",&num,&bit);
    int nb= 1<<(sizeof(int)*bit-1);
    if (num&nb)
    printf("1");
    else
    printf("0");
    return 0;
}