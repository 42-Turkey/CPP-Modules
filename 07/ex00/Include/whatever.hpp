#pragma once

#include <iostream>

template <typename A> void	swap (A &a, A &b) {
	A t;

	t = a;
	a = b;
	b = t;
}

template <typename A> A min (A a, A b) {
	if (a == b)
		return b;
	return (a > b ? b : a);
}

template <typename A> A max (A a, A b) {
	if (a == b)
		return b;
	return (a < b ? b : a);
}
