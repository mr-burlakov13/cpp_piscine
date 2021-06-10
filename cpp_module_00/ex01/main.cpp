#include "ClassContact.hpp"
#include <string>


int	main()
{
	int		count;
	int		i;
	int		nb;
	Human	*cont;

	cont = new Human();
	std::string	str;

	count = -1;
	std::cout << "\x1b[33m""- This is my crappy  awesome phonebook!""\x1b[0m" << std::endl;
	std::cout << "\x1b[33m""- Enter your command -""\x1b[0m" << std::endl;
	while (std::getline(std::cin, str))
	{
		i = -1;
		if (str == "ADD" && count < 7)
		{
			count++;
			cont[count].add();
		}
		else if (str == "ADD" && count > 6)
			std::cout << "\x1b[36m""My book is completely filled :-(""\x1b[0m" << std::endl ;
		else if (str == "EXIT")
			break;
		else if (str == "SEARCH")
		{
			if (count == -1)
			{
				std:: cout << "\x1b[36m""PhoneBook is empty!""\x1b[0m" << std::endl;
				std::cout << "\x1b[33m""- Enter your command -""\x1b[0m" << std::endl;
				continue ;
			}
			std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "Name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
			std::cout << "--------------------------------------------" << std::endl;
			while (++i <= count)
				cont[i].search(i);
			std::cout << "\x1b[34m""- Who do you want to know in detail about? -""\x1b[0m" << std::endl;
			std::cout << "\x1b[33m""- Please enter the contact index number from 0 to 7 or enter \"exit\" -""\x1b[0m" << std::endl;
			std::getline(std::cin, str);
			if (str == "exit")
			{
				std::cout << "\x1b[33m""- Enter your command -""\x1b[0m" << std::endl;
				continue ;
			}
			nb = str.size();
			if (nb > 1 || str[0] < '0' || str[0] > '7')
			{
				std::cout << "\x1b[31m""- Fatal error!!! -""\x1b[0m""\x1b[0m" << std::endl;
				continue ;
			}
			cont[str[0] - '0'].info();
		}
		else
		{
			std::cout << "\x1b[31m""- Command not found -""\x1b[0m""\x1b[0m" << std::endl;
			std::cout << "\x1b[36m""- please enter ""\x1b[0m""\x1b[0m" << "\x1b[32m""\"ADD\"" "\x1b[0m" <<"\x1b[36m"" or ""\x1b[0m" << "\x1b[32m""\"SEARCH\"""\x1b[0m" << "\x1b[36m"" or ""\x1b[0m" << "\x1b[31m""\"EXIT\" -""\x1b[0m" << std::endl;
		}
	}
	return (0);
}