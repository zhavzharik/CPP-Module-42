#include "Account.hpp"
#include <time.h>
#include <iostream>

Account::Account(int initial_deposit){

	Account::_nbAccounts = -1;
	Account::_totalAmount = 0;
	Account::_totalNbDeposits = 0;
	Account::_totalNbWithdrawals = 0;
	Account::_nbAccounts += 1;
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	return;
}

Account::~Account( void ){

	return;
}

int	Account::getNbAccounts( void ){ return Account::_nbAccounts; }

int	Account::getTotalAmount( void ){ return Account::_totalAmount; }

int	Account::getNbDeposits( void ){ return Account::_totalNbDeposits; }

int	Account::getNbWithdrawals( void ){ return Account::_totalNbWithdrawals; }

void	Account::displayAccountsInfos( void ){

	Account::_displayTimestamp();

	return;
}

void	Account::makeDeposit( int deposit ){

	this->_nbDeposits = deposit;
	Account::_totalNbDeposits += 1;
	this->_amount += this->_nbDeposits;
	Account::_totalAmount += this->_nbDeposits;

	return;
}

bool	Account::makeWithdrawal( int withdrawal ){

	this->_nbWithdrawals = withdrawal;
	Account::_totalNbWithdrawals += 1;
	if (this->_amount > this->_nbWithdrawals){
		this->_amount -= this->_nbWithdrawals;
		Account::_totalAmount -= this->_nbWithdrawals;
	}
	else
		return false;

	return true;
}

int	Account::checkAmount( void ) const{

	return this->_amount; // ?
}

void	Account::displayStatus( void ) const{

	std::cout << "index:" << this->_accountIndex << ";"; // ?
	std::cout << "amount:" << this->_amount << ";";  // ?

	return;
}

void	Account::_displayTimestamp( void ){

	std::time_t		current_time;
	std::tm 		now;

	std::time(&current_time);
	localtime_s(&now, &current_time); // rewrite

	std::cout << "[" << (now->tm_year + 1900) << now->tm_mday << (now->tm_mon + 1);
	std::cout << "_" << now->tm_hour << now->tm_min << now->tm_sec << "] ";

	return;
}

Account::Account( void ){

	return;
}
