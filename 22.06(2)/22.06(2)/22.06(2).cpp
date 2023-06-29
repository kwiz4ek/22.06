#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int boardSize;
    int cellSize;

    std::cout << "Введіть розмір дошки: ";
    std::cin >> boardSize;

    std::cout << "Введіть розмір клітини: ";
    std::cin >> cellSize;

   
    int rowSize = boardSize * cellSize;
    int colSize = boardSize * cellSize;

  
    for (int row = 0; row < rowSize; row++) {
        for (int col = 0; col < colSize; col++) {
            if ((row / cellSize) % 2 == (col / cellSize) % 2) {
                std::cout << "██"; 
            }
            else {
                std::cout << "  "; 
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
