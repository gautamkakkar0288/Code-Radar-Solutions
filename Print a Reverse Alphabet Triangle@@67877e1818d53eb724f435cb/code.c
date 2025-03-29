// Your code here...
#include<stdio.h>
int main()
{
    int c=65,n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int j=n;j>=i;j--)
        {
            printf("%c ",c);
            c++;

        }
        c=65;
        
        printf("\n");
    }
    return 0;

}