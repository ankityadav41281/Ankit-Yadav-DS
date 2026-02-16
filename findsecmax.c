#include<stdio.h>
int max2(int n,int arr[])
{
    int max =arr[0];
    int secmax=arr[1];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            secmax =max;
            max=arr[i];
        }
        if(arr[i]<max && arr[i]>secmax)
        {
            secmax =arr[i];
        }
    }
    return secmax;
}
int main()
{
    int arr[]={1,23,3,4,56,7,89,9,0};
    int n=9;
    printf("%d",max2(n,arr));
    return 0;}