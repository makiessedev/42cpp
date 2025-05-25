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
	int previewAmount = this->_amount;
	this->_amount = deposit + this->_amount;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << previewAmount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();

	if (withdrawal <= this->_amount) {
		int pAmount = this->_amount;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << pAmount << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
		return (true);
	} else {			
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->checkAmount() << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
}

int	Account::checkAmount( void ) const {
	return(this->_amount);
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

Account::~Account() {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "closed" << std::endl;
}
