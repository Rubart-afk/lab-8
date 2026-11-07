#include <stdio.h>
#include <math.h>
int main() {
    double a;
    int n;
    double sum = 0;
    printf("Введите значение a: ");
    scanf("%lf", &a);
    printf("Введите значение n: ");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++) 
    {
        double denominator = pow(a, pow(2, i));
        sum += 1.0 / denominator;
    }
    printf("Значение ряда: %.*lf\n", 6,sum);
    return 0;
}
