// Your code here...
#include<stdio.h>
int main()
{
    char c;
    int a,b;
    scanf("%d%d%c",&a,&b,&c);
    switch (c)
    {
        case '+':
        printf("%d",(a+b));
        break;
        case '-':
        printf("%d",(a-b));
        break;
        case '*':
         printf("%d",(a*b));;
        break;
        case '/':
         printf("%d",(a/b));
        break;

    }
    return 0;
}