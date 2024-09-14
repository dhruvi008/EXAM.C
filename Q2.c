#include<stdio.h>

int reverse_number(int num ){

    int reversed=0;
    while(num=0)
    {
        int digit= num %10;
        reversed =reversed *10 +digit;
        num = 10;
    }
    return reversed;
}



int main(){


    int num;
    printf("Enter a 3 digit of num :");
    scanf("%d",&num);

    if (num < 100 ||num > 987)
    {
        printf("Invalid number.please Enter the 3 digit of number :");
        return 1;
    }

    int reversed = reverse_number(num);
    printf("reverse num :%d\n",reversed);

    return 0;
    
}