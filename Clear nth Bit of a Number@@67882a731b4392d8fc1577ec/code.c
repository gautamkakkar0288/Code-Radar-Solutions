// Your code here...
#include <stdio.h>
int main()
{
    int num,bit;
    scanf("%d%d",&num,&bit);
    int mask=~(1<<bit);
    int result =num&mask;
    printf("%d",result);
    return 0;
}