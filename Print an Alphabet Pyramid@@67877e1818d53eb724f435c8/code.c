// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=65;j<=i+65;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}