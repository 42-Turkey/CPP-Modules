#include "../Include/Span.hpp"

Span::Span(): N(0) {
	std::cout << "Span: Default Constructor called." << std::endl;
}

Span::Span( unsigned int n ): N(n) {
	std::cout << "Span: Int Constructor called." << std::endl;
}

Span::Span( const Span &s ) {
	std::cout << "Span: Copy Constructor called." << std::endl;
	if ( this != &s ) {
		*this = s;
		this->v = s.v;
	}
}

Span &Span::operator=(const Span &s) {
	std::cout << "Span: Copy Assignment Constructor called." << std::endl;
	if ( this != &s ) {
		*this = s;
		this->v = s.v;
	}
	return *this;
}

void	Span::addNumber( int num ) {
	v.push_back(num);
	if ( v.size() > this->N )
		throw vectorIsFull();
}

void	Span::addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {
	while ( begin != end ) {
		if ( v.size() == N )
			throw vectorIsFull();
		v.push_back( *begin );
		++begin;
	}
}

int	Span::shortestSpan() {
	if (this->v.size() <= 2)
		throw vectorIsSmall();
	std::vector<int> tmp(v);
	int (*iabs)(int) = &std::abs;
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	std::transform(tmp.begin(), tmp.end(), tmp.begin(), iabs);
	return *min_element(tmp.begin(), tmp.end());
}

int	Span::longestSpan() {
	if (this->v.size() <= 2)
		throw vectorIsSmall();
	std::vector<int> tmp(v);
	int (*iabs)(int) = &std::abs;
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	std::transform(tmp.begin(), tmp.end(), tmp.begin(), iabs);
	return *max_element(tmp.begin(), tmp.end());
}

Span::~Span() { std::cout << "Span: Deconstructor called." << std::endl; }
