#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    std::cout << "Введіть число: ";
    std::cin >> number;

    int count = 0;
    int temp = (number < 0) ? -number : number;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    int sum = 0;
    int zeroCount = 0;
    temp = (number < 0) ? -number : number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        if (digit == 0) {
            zeroCount++;
        }
        temp /= 10;
    }

    double average = static_cast<double>(sum) / count;

    std::cout << "Кількість цифр: " << count << std::endl;
    std::cout << "Сума цифр: " << sum << std::endl;
    std::cout << "Середнє арифметичне: " << average << std::endl;
    std::cout << "Кільцість нулів: " << zeroCount << std::endl;

    return 0;
}
