# pragma once

# include <iostream>
# include <cstdint> //uintptr_t in linux

struct Data {
	int		a;
	bool	b;
	char	c;
};

uintptr_t	serialaze ( Data *ptr );
Data		*deserialaze ( uintptr_t raw );
