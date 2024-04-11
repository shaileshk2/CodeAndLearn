#include <stdio.h>
int prod_arr(int [],int);
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
   
    printf("%d", prod_arr(arr, n));
    return 0;
}

int prod_arr(int arr[], int n) {
   int result = 1;
   /* Wil multiply each element and store it in result */
   for (int i = 0; i < n; i++)
    result = result * arr[i];
   return result;
}
