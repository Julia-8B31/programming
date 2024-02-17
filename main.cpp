#include <iostream>
#include <cmath>

std::string convertToBase(int number, int base) {  // Создаем строку с символами, используемыми для представления цифр в различных системах счисления
    std::string codes = "0123456789ABCDEF";  // Создаем пустую строку для хранения результата
    std::string sum = "";          // Переводим число в указанную систему счисления
    while (number > 0) {
        sum += codes[number % base];       // Делим число на основание системы счисления
    }
    std::string result = "";          // Инвертируем строку sum, чтобы получить правильный порядок цифр
    for (int i = sum.length() - 1; i >= 0; i--) result += sum[i];
    return result;
}
// Функция для конвертации числа N из десятичной системы в p-ичную (по значению)
std::string convertByZnachenie(int N, int p) {
    std::string result = "";

    // Перевод числа N в p-ичную систему
    result = convertToBase(N,p) + result; // Добавление символа в начало строки результата
    return result; // Возврат результата
}

// Функция для конвертации числа N из десятичной системы в p-ичную (по ссылке)
void convertBySsylka(int N, int p, std::string& result) {  //, string& resul1515t -  ссылка на строку result
    result = ""; // Обнуление результата

    // Перевод числа N в p-ичную систему
    result = convertToBase(N,p) + result; // Добавление символа в начало строки результата
}

// Функция для конвертации числа N из десятичной системы в p-ичную (через указатель)
void convertByUkazatel(int N, int p, std::string* result) {
    *result = ""; // Обнуление результата

    // Перевод  числа N в p-ичную систему
    *result = convertToBase(N,p) + *result; // Добавление символа в начало строки результата
}

int main() {
    setlocale(LC_ALL, "Russian");
    int p, N;

    // Ввод основания системы счисления и числа N
    std::cout << "Введите основние (от 2 до 16): ";
    std::cin >> p;
    std::cout << "Введите число в десятичной системе счисления: ";
    std::cin >> N;

    // Передача параметров по значению
   std:: string resultByZnachenie = convertByZnachenie(N, p);
    std::cout << "С помощью значения: " << resultByZnachenie << std::endl;

    // Передача параметров по ссылке
    std::string resultBySsylka;
    convertBySsylka(N, p, resultBySsylka);
    std::cout << "С помощью ссылки: " << resultBySsylka << std::endl;

    // Передача параметров через указатель
    std::string resultByUkazatel;
    convertByUkazatel(N, p, &resultByUkazatel);
    std::cout << "С помощью указателя: " << resultByUkazatel <<std:: endl;

    return 0;
}
