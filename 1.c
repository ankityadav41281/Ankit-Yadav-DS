#include<stdio.h>
void display(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
int insert_pos(int arr[], int n, int x, int p)
{

  if (p > n + 1)
  {
    return n;
  }
  for (int j = n - 1; j >= p - 1; j--)
  {
    arr[j + 1] = arr[j];
  }
  arr[p - 1] = x;
  return n + 1;
}
int delete_pos(int arr[], int n, int x)

{
  int i;
  for (i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      break;
    }
  }
  if (i == n)
  {
    return n;
  }
  for (int j = i; j <= n - 2; j++)
  {
    arr[j] = arr[j+1];
  }
  return n - 1;
}
int main()
{
  int arr[7] = {1, 2, 3, 4, 5, 6};
  int n = 6;
  display(arr, n);
  n = insert_pos(arr, n, 100, 1);
  display(arr, n);
  n = delete_pos(arr, n, 3);
  display(arr, n);
}
