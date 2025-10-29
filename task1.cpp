#include "task1.h"

#include <algorithm>
#include <iostream>

void SwapMiddleElements(std::vector<int>& V,
    std::deque<int>& D,
    std::list<int>& L) {
  int n = V.size();
  std::swap(V[n / 2 - 1], V[n / 2]);
  std::swap(D[n / 2 - 1], D[n / 2]);

  std::list<int>::iterator it1 = L.begin();
  std::advance(it1, n / 2 - 1);
  std::list<int>::iterator it2 = it1;
  it2++;
  std::swap(*it1, *it2);
}

void ShowContainers(const std::vector<int>& V, const std::deque<int>& D,
                    const std::list<int>& L) {
  std::cout << "Вектор: ";
  for (int num : V) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  std::cout << "Дек: ";
  for (int num : D) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  std::cout << "Список: ";
  for (int num : L) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}

void task1() {
  std::vector<int> V;
  std::deque<int> D;
  std::list<int> L;
  int n, num;

  std::cout << "--- ЗАДАЧА 1: Обмен средних элементов в трех контейнерах ---" << std::endl;
  std::cout << "Введите количество элементов (четное, не меньше 2): ";
  std::cin >> n;

  if (n < 2 || n % 2 != 0) {
    std::cout << "Ошибка!" << std::endl;
    return;
  }

  std::cout << "Введите " << n << " чисел для вектора: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    V.push_back(num);
  }

  std::cout << "Введите " << n << " чисел для дека: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    D.push_back(num);
  }

  std::cout << "Введите " << n << " чисел для списка: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    L.push_back(num);
  }

  std::cout << "До обмена:" << std::endl;
  ShowContainers(V, D, L);

  SwapMiddleElements(V, D, L);

  std::cout << "После обмена:" << std::endl;
  ShowContainers(V, D, L);
}