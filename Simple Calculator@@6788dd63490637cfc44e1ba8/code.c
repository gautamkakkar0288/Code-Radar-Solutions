// Your code here...
#include<stdio.h>
int main()
{
    char c;
    int a,b;
    scanf("%d%d",&a,&b);
    scanf("%c",&c);
    switch (c)
    {
        case '+':
        printf(a+b);
        break;
        case -:
        printf(a-b);
        break;
        case *:
        printf(a*b);
        break;
        case /:
        printf(a/b);
        break;

    }
    return 0;
}