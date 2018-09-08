#include <stdio.h>
#include <stdlib.h>


int main()
{
    float f;
    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &f);
    float c = (5*(f - 32)) / 9;
    printf("A temperatura %.1f F convertida para celsius eh: %.1f C\n", f, c);


    return 0;
}
