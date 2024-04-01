/* Задание 1. Сколько раз встречается максимум

На стандартном потоке ввода задается натуральное число N (N > 0), после которого 
следует последовательность из N целых чисел.
На стандартный поток вывода напечатайте, сколько раз в этой последовательности 
встречается максимум.

Указание: использовать массивы запрещается.

Данные на входе: Натуральное число N (N > 0), после которого следует
последовательность из N целых чисел.
Данные на выходе: Одно целое число.

Пример №1
Данные на входе: 6 1 2 3 2 0 3
Данные на выходе: 2

Пример №2
Данные на входе: 3 5 2 -1
Данные на выходе: 1.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, num, max = 0, count_max = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
            count_max = 1;
        }
        else if (num == max)
            count_max++;
    }

    printf("count = %d\n", count_max);
    


    return 0;
}
