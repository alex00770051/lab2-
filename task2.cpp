#include "task2.h"

#include <iostream>

void InsertZerosToMiddle(std::vector<int>& V) {
  int n = V.size();
  V.insert(V.begin() + n / 2, 5, 0);
}

void ShowVector(const std::vector<int>& V) {
  for (int num : V) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}

void task2() {
  std::vector<int> V;
  int n, num;

  std::cout << "--- ЗАДАЧА 2:Вставка 5 нулей в середину вектора ---" << std::endl;
  std::cout << "Введите количество элементов (четное): ";
  std::cin >> n;

  if (n % 2 != 0) {
    std::cout << "Ошибка!" << std::endl;
    return;
  }

  std::cout << "Введите " << n << " чисел: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    V.push_back(num);
  }

  std::cout << "До вставки: ";
  ShowVector(V);

  InsertZerosToMiddle(V);

  std::cout << "После вставки: ";
  ShowVector(V);
}