#include "MutantStack.hpp"

int	main()
{
	int width = 75;
	decor_text("Case from subject", GREEN, width);
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top of stack: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size of stack: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);

	std::cout << "Print stack: " << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	decor_text("Replacing the MutantStack with a list", GREEN, width);
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);

	std::cout << "Top of stack: " << lst.back() << std::endl;

	lst.pop_back();

	std::cout << "Size of stack: " << lst.size() << std::endl;

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);

	lst.push_back(0);

	std::cout << "Print stack: " << std::endl;
	MutantStack<int, std::list<int> >::iterator itl = lst.begin();
	MutantStack<int, std::list<int> >::iterator itel = lst.end();

	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}

	decor_text("Print stack in reverse order", GREEN, width);
	MutantStack<int>::reverse_iterator it1 = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite1 = mstack.rend();

	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}

	decor_text("Copy of MutantStack in stack and print it in reverse order", GREEN, width);
	std::stack<int> s(mstack);

	while (!s.empty())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}

	return 0;
}
