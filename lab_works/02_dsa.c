//  to delete any number from an array at a specified position
#include<stdio.h>
void main(){
    int arr[100],n;
    printf("Enter the size of the array (max 100)");
    scanf("%d",&n);

    // creating the array
    for(int i=0; i<n;i++)
    {
        printf("enter value:");
        scanf("%d",&arr[i]);
    }

    int pos;
    printf("Enter the position of the element to be deleted!");
    scanf("%d",&pos);
    int index = pos -1 ;

    // operation for deletion
    for(int i=index;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n--; //array size decreases by 1

    // printing the new array
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
}