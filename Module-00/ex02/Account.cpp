#include "Account.hpp"
#include <time.h>
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){

	Account::_nbAccounts += 1;
	this->_accountIndex = Account::_nbAccounts - 1;
	this->_amount = initial_deposit;
	Account::_totalAmount += Account::checkAmount();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "created" << std::endl;
	return;
}

Account::~Account( void ){

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "closed" << std::endl;
	Account::_totalAmount -= Account::checkAmount();
	Account::_nbAccounts -= 1;

	return;
}

int	Account::getNbAccounts( void ){ return Account::_nbAccounts; }

int	Account::getTotalAmount( void ){ return Account::_totalAmount; }

int	Account::getNbDeposits( void ){ return Account::_totalNbDeposits; }

int	Account::getNbWithdrawals( void ){ return Account::_totalNbWithdrawals; }

void	Account::displayAccountsInfos( void ){

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;

	return;
}

void	Account::makeDeposit( int deposit ){

	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << Account::checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << (this->_amount += deposit) << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;

	return;
}

bool	Account::makeWithdrawal( int withdrawal ){

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << Account::checkAmount() << ";";
	std::cout << "withdrawal:";
	if (Account::checkAmount() > withdrawal){
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		std::cout << withdrawal << ";";
		std::cout << "amount:" << (this->_amount -= withdrawal) << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		Account::_totalAmount -= withdrawal;
		return true;
	}
	std::cout << "refused" << std::endl;
	return false;
}

int	Account::checkAmount( void ) const{	return this->_amount; }

void	Account::displayStatus( void ) const{

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;

	return;
}

void	Account::_displayTimestamp( void ){

	std::time_t		seconds;
	std::tm*		now;

	seconds = std::time(NULL);
	now = std::localtime(&seconds);
	std::cout << "[" << (now->tm_year + 1900);
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_mday);
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_mon + 1) << "_";
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_hour);
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_min);
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_sec) << "] ";

	return;
}

Account::Account( void ){

	return;
}
