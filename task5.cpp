#include "task5.h"

#include <algorithm>
#include <iostream>

void RemoveFirstAndLastZero(std::list<int>& L) {
  std::list<int>::iterator first_zero = std::find(L.begin(), L.end(), 0);

  if (first_zero != L.end()) {
    std::list<int>::reverse_iterator rlast_zero =
        std::find(L.rbegin(), L.rend(), 0);

    if (rlast_zero != L.rend()) {
      std::list<int>::iterator last_zero = rlast_zero.base();
      last_zero--;

      if (first_zero != last_zero) {
        L.erase(first_zero);
        rlast_zero = std::find(L.rbegin(), L.rend(), 0);
        if (rlast_zero != L.rend()) {
          last_zero = rlast_zero.base();
          last_zero--;
          L.erase(last_zero);
        }
      } else {
        L.erase(first_zero);
      }
    } else {
      L.erase(first_zero);
    }
  }
}

void ShowList(const std::list<int>& L) {
  for (int num : L) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}

void task5() {
  std::list<int> L;
  int n, num;

  std::cout << "--- ������ 5:�������� ������� � ���������� ���� ---" << std::endl;
  std::cout << "������� ���������� ���������: ";
  std::cin >> n;

  std::cout << "������� " << n << " �����: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    L.push_back(num);
  }

  std::cout << "�� ��������: ";
  ShowList(L);

  RemoveFirstAndLastZero(L);

  std::cout << "����� ��������: ";
  ShowList(L);
}