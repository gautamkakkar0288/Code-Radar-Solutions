// Your code here...
#include<stdio.h>
int main()
{
    int c=65,n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=n;j>=1;j--)
        {
            printf("%c",c);
            c++;

        }
        printf("\n");
    }
    return 0;

}