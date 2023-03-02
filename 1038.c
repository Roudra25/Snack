#include<stdio.h>
int main ()
{
    int x,y;
    scanf("%d %d",&x,&y);
    float ar[5]={4.00,4.50,5.00,2.00,1.50};
    float snack=ar[x-1]*y;
    printf("Total: R$ %.2f\n",snack);

    return 0;
}
