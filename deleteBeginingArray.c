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
    printf("\ndeleting %d from the array:",value);
    for(int i=0;i<size;i++)
    {
        array[i]=array[i+1];
        
    } 
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
        
    } 


    
    


}
