# include <iostream>
# include <string>

int	main()
{
	std::string str;
	str = "HI THIS IS BRAIN";
	std::string *pointer = &str;
	std::string &link = str;
	std::cout << "str: " << str << std::endl;
	std::cout << "pointer: " << *pointer << std::endl;
	std::cout << "link: " << link << std::endl;
}