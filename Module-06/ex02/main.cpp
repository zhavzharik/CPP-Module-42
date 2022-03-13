#include "Base.hpp"

int main()
{
	Base* p;

	p = generate();
	identify(p);
	identify(*p);

	delete p;
	return 0;
}