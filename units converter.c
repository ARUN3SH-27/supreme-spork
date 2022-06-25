#include <stdio.h>

double metersToFeet(double meters);
double gramsToPounds(double grams);
double celsiusToFahrenheit(double celsius);

int main(void) {
    int nb, iConv;
    double value;
    char unit;
    printf("enter 1 and hit enter\n");
    printf("enter the value and the unit to convert to(m,g,c)\n");
    printf("enter m to convert meters to feet\n");
    printf("enter g to convert grams to pounds\n");
    printf("enter c to convert celsius to farenheit\n");
    scanf("%d", &nb);
    for (iConv = 0; iConv < nb; iConv = iConv + 1) {
        scanf("%lf %c", &value, &unit);
        if (unit == 'm'){
                printf("%lf ft\n", metersToFeet(value));
        } else if (unit == 'g'){
                printf("%lf lbs\n", gramsToPounds(value));
        }
        else if (unit == 'c'){
                printf("%lf f\n", celsiusToFahrenheit(value));}
        else{
            printf("wrong option");
            }
        }
    }


double metersToFeet(double meters)
{
    double feet_per_meter = 3.2808;
    return meters*feet_per_meter;
}
 
double gramsToPounds(double grams)
{
    double pounds_per_gram = .002205;
    return grams * pounds_per_gram;
}
 
double celsiusToFahrenheit(double celsius)
{
    double fahrenheit_per_celsius = 1.8;
    double zero_celsius_in_fahrenheit = 32;
    return celsius * fahrenheit_per_celsius + zero_celsius_in_fahrenheit;
}
