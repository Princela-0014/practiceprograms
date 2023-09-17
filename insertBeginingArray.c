#include<stdio.h>


void main()
{
    int size,value;
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
    printf("\nenter the element you want to insert in the begining:");
    scanf("%d",&value);
    for(int i=size;i>0;i--)
    {
        array[i]=array[i-1];
    }
    array[0]=value;
     printf("The array after inserting %d in the begining is: ",value);
    for(int i=0;i<=size;i++)
    {
        printf("%d ",array[i]);
        
    }
    }

