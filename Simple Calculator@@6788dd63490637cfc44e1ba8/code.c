// Your code here...
#include<stdio.h>
int main()
{
    char c;
    int a,b,result;
    scanf("%d%d%c",&a,&b,&c);
    switch (c)
    {
       case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
        result=a-b;
        printf("%d",result);
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