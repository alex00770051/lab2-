#include "task8.h"

#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>

std::vector<double> CalculateAverages(const std::list<int>& L) {
  std::vector<double> result;

  if (L.size() < 2) {
    return result;
  }

  std::adjacent_difference(L.begin(), L.end(), std::back_inserter(result),
                           [](int a, int b) { return (a + b) / 2.0; });

  result.erase(result.begin());
  return result;
}

void ShowVector(const std::vector<double>& V, const std::string& message) {
  std::cout << message << ": ";
  for (double num : V) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}

void task8() {
  std::list<int> L;
  int n, num;

  std::cout << "--- ЗАДАЧА 8: Средние арифметические пар соседей ---" << std::endl;
  std::cout << "Введите количество элементов списка (не меньше 2): ";
  std::cin >> n;

  if (n < 2) {
    std::cout << "Ошибка!" << std::endl;
    return;
  }

  std::cout << "Введите " << n << " чисел: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    L.push_back(num);
  }

  std::vector<double> averages = CalculateAverages(L);
  ShowVector(averages, "Средние арифметические пар соседних элементов");
}