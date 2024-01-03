#include<stdio.h>

void main()
{
    int n;
    printf("enter the size\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array \n");
    int i,j,temp;
    for(i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    //sorting
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //display
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}