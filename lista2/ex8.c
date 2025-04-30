#include <stdio.h>

int main()
{
    float tempoemcelsius, tempoemfahrenheit;
    
    printf("Qual a temperatura em Celsius?\n");
    scanf("%f", &tempoemcelsius);
    
    tempoemfahrenheit = tempoemcelsius * 1.8 + 32;
    printf("É %.2f°F\n", tempoemfahrenheit);
    
    return 0;
}