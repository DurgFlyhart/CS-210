#ifndef AIRGEAD_H
#define AIRGEAD_H

using namespace std;

class Airgead { //creates class
public:
	Airgead(); //create airgead function
	void setInvestment(double inv); //create setInvestment function
	void setDeposit(double dep); //create setDeposit function
	void setInterest(int interest); //create setInterest function
	void setYears(int years); //create setYears function
	void setIntTotal(double intTotal); //create setIntTotal function
	double getInvestment(); //create getInvestment function
	double getDeposit(); //create getDeposit function
	double getIntTotal(); //create getIntTotal function
	int getInterest(); //create getInterest function
	int getYears(); //create getYears function
	void setAirgead(); //create setAirgead function
private: //the private variable
	double m_initialInvest;
	double m_monthlyDeposit;
	int m_interest;
	int m_numberYears;
	double m_interestTotal;
};

#endif // AIRGEAD_H