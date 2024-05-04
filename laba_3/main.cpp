#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
/*
// задание 1
bool isPalindrome(std::string str) {
    // Удаляем все пробелы из строки
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());

    // Преобразуем все символы в нижний регистр
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Проверяем, является ли строка палиндромом
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "rus");
    std::string input;
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "Строка является палиндромом." << std::endl;
    }
    else {
        std::cout << "Строка не является палиндромом." << std::endl;
    }

    return 0;
}

 //Was it a car or a cat I saw
//never odd or even



//задание 2


std::string modifyIPAddress(std::string ipAddress) {
    std::string modifiedAddress = "";
    for (char c : ipAddress) {
        if (c == '.') {
            modifiedAddress += "[.]";
        }
        else {
            modifiedAddress += c;
        }
    }
    return modifiedAddress;
}

int main() {
    setlocale(LC_ALL, "rus");
    std::string ipAddress;
    std::cout << "Введите IPv4 адрес: ";
    std::cin >> ipAddress;

    std::string modifiedIP = modifyIPAddress(ipAddress);

    std::cout << "Измененный адрес: " << modifiedIP << std::endl;

    return 0;
}
*/

 //задание 3
 
int counting(std::vector <std::string> vecstr, std::vector <char> vecchar, std::vector <int> vecint) {
    int cntchar[26] = { 0 };
    int maxans = 0;
    for (int i = 0; i < (int)vecchar.size(); ++i) {// сколько раз повторяется буква в vecchar
        cntchar[vecchar[i] - 'a']++;
    }
    for (size_t i = 0; i < vecstr.size(); ++i) {
        bool fl = true;
        std::string word = vecstr[i];
        int cntstr[26] = { 0 };
        for (int j = 0; j < (int)word.size(); ++j) {  // сколько раз повторяется буква в i-ом слове из vecstr
            cntstr[word[j] - 'a']++;
        }

        for (int k = 0; k < 26; ++k) {        
            if (cntchar[k] < cntstr[k]) { // если какая-то буква встречается в слове из vecstr чаще, чем в vecchar
                fl = false; // отбрасываем это слово
                break;
            }
        }

        if (!fl) {
            continue;
        }

        int ans = 0;
        for (int j = 0; j < (int)word.size(); ++j) {
            ans += vecint[word[j] - 'a'];
        }

        if (maxans < ans) maxans = ans;
        std::cout<< word;
    }
    return maxans;
}

int main() {
    setlocale(LC_ALL, "russian");

    std::vector <std::string> vstr = { "apple", "lenovo", "samsung", "acer" };
    std::vector <char> vchr = { 's', 'p', 'l', 'e', 'n', 'o', 'v', 'o','r', 'g', 's' ,'u' ,'m','a'};
    std::vector <int> vint;
    for (int i = 0; i < 26; ++i) {
        vint.push_back(i + 1);
    }
    std::cout << "Результат функции counting: " << counting(vstr, vchr, vint) << '\n';
    
    return 0;
}

