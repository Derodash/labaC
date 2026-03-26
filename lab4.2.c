#include <math.h>
#include "lab4.1.h"

// Проверка треугольника
int is_valid_triangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Периметр
double perimeter(double a, double b, double c) {
    return a + b + c;
}

// Площадь (формула Герона)
double area(double a, double b, double c) {
    double p = perimeter(a, b, c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
