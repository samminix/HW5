#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
#include <vector>
#include "Transaction.h"

class Account
{
private:
	int id;
	double balance;
	double annualInterestRate;
	std::string name;


public:
	std::vector<Transaction> transactions;
	Account();
	Account(std::string newName, int newID, double newBalance);
	int getID();
	double getBalance();
	double getAnnualInterestRate();
	std::string getName();

	void setID(int newID);
	void setBalance(double newBalance);

	double getMonthlyInterestRate();

	void withdraw(double amount);

	void deposit(double amount);
};

#endif