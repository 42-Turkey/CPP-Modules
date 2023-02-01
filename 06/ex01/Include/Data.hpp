# pragma once

# include <iostream>

struct Data {
	int		a;
	bool	b;
	char	c;
};

uintptr_t	serialaze ( Data *ptr );
Data		*deserialaze ( uintptr_t raw );
