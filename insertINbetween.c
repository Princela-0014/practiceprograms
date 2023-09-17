#include<stdio.h>


void main()
{
    int size,value,index;
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
    
    printf("\nenter the element you want to insert inbetween:");
    scanf("%d",&value);
    printf("\nenter the index you want to insert %d:",value);
    scanf("%d",&index);
    for(int i=size;i>index;i--)
    {
        array[i]=array[i-1];
    }
    array[index]=value;
     printf("The array after inserting %d inbetween is: ",value);
    for(int i=0;i<=size;i++)
    {
        printf("%d ",array[i]);
        
    }
}
