#include <iostream>
#include <string>
#include<iomanip>

class Human
{
public:
	void	add()
	{
		int nb;
		std::string	first_name1;
		std::string	last_name1;
		std::string	nickname1;

		std::cout << "\x1b[34m""Enter first name""\x1b[0m" << std::endl ;
		std::getline(std::cin, first_name);
		first_name1 = first_name;
		if ((nb = first_name.size()) > 10)
			first_name1 = first_name.substr(0, 9) + ".";
		std::cout << "\x1b[34m""Enter last name""\x1b[0m" << std::endl ;
		std::getline(std::cin, last_name);
		last_name1 = last_name;
		if ((nb = last_name.size()) > 10)
			last_name1 = last_name.substr(0, 9) + ".";
		std::cout << "\x1b[34m""Enter nickname""\x1b[0m" << std::endl ;
		std::getline(std::cin, nickname);
		nickname1 = nickname;
		if ((nb = nickname.size()) > 10)
			nickname1 = nickname.substr(0, 9) + ".";
		std::cout << "\x1b[34m""Enter login""\x1b[0m" << std::endl ;
		std::getline(std::cin, login);
		std::cout << "\x1b[34m""Enter postal address""\x1b[0m" << std::endl ;
		std::getline(std::cin, postal_address);
		std::cout << "\x1b[34m""Enter email address""\x1b[0m" << std::endl ;
		std::getline(std::cin, email_address);
		std::cout << "\x1b[34m""Enter phone number""\x1b[0m" << std::endl ;
		std::getline(std::cin, phone_number);
		std::cout << "\x1b[34m""Enter birthday date""\x1b[0m" << std::endl ;
		std::getline(std::cin, birthday_date);
		std::cout << "\x1b[34m""Enter favorite meal""\x1b[0m" << std::endl ;
		std::getline(std::cin, favorite_meal);
		std::cout << "\x1b[34m""Enter underwear color""\x1b[0m" << std::endl ;
		std::getline(std::cin, underwear_color);
		std::cout << "\x1b[31m""Enter darkest secret""\x1b[0m" << std::endl ;
		std::getline(std::cin, darkest_secret);
		std::cout << "\x1b[32m""- Thank you, the cotact data is complete! -""\x1b[0m" << std::endl;
		std::cout << "\x1b[33m""- Enter your command -""\x1b[0m" << std::endl;
	}

	void	search(int i)
	{
		std::cout << std::setw(10) << i  << "|"  << std::setw(10) << first_name << "|" << std::setw(10) << last_name  << "|" << std::setw(10) << nickname << "|\n" << std::endl;
	}
	void	info()
	{
		std::cout << "\x1b[34m""First name - " << first_name << std::endl ;
		std::cout << "Last name - " << last_name << std::endl ;
		std::cout << "Nickname - " << nickname << std::endl ;
		std::cout << "Login - " << login << std::endl ;
		std::cout << "Postal address - " << postal_address << std::endl ;
		std::cout << "Email address - " << email_address << std::endl ;
		std::cout << "Phone number - " << phone_number << std::endl ;
		std::cout << "Birthday date - " << birthday_date << std::endl ;
		std::cout << "Favorite meal - " << favorite_meal << std::endl ;
		std::cout << "Underwear color - " << underwear_color << std::endl ;
		std::cout << "\x1b[31m""Darkest secret - " << darkest_secret << std::endl ;
		std::cout << "\x1b[33m""- Enter your command -""\x1b[0m" << std::endl;
	}

private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
};