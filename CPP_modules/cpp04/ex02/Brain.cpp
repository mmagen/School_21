#include "Brain.hpp"

Brain::Brain( void ) : _current_idea(0) {
	std::cout << "An instance of Brain class was born!" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "An instance of Brain class is dead now!" << std::endl;
}

Brain::Brain( const Brain& toCopy ) {
	std::cout << "An instance was copied as an Brain class!" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = toCopy._ideas[i];
	this->_current_idea = toCopy._current_idea;
}

Brain& Brain::operator=( const Brain& value ) {
	if (this == &value)
		return *this;
	std::cout << "An instance was assignated as an Brain class!" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = value._ideas[i];
	this->_current_idea = value._current_idea;
	return *this;
}

void Brain::setIdea ( std::string const idea ) {
	if (this->_current_idea > 99)
		std::cout << "There are only 99 ideas in brain!" << std::endl;
	else {
		this->_ideas[this->_current_idea] = idea;
		_current_idea++;
	}
}

std::string Brain::getIdea ( int const num ) {
	if (num < 0 || num > 99) {
		std::cout << "There are only 99 ideas in brain!" << std::endl;
		return ("");
	}
	else
		return (this->_ideas[num]);
}