#include <iostream>


int main(int argc, char **argv)
{
	int	i,	j;
	char	c;

	i = -1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (++j< argc)
	{
		i = -1;
		while(argv[j][++i])
		{
				c = std::toupper(argv[j][i] );
				std::cout << c;
		}
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}