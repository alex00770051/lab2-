#include "task6.h"

#include <algorithm>
#include <iostream>
#include <iterator>

std::deque<int> ProcessDeque(const std::deque<int>& D) {
  std::deque<int> D0(D.begin(), D.begin() + D.size() / 2);
  std::deque<int> result;

  std::replace_copy_if(
      D0.begin(), D0.end(), std::back_inserter(result),
      [](int x) { return x < 0; }, 0);

  return result;
}

void ShowDeque(const std::deque<int>& D, const std::string& message) {
  std::cout << message << ": ";
  for (int num : D) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}

void task6() {
  std::deque<int> D;
  int n, num;

  std::cout << "--- ЗАДАЧА 6: Обработка дека через вспомогательный контейнер(, заменить при этом отрицательные элементы на нули и расположить скопированные элементы в обратном порядке) ---" << std::endl;
  std::cout << "Введите количество элементов (четное): ";
  std::cin >> n;

  if (n % 2 != 0) {
    std::cout << "Ошибка!" << std::endl;
    return;
  }

  std::cout << "Введите " << n << " чисел: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    D.push_back(num);
  }

  ShowDeque(D, "Исходный дек");

  std::deque<int> result = ProcessDeque(D);
  ShowDeque(result, "Обработанный дек");
}