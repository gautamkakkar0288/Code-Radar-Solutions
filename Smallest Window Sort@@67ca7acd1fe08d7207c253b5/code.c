// Your code here...
#include <stdio.h>
int findUnsortedSubarray(int arr[],int n)
{
    int start=-1,end=-1;
    for (int i=0;i<=n;i++)
    {
        if (arr[i]>arr[i+1])
        start=i;
        break;

    }
    for (int i=n;i>0;i--)
    {
        if(arr[i]<arr[i+1])
        {
        end=i;
        break;
        }
    }
    if(start==-1)
    return 0;
    return(end-start+1);

}