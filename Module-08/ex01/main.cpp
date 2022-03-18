#include "Span.hpp"

int	main()
{
	int width = 95;
	decor_text("Case from subject", GREEN, width);
	Span sp = Span(5);


	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan();

	decor_text("Try to add two numbers in class with 1 integer", GREEN, width);
	try
	{
		Span spShort = Span(1);
		spShort.addNumber(34);
		spShort.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	decor_text("Try to find short distance in class with 1 integer", GREEN, width);
	try
	{
		Span spShort = Span(1);
		spShort.addNumber(4);

		spShort.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	decor_text("Try to find long distance in class with 1 integer", GREEN, width);
	try
	{
		Span spShort = Span(1);
		spShort.addNumber(3);

		spShort.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	decor_text("Fill Span with 10 000 integers using a range of iterators and find distance", GREEN, width);
	std::vector<int> mySpan10000;
	std::srand(time(0));
	for (int i = 0; i < 10000; i++)
	{
		mySpan10000.push_back(std::rand() % 25782);
	}

	Span spMySpan10000(10000);
	spMySpan10000.addNumber(mySpan10000.begin(), mySpan10000.end());
	std::cout << spMySpan10000.shortestSpan() << std::endl;
	std::cout << spMySpan10000.longestSpan();

	decor_text("Fill Span with 7 integers using a range of iterators and find distance", GREEN, width);
	std::vector<int> mySpan;
	mySpan.push_back(100);
	mySpan.push_back(102);
	mySpan.push_back(1);
	mySpan.push_back(99);
	mySpan.push_back(35);
	mySpan.push_back(37);
	mySpan.push_back(47);

	Span spMySpan(7);
	spMySpan.addNumber(mySpan.begin(), mySpan.end());
	std::cout << "Integers in Span: ";
	for (int i = 0; i < 7; i++)
		std::cout << spMySpan[i] << " ";
	std::cout << std::endl;
	std::cout << spMySpan.shortestSpan() << std::endl;
	std::cout << spMySpan.longestSpan();

	decor_text("Fill Span with 20 000 integers using a range of iterators and find distance", GREEN, width);
	std::vector<int> mySpan20000;
	std::srand(time(0));
	for (int i = 0; i < 20000; i++)
	{
		mySpan20000.push_back(std::rand() % 45782);
	}

	Span spMySpan20000(20000);
	spMySpan20000.addNumber(mySpan20000.begin(), mySpan20000.end());
	std::cout << spMySpan20000.shortestSpan() << std::endl;
	std::cout << spMySpan20000.longestSpan() << std::endl;

	return 0;
}
