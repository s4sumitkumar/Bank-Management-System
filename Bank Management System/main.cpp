#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

class Bank {
	string name, address;
	char acc_type;
	float balance;

public:
	void open_account();
	void deposit_money();
	void withdraw_money();
	void display_account();
};

// Function to open the account
void Bank::open_account()
{
	cout << "Enter your full name: ";
	cin >> name;
	cout << "Enter your address: ";
	cin >> address;
	cout << "What type of account you want"
		<< " to open saving(S) or Current(C): ";
	cin >> acc_type;
	cout << "Enter How much money you want to deposit: ";
	cin >> balance;
	cout << "Account Created Successfully";
}

// Function to deposit the account
void Bank::deposit_money()
{
	int Amount;
	cout << "Enter how much money"
		<< " you want to deposit: ";
	cin >> Amount;
	balance += Amount;
	cout << "\n Available Balance: "
		<< balance;
}

// Function to display the account
void Bank::display_account()
{
	cout << "Name: " << name << endl
		<< "Address: " << address << endl
		<< "Type: " << acc_type << endl
		<< "Balance: " << balance << endl
		<< endl;
}

// Function to withdraw the account
void Bank::withdraw_money()
{
	float amount;
	cout << "Enter how much money "
		<< "you want to withdraw: ";
	cin >> amount;
	balance -= amount;
	cout << "\n Available balance: "
		<< balance;
}

// Driver code
int main()
{
	int choice;

	Bank customer;

	cout << "\n1) Open account \n\n";
	// Calling open_account() function
	// through customer object.
	customer.open_account();
	cout << "\n------------------------"
		<< "-------------------------\n";

	cout << "\n2) Deposit account \n\n";
	// Calling deposit_money() function
	// through customer object.
	customer.deposit_money();
	cout << "\n------------------------"
		<< "-------------------------\n";

	cout << "\n2) Withdraw money \n\n";
	// Calling withdraw_money() function
	// through customer object.
	customer.withdraw_money();
	cout << "\n------------------------"
		<< "-------------------------\n";

	cout << "\n4) Display Account \n\n";
	// Calling display_account() function
	// through customer object.
	customer.display_account();
	cout << "\n------------------------"
		<< "-------------------------\n";

	return 0;
}
