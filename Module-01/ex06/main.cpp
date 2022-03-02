# include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments. " << std::endl;
		std::cout << "Input one of the for levels: \"DEBUG\", \"INFO\", \"WARNING\" or \"ERROR\". " << std::endl;
		return 1;
	}
	karen.complain(argv[1]);

	return 0;
}
