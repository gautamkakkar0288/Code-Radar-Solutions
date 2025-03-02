// Your code here...
#include <stdio.h>
int main()
{
    int num,bit;
    scanf ("%d%d",&num,&bit);
    int nb= 1<<bit;
    if (num&nb)
    printf("1");
    else
    printf("0");
    return 0;
}