#include <stdio.h>

void main()
{
    int n;
    printf("enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // sorting
    int key;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}