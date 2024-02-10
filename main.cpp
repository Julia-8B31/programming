#include <iostream>

#include <cmath>
using namespace std;

string convertToBase(int number, int base) {  // Создаем строку с символами, используемыми для представления цифр в различных системах счисления
    string codes = "0123456789ABCDEF";  // Создаем пустую строку для хранения результата
    string sum = "";          // Переводим число в указанную систему счисления
    while (number > 0) {

        number /= base;
    }
    string result = "";          // Инвертируем строку sum, чтобы получить правильный порядок цифр
    for (int i = sum.length() - 1; i >= 0; i--) result += sum[i];
    return result;
}
// Функция для конвертации числа N из десятичной системы в p-ичную (по значению)
string convertByZnachenie(int N, int p) {
    string result = "";

    // Перевод числа N в p-ичную систему
    result = convertToBase(N,p) + result; // Добавление символа в начало строки результата
    return result; // Возврат результата
}

// Функция для конвертации числа N из десятичной системы в p-ичную (по ссылке)
void convertBySsylka(int N, int p, string& result) {  //, string& result -  ссылка на строку result
    result = ""; // Обнуление результата

    // Перевод числа N в p-ичную систему
    result = convertToBase(N,p) + result; // Добавление символа в начало строки результата
}

// Функция для конвертации числа N из десятичной системы в p-ичную (через указатель)
void convertByUkazatel(int N, int p, string* result) {
    *result = ""; // Обнуление результата

    // Перевод  числа N в p-ичную систему
    *result = convertToBase(N,p) + *result; // Добавление символа в начало строки результата
}

int main() {
    setlocale(LC_ALL, "Russian");
    int p, N;

    // Ввод основания системы счисления и числа N
    cout << "Введите основние (от 2 до 16): ";
    cin >> p;
    cout << "Введите число в десятичной системе счисления: ";
    cin >> N;

    // Передача параметров по значению
    string resultByZnachenie = convertByZnachenie(N, p);
    cout << "С помощью значения: " << resultByZnachenie << endl;

    // Передача параметров по ссылке
    string resultBySsylka;
    convertBySsylka(N, p, resultBySsylka);
    cout << "С помощью ссылки: " << resultBySsylka << endl;

    // Передача параметров через указатель
    string resultByUkazatel;
    convertByUkazatel(N, p, &resultByUkazatel);
    cout << "С помощью указателя: " << resultByUkazatel << endl;

    return 0;
}
