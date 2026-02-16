

#include <stdio.h>
void Max(int n, int arr[]) 
{
    if (n <= 0) return; 

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("max = %d\n", max);
}

int main() {
    int arr[] = {1, 23, 45, 67, 87, 65, 43, 32, 1234, 22, 33, 44, 55, 67, 89, 98, 90};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    Max(n, arr);

    return 0; 
}