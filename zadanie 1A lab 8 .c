
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int n;
    printf("Введите конечную степень n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%.0lf\n", pow(2, i));
    }
    return 0;
}
