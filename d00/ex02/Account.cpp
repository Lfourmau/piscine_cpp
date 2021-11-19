#include "Account.hpp"
#include <iostream>

//constructor and destructor
Account::Account(void) {}
Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";created" << std::endl;
	Account::_totalAmount += this->_amount;
	_nbAccounts++;
}
Account::~Account(void)
{
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";closed" << std::endl;
	this->_accountIndex = _nbAccounts;
	_nbAccounts--;
	_totalAmount -= this->_amount;
}

//getters
int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}
int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}
int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

//displays
void Account::displayAccountsInfos(void)
{
	std::cout
		<< "accounts:" << getNbAccounts() << ";"
		<< "total:" << getTotalAmount() << ";"
		<< "deposits:" << getNbDeposits() << ";"
		<< "withdrawals:" << getNbWithdrawals()
		<< std::endl;
}

void Account::displayStatus(void) const
{
	std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}
void Account::_displayTimestamp(void)
{
	//first part of the output;
}

//operations
void Account::makeDeposit(int deposit)
{
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount <<";";
	std::cout << "deposit:" << deposit << ";";
	this->_nbDeposits++;
	if (deposit != 0)
	{
		Account::_totalNbDeposits++;
		this->_amount += deposit;
	}
	std::cout 
			<< "amount:" << this->_amount << ";"
			<< "nb_deposits:" << this->_nbDeposits
			<< std::endl;
	Account::_totalAmount += deposit;
}

int Account::checkAmount(void) const 
{
	return (1);
}

bool Account::makeWithdrawal(int withdrawal)
{
	std::cout 
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		this->_amount -= withdrawal;
	}
	std::cout
		<< "withdrawal:" << withdrawal << ";"
		<< "amount:" << this->_amount << ";"
		<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	Account::_totalAmount -= withdrawal;
	return (true);
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
