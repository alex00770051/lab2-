#include <iostream>
#include <windows.h>

#include "task1.h"
#include "task10.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"
#include "task7.h"
#include "task8.h"
#include "task9.h"

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  int choice;

  do {
    std::cout << "/////////////////////////////////////////" << std::endl;
    std::cout << "Выберите задание (1-10): " << std::endl;
    std::cout << "0 - Выход из программы" << std::endl;
    std::cout << "////////////////////////////////////////" << std::endl;
    std::cout << "Ваш выбор: ";
    std::cin >> choice;

    switch (choice) {
      case 0:
        std::cout << "Выход из программы." << std::endl;
        break;
      case 1:
        task1();
        break;
      case 2:
        task2();
        break;
      case 3:
        task3();
        break;
      case 4:
        task4();
        break;
      case 5:
        task5();
        break;
      case 6:
        task6();
        break;
      case 7:
        task7();
        break;
      case 8:
        task8();
        break;
      case 9:
        task9();
        break;
      case 10:
        task10();
        break;
      default:
        std::cout << "Неверный выбор! Попробуйте снова." << std::endl;
    }

    if (choice != 0) {
      std::cout << std::endl;
      std::cout << "Нажмите Enter чтобы продолжить...";
      std::cin.ignore();  // Очищаем буфер
      std::cin.get();     // Ждем нажатия Enter
    }

  } while (choice != 0);

  return 0;
}