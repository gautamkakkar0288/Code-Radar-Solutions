// Your code here...
#include <stdio.h>
int main()
{
    int num,bit;
    scanf("%d%d",&num,&bit);
    int mask=~(1<<bit);
    if (num&mask)
    printf("1");
    else printf("0");
    return 0;
}