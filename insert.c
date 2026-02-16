#include<stdio.h>
void insert(int n,int arr[],int pass )
{
    pass--;
    for(int i=n-1;i>=0;i--)
    { 
        if(i>=pass)
        {
            arr[i+1]=arr[i];
        }
    }
    arr[pass]=678;
    n++;
    printf("Modified Array >>>>");
    for(int j=0;j<n;j++)
    {
        printf("%d",arr[j]);
    }
}
int main()
{
    int arr[100]={1,2,3,4,5,6,7,89,33};
    int n=9;
    int pass=7;
    insert(n,arr,pass);
    return 0;
}
