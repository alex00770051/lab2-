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

  std::cout << "--- ������ 7:���������� � ������������ ���������(������� �����,����� ����, ����� �����) ---" << std::endl;
  std::cout << "������� ���������� ���������: ";
  std::cin >> n;

  std::cout << "������� " << n << " �����: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    D.push_back(num);
  }

  std::cout << "�� ����������: ";
  ShowDeque(D);

  SortDeque(D);

  std::cout << "����� ����������: ";
  ShowDeque(D);
}