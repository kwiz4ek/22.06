#include <iostream>

const int MAX_PEOPLE = 10;
const int MAX_MENU_ITEMS = 5;

struct MenuItem {
    const char* name;
    double price;
};

int main() {
    int numPeople;
    std::cout << "Введите количество человек: ";
    std::cin >> numPeople;

    MenuItem menu[MAX_MENU_ITEMS] = {
        {"Кофе", 2.5},
        {"Чай", 1.5},
        {"Круассан", 1.0},
        {"Пончик", 0.8},
        {"Маффин", 1.2}
    };

    int numOrders[MAX_PEOPLE] = { 0 };
    MenuItem orders[MAX_PEOPLE][MAX_MENU_ITEMS];

    for (int i = 0; i < numPeople; ++i) {
        std::cout << "Заказ для человека " << (i + 1) << ":" << std::endl;

        int choice;
        do {
            std::cout << "Меню:" << std::endl;
            for (int j = 0; j < MAX_MENU_ITEMS; ++j) {
                std::cout << j + 1 << ". " << menu[j].name << " - $" << menu[j].price << std::endl;
            }

            std::cout << "Выберите элементы меню для заказа (0 для завершения): ";
            std::cin >> choice;

            if (choice >= 1 && choice <= MAX_MENU_ITEMS) {
                orders[i][numOrders[i]] = menu[choice - 1];
                numOrders[i]++;
            }
            else if (choice != 0) {
                std::cout << "Некорректный выбор. Попробуйте еще раз." << std::endl;
            }
        } while (choice != 0);
    }

    double totalAmount = 0.0;
    for (int i = 0; i < numPeople; ++i) {
        for (int j = 0; j < numOrders[i]; ++j) {
            totalAmount += orders[i][j].price;
        }
    }

    std::cout << "Общая сумма заказа: $" << totalAmount << std::endl;

    return 0;
}
