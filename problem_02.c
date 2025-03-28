// Assignment 1 
// Problem 2 
// Solve: 2


#include <stdio.h>
#include <math.h>

int main() {
    int m1 = 3, m2 = 2;
    double lambda1 = 530, lambda2 = 700;
    double theta1 = 65.0, theta2, d, sin_theta2;

    d = (m1 * lambda1) / sin(theta1 * M_PI / 180);
    sin_theta2 = (m2 * lambda2) / d;

    if (sin_theta2 > 1) printf("No valid solution\n");
    else {
        theta2 = asin(sin_theta2) * 180 / M_PI;
        printf("%.2f degrees\n", theta2);
    }

    return 0;
}
