#include<stdio.h>


void main()
{
    int size,index;
    printf("enter the array size:");
    scanf("%d",&size);
    int array[100];
    printf("enter %d elements:",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
        
    }
    printf("The array you entered is ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
        
    }
    
    printf("\nenter the index you want to delete :",index);
    scanf("%d",&index);
    for(int i=index;i<size-1;i++)
    {
        array[i]=array[i+1];
    }

     printf("The array after deleting %d inbetween is: ",index);
    for(int i=0;i<size-1;i++)
    {
        printf("%d ",array[i]);
        
    }
}
