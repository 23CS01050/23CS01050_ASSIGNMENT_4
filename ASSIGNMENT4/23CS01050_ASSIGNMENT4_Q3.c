#include<stdio.h>
int main()

{
    int x,y;

    printf("Enter Credit Score:");
    scanf("%d",&x);

    printf("Enter Current Balance:");
    scanf("%d",&y);

    if (x<600) printf("The credit interest rate is %d",(y/100)*15);

    else if (x>=600 && x<750) printf("The credit calculated rate is %d ",(y/100)*12);

    else if (x>=750) printf("The credit calculated rate is %d ",(y/100)*10);

    return 0;





}