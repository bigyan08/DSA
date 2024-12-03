// wap to insert a value into the specified position of the array
#include<stdio.h>
void main(){
    int arr[100],n;

    printf("enter the size of the array (max 100):");
    scanf("%d",&n);

    // Entering the values into the array
    for(int i=0;i<n;i++)
    {
        printf("Enter the value:");
        scanf("%d",&arr[i]);
    }

    int pos, new_val,index;

  printf("Enter the position and new value:");
  scanf("%d%d",&pos,&new_val);
  index = pos - 1;

  for(int i=n;i>=index;i--)
  {
    arr[i+1] = arr[i];
  }
  
  arr[index] = new_val;
  n++;

  // printing the new array
  printf("THe new array is:");
  for (int i = 0; i < n; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
