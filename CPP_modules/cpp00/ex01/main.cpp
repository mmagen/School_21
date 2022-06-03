#include "phonebook.h"

int main()
{
	std::string str;
	std::string index;
	Book book;
	People people;

	while (1)
	{
		std::cout << "Введите одну из команд: ADD, SEARCH or EXIT\n";
		std::getline(std::cin, str);
		if (std::cin.eof())
			break;
		if (str == "ADD")
		{
			people.init(book.get_max_id() + 1);
			book.add_people(people);
		}
		else if (str == "SEARCH")
		{
			book.print_contacts();
			std::cout << "Введите необходимый index: ";
			std::getline(std::cin, index);
			if (std::cin.eof())
				break;
			book.get_info(atoi(index.c_str()));
		}
		else if (str == "EXIT")
			break;
	}
	return 0;
}
