#include <iostream>
#include <fstream>
#include <sstream>

int exit_error(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}

std::string replace(std::string str, std::string s1, std::string s2) {
	size_t len_replace = s1.length();

	for (size_t pos = 0; pos < str.length(); pos++)
	{
		if (str.compare(pos, len_replace, s1) == 0)
		{
			str.erase(pos, len_replace);
			str.insert(pos, s2);
		}
	}
	return str;
}

int    check_arguments( std::string filename,  std::string s1)
{
	if (filename.empty())
		return (0);
	if (s1.empty())
		return (0);
	return (1);
}

int     main(int argc, char **argv)
{
	std::string			filename, s1, s2, str;
	std::ostringstream text;

	if (argc != 4)
		return (exit_error("Введено неверное количество аргументов"));
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (!(check_arguments(filename, s1)))
		return (exit_error("Введен пустой аргумент"));
	std::ifstream file(filename);
	if (!file)
		return (exit_error("Файла с введенным названием не существует"));
	text << file.rdbuf();
	str = text.str();
	str = replace(str, s1, s2);
	file.close();
	std::ofstream file2(std::string(filename) + ".replace");
	file2 << str;
	file2.close();
	return (0);
}