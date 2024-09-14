#include<stdio.h>
int main(){


    
    int array[5];

    for(int i=0;i<5;i++)
    {

        printf("Enter an element of array[%d]=",i);
        scanf("%d",array+i);
    }

    for(int i=0;i<5;i++)
    {

        printf("\n arr[%d]=%d",i,(*(array+i))**(array+i));
    }
    return 0;
} 