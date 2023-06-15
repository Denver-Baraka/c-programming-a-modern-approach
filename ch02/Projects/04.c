#include <stdio.h>

#define TAX 5

int main(void)
{
    float amount;
    float with_tax;
    
    printf("Enter an amount: ");
    scanf("%f", &amount);

    with_tax = ((100.00f + TAX) / 100.00f) * amount;
    printf("with tax added: $%.2f", with_tax);

    return 0;
}
