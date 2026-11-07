
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, h;
    printf("Функция: y = 2^x - 2x^2 - 1\n");
    printf("Интервал: [2; 4]\n");

    printf("Введите шаг табуляции: ");
    scanf("%lf", &h);
    printf("\n-------------------------\n");
    printf("|     x     |    f(x)   |\n");
    printf("-------------------------\n");
    for (x = 2; x <= 4; x += h)
    {
        y = pow(2, x) - 2 * pow(x, 2) - 1;

        printf("| %9.2lf | %9.4lf |\n", x, y);
    }

    printf("-------------------------\n");

    return 0;
}
