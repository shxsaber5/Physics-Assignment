// Assignment 1 
// Problem 1 
// Solve : 


#include <stdio.h>
#include <math.h>

void determine_color(double wavelength) {
    if (wavelength >= 380 && wavelength < 450) printf("Color: Violet\n");
    else if (wavelength >= 450 && wavelength < 485) printf("Color: Blue\n");
    else if (wavelength >= 485 && wavelength < 500) printf("Color: Cyan\n");
    else if (wavelength >= 500 && wavelength < 565) printf("Color: Green\n");
    else if (wavelength >= 565 && wavelength < 590) printf("Color: Yellow\n");
    else if (wavelength >= 590 && wavelength < 625) printf("Color: Orange\n");
    else if (wavelength >= 625 && wavelength <= 750) printf("Color: Red\n");
    else printf("Color: Out of visible range\n");
}

int main() {
    int m;
    double d, theta, lambda;

    scanf("%d %lf %lf", &m, &d, &theta);

    d *= 1e-6;
    lambda = (d * sin(theta * M_PI / 180)) / m;
    lambda *= 1e9;

    printf("%.2f nm\n", lambda);
    determine_color(lambda);

    return 0;
}
