#include <iostream>

int main(int argc, char *argv[])
{
	std::string str;

	str = "";
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	argv++;
	while (*argv)
	{
		while (**argv)
		{
			if (islower(**argv))
				str.push_back(toupper(**argv));
			else
				str.push_back(**argv);
			(*argv)++;
		}
		argv++;
	}
	std::cout << str << "\n";
	return 0;
}