#include "task9.h"

#include <algorithm>
#include <iostream>

int CountVectorsWithAllElements(const std::vector<int>& V0,
                                const std::vector<std::vector<int>>& vectors) {
  std::multiset<int> setV0(V0.begin(), V0.end());
  int count = 0;

  for (const auto& vec : vectors) {
    std::multiset<int> currentSet(vec.begin(), vec.end());
    if (std::includes(currentSet.begin(), currentSet.end(), setV0.begin(),
                      setV0.end())) {
      count++;
    }
  }

  return count;
}

void ShowVectorInfo(const std::vector<int>& V, const std::string& name) {
  std::cout << name << ": ";
  for (int num : V) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}

void task9() {
  std::vector<int> V0;
  int n0, num;

  std::cout << "--- ЗАДАЧА 9: Поиск векторов с полным набором элементов(поиск эл-ов таких же, и в таком же кол-ве как в V0) ---" << std::endl;
  std::cout << "Введите количество элементов вектора V0: ";
  std::cin >> n0;

  std::cout << "Введите " << n0 << " чисел для V0: ";
  for (int i = 0; i < n0; i++) {
    std::cin >> num;
    V0.push_back(num);
  }

  int N;
  std::cout << "Введите N (> 0): ";
  std::cin >> N;

  std::vector<std::vector<int>> vectors(N);

  for (int i = 0; i < N; i++) {
    int size;
    std::cout << "Введите размер вектора V" << i + 1 << " (>= " << n0 << "): ";
    std::cin >> size;

    std::cout << "Введите " << size << " чисел для V" << i + 1 << ": ";
    for (int j = 0; j < size; j++) {
      std::cin >> num;
      vectors[i].push_back(num);
    }
  }

  ShowVectorInfo(V0, "V0");

  int count = CountVectorsWithAllElements(V0, vectors);
  std::cout << "Количество векторов, содержащих все элементы V0: " << count
            << std::endl;
}