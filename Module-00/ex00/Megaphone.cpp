#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				std::cout << (char) toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << "\n";
	}
	return 0;
}
