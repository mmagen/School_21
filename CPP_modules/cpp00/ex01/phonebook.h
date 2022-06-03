#ifndef CPP1_PHONEBOOK_H
#define CPP1_PHONEBOOK_H

#include <iostream>
#include <string>
#include <array>
class People
{
	int	id;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	People( void );
	void init( int id );
	int get_id( void );
	std::string get_first_name( void );
	std::string get_last_name( void );
	std::string get_nickname( void );
	std::string get_phone_number( void );
	std::string get_secret( void );

};

class Book
{
	std::string people[8][6];

public:
	Book();
	void add_people( People people );
	void print_contacts( void );
	int get_max_id( void );
	int get_min_id( char id_0_ind_1 );
	void get_info( int index );
};
#endif //CPP1_PHONEBOOK_H
