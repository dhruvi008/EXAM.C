#include<stdio.h>

int main(){
    
    for (int i = 0; i<6; i++)
    {
        for (int j=1;j<i; j++)
        {
            printf("%d ",(11-i)*(11-i));
        }

        printf("\n");
        
    }
    
    return 0;
}