#include <stdio.h>

// print Fahrenheit-Celsius table
// for fahr = 0; fahr <= 300; fahr = fahr + 20


int main() {
    float farh, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    farh = lower;

    while (farh <= upper) {
        celsius = (5.0 / 9.0) * (farh - 32);
        printf("%3.0f %6.1f\n", farh, celsius);
        farh = farh + step;
    }


}