#include "task4.h"

#include <algorithm>
#include <iostream>
#include <iterator>

std::vector<double> GetEvenIndexNumbers(const std::vector<double>& numbers) {
  std::vector<double> result;
  int index = 0;
  std::remove_copy_if(numbers.begin(), numbers.end(),
                      std::back_inserter(result),
                      [&index](double) { return (++index) % 2 != 0; });

  return result;
}

void ShowNumbers(const std::vector<double>& numbers,
                 const std::string& message) {
  std::cout << message << ": ";
  for (double num : numbers) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
}

void task4() {
  std::vector<double> numbers;
  int n;
  double num;

  std::cout << "--- ЗАДАЧА 4: Вывод чисел с четными индексами ---" << std::endl;
  std::cout << "Введите количество чисел (не меньше 2): ";
  std::cin >> n;

  if (n < 2) {
    std::cout << "Ошибка!" << std::endl;
    return;
  }

  std::cout << "Введите " << n << " вещественных чисел: ";
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    numbers.push_back(num);
  }

  ShowNumbers(numbers, "Все числа");

  std::vector<double> evenIndexNumbers = GetEvenIndexNumbers(numbers);
  ShowNumbers(evenIndexNumbers, "Числа с четными индексами");
}