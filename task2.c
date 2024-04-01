/*
Задание 2. Инверсия старших

На вход программе подается беззнаковое 32-битное целое число N. Требуется изменить 
значения всех битов старшего байта числа на противоположные и вывести полученное 
таким образом число.

Данные на входе: Беззнаковое 32-битное целое число N
Данные на выходе: Одно целое число.

Пример №1
Данные на входе: 1
Данные на выходе: 4278190081

Пример №2
Данные на входе: 4278190081
Данные на выходе: 1
*/
#include <stdio.h>
#include <inttypes.h>


int main(int argc, char const *argv[])
{
    uint32_t num, temp, res;
    scanf("%u", &num);
    temp = ~(num >> 24) << 24;
    res = num << 24 >> 24 | temp;

    printf("%u\n", res);
    return 0;
}





