#include<stdio.h>
int main(){


    int array[5] ={1,2,3,4,5};
    int min =array[0];

    for(int i=0;i<5;i++)
    {

        if(array[i]<min)
        {
            min=array[i];
        }
    }
    printf("smallest element in the array is =%d",min);
    return 0;

}