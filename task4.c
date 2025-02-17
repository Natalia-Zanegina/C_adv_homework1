/*
Задание 4. Шифр Цезаря

На стандартном потоке ввода задается целое неотрицательное число N 
и последовательность допустимых символов в кодировке ASCII, оканчивающаяся 
точкой. Допустимые символы – латинские буквы 'a' ... 'z', 'A' ... 'Z' и пробел. 
Требуется закодировать латинские буквы ('a' ... 'z', 'A' ... 'Z') шифром Цезаря, 
пробелы вывести без изменения. Число N задает сдвиг в шифре. Шифр Цезаря 
заключается в следующем преобразовании. Пусть буквы алфавита пронумерованы 
от 0 до K - 1, где K - число символов в алфавите. Тогда символ с номером n 
кодируется символом с номером p = (n + N) mod K (mod - операция взятия остатка). 
На стандартном потоке вывода напечатать зашифрованное сообщение, оканчивающееся 
точкой. Преобразование требуется выполнять независимо для заглавных и строчных 
латинских букв.

Указание: использовать массивы запрещается.

Данные на входе: Натуральное число N (N > 0), после которого следует
сообщение.
Данные на выходе: Зашифрованное сообщение.

Пример №1
Данные на входе: 0 Hello World.
Данные на выходе: Hello World.

Пример №2
Данные на входе: 1 Aa.
Данные на выходе: Bb.
*/

#include <stdio.h>

#define K 26


int main(void)
{
    int n = 0;
    scanf("%d", &n);

    char c;

    while((c = getchar()) != '.')
    {
        if (c >= 'a' && c <= 'z')
            printf("%c", (c - 'a' + n) % K + 'a');
        else if (c >= 'A' && c <= 'Z')
            printf("%c", (c - 'A' + n) % K + 'A');
        else if (c == ' ')
            printf(" ");   
    }
    printf(".\n");

}