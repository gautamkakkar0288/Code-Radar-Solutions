// Your code here...
#include<stdio.h>
void bubbleSort(int arr[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
             if (arr[i]<arr[i+1])
             {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
             }

        }
    }
}
void printArray(int arr[],int n)
{
    for (int i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}
