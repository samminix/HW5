#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include "Date.h"
#include <string>

class Transaction
{
private:
	Date date;
	char type;
	double amount;
	double balance;
	std::string description;

public:
	Transaction(char newType, double newAmount, double newBalance, std::string newDescription);
	char getType();
	double getAmount();
	double getBalance();
	std::string getDescription();
};

#endif