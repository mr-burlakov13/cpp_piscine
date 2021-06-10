
#include <iostream>
#include <string>
#include <fstream>
# include <sstream>

void	rep(std::string &str, std::string s1, std::string s2)
{
	std::stringstream ss;
	int	len;
	int	i;

	len = s1.length();
	for (unsigned long j = 0; j < str.length(); j++)
	{
		i = 0;
		while (str[i + j] == s1[i] && i < len)
			i++;
		if (i == len)
		{
			ss << s2;
			j += (i - 1);
		}
		else
			ss << str[j];
	}
	str = ss.str();
}


int main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout << "wrong number of arguments\n";
		return (1);
	}
	std::string path = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];	

	if (s1[0] == 0 || s2[0] == 0)
	{
		std::cout << "error, empty line\n";
		return (1);
	}

	std::string str;
	std::ifstream fin;
	std::ofstream fout;

	fin.open(path);
	if (!fin.is_open())
	{
		std::cout << "file open error\n";
		return (1);
	}
	else
	{
			while (!fin.eof())
			{
				std::getline(fin, str);
				rep(str, s1, s2);
				fout.open(path + ".replace", std::ofstream::app);
				if (!fout.is_open())
				{
					return (1);
					std::cout << "file open error\n";
				}
				else
					fout << str << std::endl;
				
				fout.close();
			}
	}
	fin.close();
	return (0);
}