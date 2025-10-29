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

  std::cout << "--- ������ 2:������� 5 ����� � �������� ������� ---" << std::endl;
  std::cout << "������� ���������� ��������� (������): ";
  std::cin >> n;

  if (n % 2 != 0) {
    std::cout << "������!" << std::endl;
    return;
  }

  std::cout << "������� " << n << " �����: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    V.push_back(num);
  }

  std::cout << "�� �������: ";
  ShowVector(V);

  InsertZerosToMiddle(V);

  std::cout << "����� �������: ";
  ShowVector(V);
}