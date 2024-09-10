/*CONVERTING FAHRENITE TO 
CELCIUS...*/

#include <stdio.h>

int main()
{
    float f;
    printf("WELCOME TO TEMPRATURE CONVERTER...\n");
    printf("PLZ ENTER TEMP IN F:");
    scanf("%f", &f);
    float c = (f - 32) * 5 / 9;
    printf("TEMPRATURE IN C IS:%.2f", c);
    return 0;
}