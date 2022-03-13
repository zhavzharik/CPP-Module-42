#include "Data.hpp"

int	main()
{
	Data		data;
	uintptr_t	raw;
	Data*		ptr;
	Data*		ptrDes;

	ptr = &data;
	initData(&data);

	std::cout << "***** Data structure *****" << std::endl;
	std::cout << ptr->i << std::endl;
	std::cout << ptr->ch << std::endl;
	std::cout << ptr->str << std::endl << std::endl;

	raw = serialize(ptr);

	ptrDes = deserialize(raw);

	std::cout << "* Data structure after using serialize and deserialize *" << std::endl;
	std::cout << ptrDes->i << std::endl;
	std::cout << ptrDes->ch << std::endl;
	std::cout << ptrDes->str << std::endl << std::endl;

	std::cout << "***** Compare two pointers *****" << std::endl;
	std::cout << ptr << std::endl;
	std::cout << ptrDes << std::endl;


	return 0;
}