#include "phonebook.h"

People::People( void )
{
	this->id = 0;
}

void People::init(int id)
{
	std::cout << "Введите first name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Введите last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Введите nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Введите phone number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Введите darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
	this->id = id;
}

int People::get_id()
{
	return this->id;
}

std::string People::get_first_name()
{
	return this->first_name;
}

std::string People::get_last_name()
{
	return this->last_name;
}

std::string People::get_nickname()
{
	return this->nickname;
}

std::string People::get_phone_number()
{
	return this->phone_number;
}

std::string People::get_secret()
{
	return this->darkest_secret;
}