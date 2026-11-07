
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int n, m;
    int s = 0;
    int k = 1;

    printf("Введите число m: ");
    scanf("%d", &m);

    printf("Введите число n: ");
    scanf("%d", &n);

    for (int i = m; i >= n; i--)
    {
        s += i;
        printf("Выполнено %d раз\n", k++);
    }
    printf("Результат: %d\n", s);
    return 0;
}
