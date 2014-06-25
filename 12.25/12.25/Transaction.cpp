#include "Transaction.h"

Transaction::Transaction(char newType, double newAmount, double newBalance, std::string newDescription)
{
	type = newType;
	amount = newAmount;
	balance = newBalance;
	description = newDescription;
}

char Transaction::getType()
{
	return type;
}

double Transaction::getAmount()
{
	return amount;
}

double Transaction::getBalance()
{
	return balance;
}

std::string Transaction::getDescription()
{
	return description;
}