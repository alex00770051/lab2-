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
  std::cout << "������: ";
  for (int num : V) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  std::cout << "���: ";
  for (int num : D) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  std::cout << "������: ";
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

  std::cout << "--- ������ 1: ����� ������� ��������� � ���� ����������� ---" << std::endl;
  std::cout << "������� ���������� ��������� (������, �� ������ 2): ";
  std::cin >> n;

  if (n < 2 || n % 2 != 0) {
    std::cout << "������!" << std::endl;
    return;
  }

  std::cout << "������� " << n << " ����� ��� �������: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    V.push_back(num);
  }

  std::cout << "������� " << n << " ����� ��� ����: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    D.push_back(num);
  }

  std::cout << "������� " << n << " ����� ��� ������: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    L.push_back(num);
  }

  std::cout << "�� ������:" << std::endl;
  ShowContainers(V, D, L);

  SwapMiddleElements(V, D, L);

  std::cout << "����� ������:" << std::endl;
  ShowContainers(V, D, L);
}