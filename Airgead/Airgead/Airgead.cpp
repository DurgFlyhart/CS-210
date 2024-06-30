#include "Airgead.h"
#include <iostream>
using namespace std;

Airgead::Airgead() : m_initialInvest(0.00), m_monthlyDeposit(0.00), m_interest(0), m_numberYears(0), m_interestTotal(0.00) {} //Assign base values

void Airgead::setInvestment(double inv) { //assign m_initialInvest value
	this->m_initialInvest = inv;
}

void Airgead::setDeposit(double dep) { //assign m_monthlyDeposit value
	this->m_monthlyDeposit = dep;
}

void Airgead::setInterest(int interest) { //assign m_interest value
	this->m_interest = interest;
}

void Airgead::setYears(int years) { //assign m_numberYears value
	this->m_numberYears = years;
}

void Airgead::setIntTotal(double intTotal) { //assign m_interestTotal value
	this->m_interestTotal = intTotal;
}
double Airgead::getInvestment() { //retrieve m_initialInvest value
	return this->m_initialInvest;
}

double Airgead::getDeposit() { //retrieve m_monthlyDeposit value
	return this->m_monthlyDeposit;
}

double Airgead::getIntTotal() { //retrieve m_interestTotal value
	return this->m_interestTotal;
}

int Airgead::getInterest() { //retrieve m_interest value
	return this->m_interest;
}

int Airgead::getYears() { //retrieve m_numberYears value
	return this->m_numberYears;
}

void Airgead::setAirgead() { //assign all airgead variables
	double invest;
	double deposit;
	int interest;
	int years;

	cout << "********************************" << endl;
	cout << "********** Data Input **********" << endl;
	cout << "Initial Investment Amount:	";
	cin >> invest;
	setInvestment(invest);
	cout << "Monthly Deposit: ";
	cin >> deposit;
	setDeposit(deposit);
	cout << "Annual Interest: ";
	cin >> interest;
	setInterest(interest);
	cout << "Number of years: ";
	cin >> years;
	setYears(years);
}
