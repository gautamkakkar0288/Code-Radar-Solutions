// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int s=n-i;s>=i+1;s--)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");

    }
    return 0;
}