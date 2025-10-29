#include "task10.h"

#include <iostream>

std::multimap<char, std::string> GroupByLastLetter(
    const std::vector<std::string>& words) {
  std::multimap<char, std::string> result;

  for (auto it = words.rbegin(); it != words.rend(); ++it) {
    char lastChar = it->back();
    result.insert(std::make_pair(lastChar, *it));
  }

  return result;
}

void ShowGroupedWords(const std::multimap<char, std::string>& groupedWords) {
  for (const auto& pair : groupedWords) {
    std::cout << pair.first << " " << pair.second << std::endl;
  }
}

void task10() {
  std::vector<std::string> words;
  int n;
  std::string word;

  std::cout << "--- ������ 10:����������� ���� �� ��������� ����� ---" << std::endl;
  std::cout << "������� ���������� ����: ";
  std::cin >> n;

  std::cout << "������� " << n << " ���� (���������� �������): ";
  for (int i = 0; i < n; i++) {
    std::cin >> word;
    words.push_back(word);
  }

  std::cout << "�������� �����: ";
  for (const auto& w : words) {
    std::cout << w << " ";
  }
  std::cout << std::endl;

  std::multimap<char, std::string> groupedWords = GroupByLastLetter(words);

  std::cout << "�����, ��������������� �� ��������� �����:" << std::endl;
  ShowGroupedWords(groupedWords);
}