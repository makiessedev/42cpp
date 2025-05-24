#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	//this._accountIndex = 0;
	//this._amount = initial_deposit;	
	
	std::cout << "Construcor\n";
}

void Account::_displayTimestamp() {
	/*std::time_t now = std::time(0);
	std::tm* utc_time = std::gmtime(&now);
	char ftime[80];
	std::strftime(ftime, sizeof(ftime), "[%Y%m%d_%H%M%S]");
	std::cout << ftime */
	std::cout << "_displayTimestamp\n";
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
	std::cout << "displayAccountsInfos\n";
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
