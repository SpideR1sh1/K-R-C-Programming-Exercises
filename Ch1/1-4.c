#include <stdio.h>

// print Fahrenheit-Celsius table
// for fahr = 0; fahr <= 300; fahr = fahr + 20


int main() {
    float farh, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 150;
    step = 7;

    celsius = lower;
    printf("Celsius Fahrenheit\n");
    while (farh <= upper) {
        farh = (9.0 / 5.0) * celsius + 32;
        printf("%3.0f %12.1f\n", celsius, farh);
        celsius = celsius + step;
    }


}