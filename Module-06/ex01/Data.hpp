#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <stdint.h>

struct Data
{
	int			i;
	char		ch;
	std::string	str;
};

void		initData(Data *data);
uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);


#endif