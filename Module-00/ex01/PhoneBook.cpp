#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _counter(0), _index(0), _flag(0){

	std::cout << "Constructor PhoneBook called" << std::endl;
	/*this->_counter = 0;*/

	return;
}

PhoneBook::~PhoneBook(void){

	std::cout << "Destructor PhoneBook called" << std::endl;

	return;
}

void	PhoneBook::add(void){
	std::cout << "Function add called" << std::endl;
	this->_counter += 1; // add check and delete function, if counter > 8
	Contact		x;
	/*Contact*	pt = &x;*/
	x.setIndx( this->_counter);
	x.setContact();
	/*this->_contacts[this->_counter - 1] = x;*/


	return;
}

void	PhoneBook::requestIndex( void ){

	std::cout << "Please input the index of the entry to display: " << std::endl;
	std::cin >> this->_userInput;
	while (this->_flag == 0){

		if (this->_userInput < 1 && this->_userInput > this->_counter){

			std::cout << "The index is out of range. Please input positive number up to and including ";
			std::cout << this->_counter << std::endl;
			std::cin >> this->_userInput;
		}
		else{

			this->_contacts[this->_userInput - 1].displayContact();
			this->_flag = 1;
		}
	}

	return;
}

void	PhoneBook::search( void ){

	/*std::cout << "The saved contacts: " << std::endl;
	while (this->_index <= this->_counter){

		this->_contacts[this->_index].show();
		this->_index += 1;
	}*/
	this->_index += 1;
	this->requestIndex();

	return;
}

void	PhoneBook::exit_program( void ){

	exit( 0 );
}

void	PhoneBook::start( void ){

	std::cout << std::right  << std::setw(20) << "PHONEBOOK" << std::endl;
	while ( 1 ){

		std::cout << "Please input ADD, SEARCH or EXIT !" << std::endl;
		std::cin >> this->_answer;
		if (this->_answer == "ADD")
			this->add();
		else if (this->_answer == "SEARCH")
			this->search();
		else if (this->_answer == "EXIT")
			this->exit_program();
		else{

			std::cout << "Wrong input! The program only accepts ADD, SEARCH or EXIT !" << std::endl;
			std::cin >> this->_answer;
		}

	}
}
