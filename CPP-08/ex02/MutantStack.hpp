#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>
template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack(){}
	~MutantStack(){}
	MutantStack(const MutantStack &sta)
	{
		*this = sta;
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(){
		return this->c.begin();
	}
	iterator end(){
		return this->c.end();
	}
};

#endif