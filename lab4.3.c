#include <stdio.h>
#include "lab4.1.h"

int main() {
    double a, b, c;

    printf("Введите длины сторон треугольника:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (!is_valid_triangle(a, b, c)) {
        printf("Ошибка: такой треугольник не существует.\n");
        return 1;
    }

    printf("Периметр: %.2lf\n", perimeter(a, b, c));
    printf("Площадь: %.2lf\n", area(a, b, c));

    return 0;
}
