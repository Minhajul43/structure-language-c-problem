#include<stdio.h>

int main()
{
    int cp, sp;

    // Input cost price and selling price
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    printf("Enter the selling price: ");
    scanf("%d", &sp);

    // Check if there is profit or loss
    if (sp > cp)
    {
        int profit = sp - cp;
        float percentage = (profit * 100.0) / cp; // Ensure division is done in float
        printf("\nProfit: %d\nProfit Percentage: %.2f%%\n", profit, percentage);
    }
    else if (cp > sp)
    {
        int loss = cp - sp;
        float percentage = (loss * 100.0) / cp; // Ensure division is done in float
        printf("\nLoss: %d\nLoss Percentage: %.2f%%\n", loss, percentage);
    }
    else
    {
        printf("\nNo profit, no loss.\n");
    }

    return 0;
}
