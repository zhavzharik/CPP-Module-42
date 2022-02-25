#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _counter(-1), _amount(0), _index(0), _flagInput(1), _flagStart(0), _flagSearch(0){

	return;
}

PhoneBook::~PhoneBook(void){

	return;
}

void	PhoneBook::add(void){

	this->_flagStart = 0;
	this->_counter = (this->_counter + 1) % 8;
	if (this->_amount < this->_counter)
		this->_amount = this->_counter;
	this->_contacts[this->_counter].setIndx( this->_counter + 1);
	this->_contacts[this->_counter].setContact();

	return;
}

void	PhoneBook::requestIndex( void ){

	while (this->_flagSearch == 1){

		this->_flagInput = 1;
		std::cin >> this->_userInput;
		for(size_t i = 0; i < this->_userInput.length(); i++){

			if (this->_userInput.at(i) != '0' && this->_userInput.at(i) != '1'
				&& this->_userInput.at(i) != '2' && this->_userInput.at(i) != '3'
				&& this->_userInput.at(i) != '4' && this->_userInput.at(i) != '5'
				&& this->_userInput.at(i) != '6' && this->_userInput.at(i) != '7'
				&& this->_userInput.at(i) != '8' && this->_userInput.at(i) != '9'){

					this->_flagInput = 0;
					std::cout << "Wrong input. Please input positive number up to and including ";
					std::cout << this->_counter + 1 << ": ";
					std::cin.ignore(32767, '\n');
					break;
				}
		}
		if (this->_flagInput == 1){

			this->_res = atoi(this->_userInput.c_str());
			std::cin.ignore(32767, '\n');
			if (this->_res < 1 || this->_res > this->_amount + 1){

				this->_flagInput = 0;
				std::cout << "The index is out of range. Please input positive number up to and including ";
				std::cout << this->_amount + 1 << ": ";
				this->requestIndex();
			}
			else{

				this->_flagInput = 0;
				this->_contacts[this->_res - 1].displayContact();
				this->_flagSearch = 0;
				return;
			}
		}
	}
	return;
}

void	PhoneBook::printTitle( void ){

	std::cout << "     Index |";
	std::cout << " First name |";
	std::cout << "  Last name |";
	std::cout << "   Nickname" << std::endl;
	return;
}

void	PhoneBook::search( void ){

	this->_flagStart = 0;
	this->_index = 0;
	if (this->_counter == -1)
		std::cout << "Empty book." << std::endl;
	else{

		this->_flagSearch = 1;
		this->printTitle();
		while (this->_index <= this->_amount){

			this->_contacts[this->_index].show();
			this->_index += 1;
		}
		std::cout << "Please input the index of the entry to display: ";
		this->requestIndex();
	}
	return;
}

void	PhoneBook::exit_program( void ){

	exit( 0 );
}

void	PhoneBook::start( void ){

	std::cout << std::right  << std::setw(20) << "PHONEBOOK" << std::endl;
	while ( 1 ){

		if (this->_flagStart == 0 && this->_flagSearch == 0){

			std::cout << "Please input ADD, SEARCH or EXIT: ";
			std::cin >> this->_answer;
		}
		if (this->_answer == "ADD")
			this->add();
		else if (this->_answer == "SEARCH")
			this->search();
		else if (this->_answer == "EXIT")
			this->exit_program();
		else{
			std::cout << "Wrong input! The program only accepts ADD, SEARCH or EXIT: ";
			std::cin >> this->_answer;
			this->_flagStart = 1;
		}
	}
	return;
}
