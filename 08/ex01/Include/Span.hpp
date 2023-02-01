#pragma once

# include <iostream>
# include <vector>
# include <numeric>
#include <cstdlib>
#include <algorithm>



class Span {
private:
	unsigned int	N;
	std::vector<int> v;
public:
	Span ( void );
	Span ( unsigned int n );
	Span ( const Span &s );
	~Span ( void );

	Span &operator = ( const Span &s );

	void	addNumber ( int num );
	void	addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end ); //ok
	int		shortestSpan ( void );
	int		longestSpan ( void );

	class vectorIsFull:public std::exception{
		public:
			const char *what() const throw() {
					return "Vector is Full.";
	}};
	class vectorIsSmall:public std::exception{
		public:
			const char *what() const throw() {
					return "Vector is Small.";
	}};
};
