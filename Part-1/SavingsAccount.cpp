  
#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	cout << "The Savings Account constructor has been called." << endl;
	
	interestRate = rate;
	
	if (initialBalance < 0.0 ){
		initialBalance = 0.0;
	}
}

double SavingsAccount::calculateInterest() {
	if (interestRate < 0.0){
		interestRate = 0.0;
	}
	else {
		interestRate *= getBalance();
	}
}
 
void SavingsAccount::display(ostream & os) const
{
	os << "--Savings Account--" << endl;
	
	os << "Balance: $" << getBalance() << endl;
	
	os << "Interest Rate: " << interestRate*100 << "%" << endl;
}