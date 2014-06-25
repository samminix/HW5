#include "Account.h"

Account::Account()
{
	id = 0;
	balance = 0;
	annualInterestRate = 1.5;
}

Account::Account(std::string newName, int newID, double newBalance)
{
	name = newName;
	id = newID;
	balance = newBalance;
	annualInterestRate = 1.5;
}

int Account::getID()
{
	return id;
}

double Account::getBalance()
{
	return balance;
}

double Account::getAnnualInterestRate()
{
	return annualInterestRate;
}

void Account::setID(int newID)
{
	id = newID;
}

void Account::setBalance(double newBalance)
{
	balance = newBalance;
}

double Account::getMonthlyInterestRate()
{
	double x = (annualInterestRate / 12);
	return x;
}

void Account::withdraw(double amount)
{
	static int i = 1;
	balance -= amount;
	Transaction iA('W', amount, balance, "Withdrawl");
	transactions.push_back((iA));
	i++;
}

void Account::deposit(double amount)
{
	static int i = 1;
	balance += amount;
	Transaction iA('D', amount, balance, "Deposit"); 
	transactions.push_back((iA));
	i++;
}

std::string Account::getName()
{
	return name;
}