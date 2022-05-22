#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row_size,col_size;
    printf("enter the row size:");
    scanf("%d",&row_size);
    printf("enter the col size:");
    scanf("%d",&col_size);
    int arr[row_size][col_size];
    
    int i,j;
    for(i=0;i<row_size;i++){
        for(j=0;j<col_size;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    int s;
    printf("enter the search element:");
    scanf("%d",&s);
    int flag=0,row,col;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            if(arr[i][j]==s)
            {
            row=i;
            col=j;
            flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("element not found");
    }
    else if (flag==1)
    {
        printf("element found at (%d,%d)",row,col);
    }
    
}