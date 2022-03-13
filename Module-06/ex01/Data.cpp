#include "Data.hpp"

void	initData(Data* data)
{
	data->i = 42;
	data->ch = 'S';
	data->str = "Hello, World!";
}

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	raw;
	
	raw =  reinterpret_cast<uintptr_t>(ptr);

	return raw;
}

Data*		deserialize(uintptr_t raw)
{
	Data*		ptr;
	
	ptr = reinterpret_cast<Data*>(raw);

	return ptr;
}