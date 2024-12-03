#ifndef PMERGME_HPP
#define PMERGME_HPP

#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <deque>
#include <list>

std::queue<int> mergeSortQueue(std::queue<int> &left, std::queue<int> &right);
std::queue<int> splitQueue(std::queue<int> &mainq);
std::list<int> mergeSortList(std::list<int> &left, std::list<int> &right);
std::list<int> splitList(std::list<int> &mainq);
#endif