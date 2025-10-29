#include "task3.h"

#include <iostream>

void MoveMiddleElement(std::list<int>& L1, std::list<int>& L2) {
  int n1 = L1.size();
  std::list<int>::iterator middle = L1.begin();
  std::advance(middle, n1 / 2);
  L2.splice(L2.end(), L1, middle);
}

void ShowList(const std::list<int>& L, const std::string& name) {
  std::cout << name << ": ";
  for (int num : L) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}

void task3() {
  std::list<int> L1, L2;
  int n1, n2, num;

  std::cout << "--- ЗАДАЧА 3:Перемещение среднего элемента между списками ---" << std::endl;
  std::cout << "Введите количество элементов для L1 (нечетное): ";
  std::cin >> n1;

  if (n1 % 2 == 0) {
    std::cout << "Ошибка!" << std::endl;
    return;
  }

  std::cout << "Введите " << n1 << " чисел для L1: ";
  for (int i = 0; i < n1; i++) {
    std::cin >> num;
    L1.push_back(num);
  }

  std::cout << "Введите количество элементов для L2: ";
  std::cin >> n2;

  std::cout << "Введите " << n2 << " чисел для L2: ";
  for (int i = 0; i < n2; i++) {
    std::cin >> num;
    L2.push_back(num);
  }

  std::cout << "До перемещения:" << std::endl;
  ShowList(L1, "L1");
  ShowList(L2, "L2");

  MoveMiddleElement(L1, L2);

  std::cout << "После перемещения:" << std::endl;
  ShowList(L1, "L1");
  ShowList(L2, "L2");
}