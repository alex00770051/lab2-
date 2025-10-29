#ifndef TASK10_H
#define TASK10_H

#include <map>
#include <string>
#include <vector>

std::multimap<char, std::string> GroupByLastLetter(
    const std::vector<std::string>& words);
void ShowGroupedWords(const std::multimap<char, std::string>& groupedWords);
void task10();

#endif