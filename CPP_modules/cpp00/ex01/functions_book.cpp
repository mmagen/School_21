#include "phonebook.h"

Book::Book()
{
	int i = 0;

	while (i < 8)
	{

		this->people[i][0] = "0";
		i++;
	}
}

void Book::add_people(People people)
{
	int i = 0;
	char flag = 1;
	int id;

	while (i < 8)
	{
		if (this->people[i][0] == "0")
		{
			flag = 0;
			this->people[i][0] = std::to_string(people.get_id());
			this->people[i][1] = people.get_first_name();
			this->people[i][2] = people.get_last_name();
			this->people[i][3] = people.get_nickname();
			this->people[i][4] = people.get_phone_number();
			this->people[i][5] = people.get_secret();
			break;
		}
		i++;
	}
	if (flag)
	{
		id = this->get_min_id(1);
		this->people[id][0] = std::to_string(people.get_id());
		this->people[id][1] = people.get_first_name();
		this->people[id][2] = people.get_last_name();
		this->people[id][3] = people.get_nickname();
		this->people[id][4] = people.get_phone_number();
		this->people[id][5] = people.get_secret();
	}
}

void Book::print_contacts()
{
	int i = 0;
	int space;
	std::string tmp;

	while (i < 8)
	{
		if (this->people[i][0] != "0")
		{
			std::cout << "     index|first name| last name|  nickname\n";
			space = 10 - this->people[i][0].length();
			while (space-- > 0)
				std::cout << " ";
			std::cout << this->people[i][0] << "|";
			if (this->people[i][1].length() > 10)
			{
				tmp = this->people[i][1].substr(0, 9);
				std::cout << tmp << ".|";
			}
			else
			{
				space = 10 - this->people[i][1].length();
				while (space-- > 0)
					std::cout << " ";
				std::cout << this->people[i][1] << "|";
			}
			if (this->people[i][2].length() > 10)
			{
				tmp = this->people[i][2].substr(0, 9);
				std::cout << tmp << ".|";
			}
			else
			{
				space = 10 - this->people[i][2].length();
				while (space-- > 0)
					std::cout << " ";
				std::cout << this->people[i][2] << "|";
			}
			if (this->people[i][3].length() > 10)
			{
				tmp = this->people[i][3].substr(0, 9);
				std::cout << tmp << ".\n";
			}
			else
			{
				space = 10 - this->people[i][3].length();
				while (space-- > 0)
					std::cout << " ";
				std::cout << this->people[i][3] << "\n";
			}
		}
		i++;
	}
}

int Book::get_max_id()
{
	int max = 0;
	int i = 0;
	int id;

	while (i < 8)
	{
		if (this->people[i][0] != "0")
			if ((id = atoi(this->people[i][0].c_str())) > max)
				max = id;
			i++;
	}
	return (max);
}

int Book::get_min_id(char id_0_ind_1)
{
	int min = 2147483647;
	int i = 0;
	int id;
	int index;

	while (i < 8)
	{
		if (this->people[i][0] != "0")
			if ((id = atoi(this->people[i][0].c_str())) < min)
			{
				index = i;
				min = id;
			}
		i++;
	}
	if (id_0_ind_1)
		return (index);
	return (min);
}

void Book::get_info(int index)
{
	int i = 0;
	int flag = 0;

	while (i < 8)
	{
		if (atoi(this->people[i][0].c_str()) == index)
		{
			std::cout << "--------------------------------\n";
			std::cout << "First name: " << this->people[i][1] << "\n";
			std::cout << "Last name: " << this->people[i][2] << "\n";
			std::cout << "Nickname: " << this->people[i][3] << "\n";
			std::cout << "Phone number: " << this->people[i][4] << "\n";
			std::cout << "Darkest secret: " << this->people[i][5] << "\n";
			std::cout << "--------------------------------\n";
			flag = 1;
			break;
		}
		i++;
	}
	if (!flag)
		std::cout << "Введен неверный индекс!\n";
}