#include <stdio.h>
/*If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he
made or loss he incurred*/

int main()
{
    int cost,sell;
    printf("enter the cost and selling price");
    scanf("%d%d",&cost,&sell);
    if(cost>sell){
        printf("amount to be loss is %d",cost-sell);
    }
    else
    {
        printf("amount to be profit is %d ",sell-cost);
    }
    return 0;
}
