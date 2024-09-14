#include<stdio.h>

struct house{

    int room_quality;
    int establist_year;
    char city[50];
};





 int main() {

    int x;
    printf("Enter the number of house :");
    scanf("%d",&x);

    struct house h[x];

    for (int i = 0; i<x; i++)
    {
        printf("Enter the room quality of house :");
        scanf("%d",&h[i]. room_quality);

        printf("Enter the establist_year of house :");
        scanf("%d",&h[i]. establist_year);

        printf("Enter the city :");
        scanf("%s",h[i]. city);
    }

    for(int i=0;i>x;i++){

        printf("%d\n",h[i].room_quality);
        printf("%d\n",h[i].establist_year);
        printf("%s\n",h[i].city);
    }
    



    return 0;
}