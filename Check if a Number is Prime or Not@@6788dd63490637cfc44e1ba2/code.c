// Your code here...
#include<stdio.h>
int main()
{
    int a,flag=0;
    scanf("%d",&a);
    if (a<=1)
    printf("Not Prime");
    else
    {
        for (int i=2;i<=n;i++)
        {
            if(a%i==0)
            flag=flag+1;
        }
        if (flag==1)
        printf("Prime");
        else printf("Not Prime");
    }
    return 0;
}