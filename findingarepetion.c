#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    } printf("\n");
}
int method2(int arr[], int n)
{
    int visited[100]={0};
    printf("Repeated element is ");
    for(int i=0;i<n;i++)
    {
        visited[arr[i]]++;
        
        if(visited[arr[i]]>1)
        {
            printf("%d , ",arr[i]);
        } 
}   printf("\n") ;
return -1;
}
int main()
{
    int arr[]={4,5,6,7,8,9,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
     display(arr,n);
    // method2(arr,n);
    // display(arr,n);
    // int rep = method2(arr,n);
    // printf("Repeated arr is %d",rep);
    method2(arr,n);
}