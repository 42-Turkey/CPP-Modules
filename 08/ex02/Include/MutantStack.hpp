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
	const_itt			begin()	{ return this->c.begin(); }
	const_itt			end()	{ return this->c.end(); }
	reverse_itt			begin()	{ return this->c.rbegin(); }
	reverse_itt			end()	{ return this->c.rend(); }
	const_reverse_itt	begin()	{ return this->c.rbegin(); }
	const_reverse_itt	end()	{ return this->c.rend(); }
};
