#pragma once

# include <iostream>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T> {
public:
	MutantStack() {}
	MutantStack &operator = ( const MutantStack &ms ) {
		(void)ms;
		return *this;
	}
	virtual ~MutantStack() {}
	typedef typename std::stack<T>::container_type::iterator				itt;
	typedef typename std::stack<T>::container_type::const_iterator			const_itt;
	typedef typename std::stack<T>::container_type::reverse_iterator		reverse_itt;
	typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_itt;

	itt					begin() { return this->c.begin(); }
	itt					end()	{ return this->c.end(); }
	const_itt			constBegin()	{ return this->c.begin(); }
	const_itt			constEnd()	{ return this->c.end(); }
	reverse_itt			reverseBegin()	{ return this->c.rbegin(); }
	reverse_itt			reverseEnd()	{ return this->c.rend(); }
	const_reverse_itt	constReverseBegin()	{ return this->c.rbegin(); }
	const_reverse_itt	constReverseEnd()	{ return this->c.rend(); }
};
