// ATMWithdrawal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;




int main()
{
	double withdrawalAmount;
	double i = 0;
	double balanceAmount;

	do
	{
		cout << "Please enter withdrawal amount. " << endl;
		cin >> withdrawalAmount;

		if (withdrawalAmount >= 300.00) //Conditional statement to enter valid withdrawal amount that is less than $300.00
			cout << "Sorry the max amount you can withdraw is $300.00" << endl;

		else if (withdrawalAmount <= 1.00) //Conditional statement to enter valid withdrawal amount that is more than $1.00
			cout << "Sorry the min amount you can withdraw is $1.00" << endl;

		for (double i = 0; i <= withdrawalAmount; i++)
		{

			double fifty = withdrawalAmount / 50; //count for $50 bill
			balanceAmount = withdrawalAmount - (fifty * 50);

			double twenty = withdrawalAmount / 20;
			balanceAmount = withdrawalAmount - (twenty * 20); //count for $20 bill

			double ten = withdrawalAmount / 10;
			balanceAmount = withdrawalAmount - (ten * 10); //count for $10 bill

			double five = withdrawalAmount / 5;
			balanceAmount = withdrawalAmount - (five * 5); //count for $5 bill

			double dollar = withdrawalAmount / 1;
			balanceAmount = withdrawalAmount - (dollar * 1); //count for $1 bill

			cout << " you have " << withdrawalAmount << " : " << fifty << " $50.00 bills " << endl;
			cout << " you have " << withdrawalAmount << " : " << twenty << " $20.00 bills " << endl;
			cout << " you have " << withdrawalAmount << " : " << ten << " $10.00 bills " << endl;
			cout << " you have " << withdrawalAmount << " : " << five << " $5.00 bills " << endl;
			cout << "you have " << withdrawalAmount << " : " << dollar << " 1.00 bills " << endl;

		}

	} while (withdrawalAmount > i);

	system("pause");
	return 0;
    return 0;
}

