#include<stdio.h>
float temp_change_c_to_f(float a);
float temp_change_f_to_c(float b);
int main()
{
char ch;
float temp;
printf("if celcius then enter c or C\n\n");
printf("if forenhight then enter f or F\n\n");

printf("enter the category of temprature");
scanf("%c",&ch);
printf("enter the value of temprsture:");
scanf("%f",&temp);
switch(ch)
{
    case 'c':
    case 'C':
        printf("Celsius to Fahrenheit: %.2f\n", temp_change_c_to_f(temp));
        break;
    case 'f':
    case 'F':
        printf("Fahrenheit to Celsius: %.2f\n", temp_change_f_to_c(temp));
        break;
    default:
        printf("Invalid temperature type\n");
        break;
}

return 0;
}
float temp_change_c_to_f(float a)
{
return (a * 9.0 / 5.0) + 32;
}
float temp_change_f_to_c(float b)
{
    return (b - 32) * 5.0 / 9.0;
}
