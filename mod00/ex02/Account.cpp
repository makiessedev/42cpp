#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;	
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();	
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

void Account::_displayTimestamp() {
	std::time_t now = std::time(0);
	std::tm* utc_time = std::gmtime(&now);
	char ftime[80];
	std::strftime(ftime, sizeof(ftime), "[%Y%m%d_%H%M%S]", utc_time);
	std::cout << ftime << " ";
} 

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	std::cout << "make deposit\n";
}

bool	Account::makeWithdrawal( int withdrawal ) {
	std::cout << "makeWithdrawl\n";
	return (true);
}

int	Account::checkAmount( void ) const {
	std::cout << "check amount\n";
	return (1);
}

void	Account::displayStatus( void ) const {
	std::cout << "display status\n";
}

Account::~Account() {
	std::cout << "Destrucot\n";
}
