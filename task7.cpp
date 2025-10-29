#include "task7.h"

#include <algorithm>
#include <iostream>

void SortDeque(std::deque<int>& D) {
  std::stable_sort(D.begin(), D.end(), [](int a, int b) {
    if (a < 0 && b >= 0) return true;
    if (a >= 0 && b < 0) return false;
    if (a == 0 && b != 0) return true;
    if (a != 0 && b == 0) return false;
    return a < b;
  });
}

void ShowDeque(const std::deque<int>& D) {
  for (int num : D) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}

void task7() {
  std::deque<int> D;
  int n, num;

  std::cout << "--- ЗАДАЧА 7:Сортировка с группировкой элементов(сначала отриц,потом нули, конец полож) ---" << std::endl;
  std::cout << "Введите количество элементов: ";
  std::cin >> n;

  std::cout << "Введите " << n << " чисел: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    D.push_back(num);
  }

  std::cout << "До сортировки: ";
  ShowDeque(D);

  SortDeque(D);

  std::cout << "После сортировки: ";
  ShowDeque(D);
}