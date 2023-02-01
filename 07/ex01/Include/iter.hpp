#pragma once

# include <iostream>

template <typename A> void	iter(A *array, int len, void (*func)(A const &)) {
	for (int i = 0; i < len; i++)
	func(array[i]);
}
