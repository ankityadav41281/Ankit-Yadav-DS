#include<stdio.h>
void reverse(int n ,int arr[])
{
    int i=0; int j=n-1;
    while(j>i)
    {
        int tamm=arr[i];
        arr[i]=arr[j];
        arr[j]=tamm;
        i++;
        j--;
    }

}
void display(int arr[],int n)
{
    for(int k=0;k<n;k++)
    {
        printf("%d,",arr[k]);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    reverse(n,arr);
    display(arr,n);
    return 0;
}