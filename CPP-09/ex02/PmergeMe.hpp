#ifndef PMERGME_HPP
#define PMERGME_HPP

#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <deque>
#include <list>
#include <ctime>
#include <time.h>
#include <unistd.h>
# include <sys/time.h>
#include <set>

std::queue<int> mergeSortQueue(std::queue<int> &left, std::queue<int> &right);
std::queue<int> splitQueue(std::queue<int> &mainq);
std::list<int> mergeSortList(std::list<int> &left, std::list<int> &right);
std::list<int> splitList(std::list<int> &mainq);

void fillData(int ac, char **av);
long	get_current_time(void);
#endif