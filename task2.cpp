#include <cstdio>
#include <cmath>

int main() {
    double x, y, z;

    printf("Введіть значення x, y, z через пробіл: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    const double PI = 3.14;
    double rad130 = 130.0 * PI / 180.0;

    double term1 = pow(x, y / x);
    double term2 = cbrt(y / x);
    double term3 = sqrt(x);
    double term4 = (y * y - 8 * x) / exp(3);
    
    double a = fabs(term1 - term2) + term3 - term4;

    double tan_x = tan(x);
    double sin_xy = sin(x / y);
    
    double b = y * (tan_x * tan_x) - (z + cos(rad130)) / (sin_xy * sin_xy);

    int a_int_c = (int)a;
    int a_int_cpp = static_cast<int>(a);

    printf("\n--- Результати розрахунків ---\n");
    printf("a = %.6lf\n", a);
    printf("b = %.6lf\n", b);
    printf("Ціла частина 'a' (стиль C): %d\n", a_int_c);
    printf("Ціла частина 'a' (static_cast): %d\n", a_int_cpp);

    return 0;
}
