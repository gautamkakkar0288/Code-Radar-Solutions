// Your code here...
#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for (N;N>0;N--)
    {
        printf("\n");
        for (int j=1;j<N;j--)
        {
            printf("*");
        }
    }
    return 0;
}