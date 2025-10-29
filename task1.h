#ifndef TASK1_H
#define TASK1_H

#include <deque>
#include <list>
#include <vector>

void SwapMiddleElements(std::vector<int>& V, std::deque<int>& D,
                        std::list<int>& L);
void ShowContainers(const std::vector<int>& V, const std::deque<int>& D,
                    const std::list<int>& L);
void task1();

#endif