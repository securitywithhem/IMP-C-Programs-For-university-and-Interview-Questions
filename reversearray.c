#include<stdio.h>

void reverse(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

// int main()
// {
//     int arr[10];
//     int n;
//     printf("Enter the size of the array: ");
//     scanf("%d",&n);
//     printf("Enter the elements of the array: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//         }
//         reverse(arr,n);
//         printf("The reversed array is: ");
//         for (int i = 0; i < n; i++)
//         {
//             printf("%d ",arr[i]);
//         }
// }

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
        
}