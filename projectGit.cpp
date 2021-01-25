#include <iostream>

int main() {
    int targetHeight;
    int startHeight;
    int growth;
    int ate;
    
/*  Этот коммент сделан, чтобы увидеть ветвление  */

    std::cout << "Приветствую вас";
    std::cout << "Введите целевую высоту бамбука: ";
    std::cin >> targetHeight;
    std::cout << "Введите рост саженца: ";
    std::cin >> startHeight;
    std::cout << "Введите дневной рост бамбука: ";
    std::cin >> growth;
    std::cout << "Введите ночное поедание гусеницами: ";
    std::cin >> ate;

    int day = ((targetHeight - startHeight - growth) / (growth - ate)) + 1;
    std::cout << "Через " << day << " полных дней высота бамбука будет " << targetHeight << " сантиметров. Если это >= 3 метра, то его можно рубить";
}
