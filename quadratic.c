#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, root_1, root_2, real, imaginary;
    printf("Enter coefficient 'a': ");
    scanf("%lf", &a);
    
    printf("Enter coefficient 'b': ");
    scanf("%lf", &b);
    
    printf("Enter coefficient 'c': ");
    scanf("%lf", &c);

    d = b * b - 4 * a * c;

    // Real and different roots
    
    if (d > 0) {
        root_1 = (-b + sqrt(d)) / (2 * a);
        root_2 = (-b - sqrt(d)) / (2 * a);
        printf("Root 1 = %.2lf \nRoot 2 = %.2lf", root_1, root_2);
    }

    // Real and equal roots
    
    else if (d == 0) {
        root_1 = root_2 = -b / (2 * a);
        printf("Root 1 and Root 2 = %.2lf;", root_1);
    }

    // Unreal roots
    
    else {
        real = -b / (2 * a);
        imaginary = sqrt(-d) / (2 * a);
        printf("Root 1 = %.2lf+%.2lfi \nRoot 2 = %.2f-%.2fi", real, imaginary, real, imaginary);
    }

    return 0;
} 
