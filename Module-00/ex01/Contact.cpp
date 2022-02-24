#include "Contact.hpp"

Contact::Contact( void ){

	return;
}

Contact::~Contact(){

	return;
}

void	Contact::setIndx( int v){

	if (v >= 0)
		this->_indx = v;

	return;
}

void	Contact::setContact( void ){

	std::cout << "Input first name: ";
	std::cin >> this->_fName;
	std::cout << "Input last name: ";
	std::cin >> this->_lName;
	std::cout << "Input nickname: ";
	std::cin >> this->_nName;
	std::cout << "Input phone number: ";
	std::cin >> this->_phNb;
	std::cout << "Input darkest secret: ";
	std::cin >> this->_secret;

	return;
}

void	Contact::showColumn( std::string str, int flag ) const{

	if (str.length() > 10){
		std::cout << std::setw(9) << str.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << str;
	if (flag == 1)
		std::cout << " | ";

	return;
}

void	Contact::show( void )const{

	std::cout << std::right  << std::setw(10) << this->_indx << " | ";
	this->showColumn(this->_fName, 1);
	this->showColumn(this->_lName, 1);
	this->showColumn(this->_nName, 0);
	std::cout << std::endl;

	return;
}

void	Contact::displayContact( void ){

	std::cout << "The contact information: " << std::endl;
	std::cout << std::left << std::setw(18) << "First name: " << this->_fName << std::endl;
	std::cout << std::left << std::setw(18) << "Last name: " << this->_lName << std::endl;
	std::cout << std::left << std::setw(18) << "Nickname: " << this->_nName << std::endl;
	std::cout << std::left << std::setw(18) << "Phone number: " << this->_phNb << std::endl;
	std::cout << std::left << std::setw(18) << "Darkest secret: " << this->_secret << std::endl;

	return;

}
