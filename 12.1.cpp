﻿#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int day, month;

    cout << "введите день" << endl;
    cin >> day;
    cout << "введите номер месяца" << endl;
    cin >> month;

    if (day == 30 || day == 31 && month == 2 || day == 31 && month == 4 || month == 6 || month == 9 || month == 11)
        cout << "в этом месяце нет столько дней" << endl;
    else {


        switch (day) {
        case 1:
            cout << "первое ";
            break;
        case 2:
            cout << "второе ";
            break;
        case 3:
            cout << "третье ";
            break;
        case 4:
            cout << "четвёртое ";
            break;
        case 5:
            cout << "пятое ";
            break;
        case 6:
            cout << "шестое ";
            break;
        case 7:
            cout << "седьмое ";
            break;
        case 8:
            cout << "восьмое ";
            break;
        case 9:
            cout << "девятое ";
            break;
        case 10:
            cout << "десятое ";
            break;
        case 11:
            cout << "одиннадцатое ";
            break;
        case 12:
            cout << "двенадцатое ";
            break;
        case 13:
            cout << "тринадцатое ";
            break;
        case 14:
            cout << "четырнадцатое ";
            break;
        case 15:
            cout << "пятнадцатое ";
            break;
        case 16:
            cout << "шестнадцатое ";
            break;
        case 17:
            cout << "семнадцатое ";
            break;
        case 18:
            cout << "восемнадцатое ";
            break;
        case 19:
            cout << "девятнадцатое ";
            break;
        case 20:
            cout << "двадцатое ";
            break;
        case 21:
            cout << "двадцать первое ";
            break;
        case 22:
            cout << "двадцать второе ";
            break;
        case 23:
            cout << "двадцать третье ";
            break;
        case 24:
            cout << "двадцать четвертое ";
            break;
        case 25:
            cout << "двадцать пятое ";
            break;
        case 26:
            cout << "двадцать шестое ";
            break;
        case 27:
            cout << "двадцать седьмое ";
            break;
        case 28:
            cout << "двадцать восьмое ";
            break;
        case 29:
            cout << "двадцать девятое ";
            break;
        case 30:
            cout << "тридцатое ";
            break;
        case 31:
            cout << "тридцать первое ";
            break;
        default:
            cout << "default case";
            break;
        }

        switch (month) {
        case 1:
            cout << "января";
            break;
        case 2:
            cout << "февраля";
            break;
        case 3:
            cout << "марта";
            break;
        case 4:
            cout << "апреля";
            break;
        case 5:
            cout << "мая";
            break;
        case 6:
            cout << "июня";
            break;
        case 7:
            cout << "июля";
            break;
        case 8:
            cout << "августа";
            break;
        case 9:
            cout << "сентября";
            break;
        case 10:
            cout << "октября";
            break;
        case 11:
            cout << "ноября";
            break;
        case 12:
            cout << "декабря";
            break;
        default:
            cout << "default case";
            break;
        }
    }
    return 0;
}

