#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Airgead.h"

using namespace std;

void CalculateInterest(vector<Airgead>& airVector) { //create a function to calculate the estimated bank account growth
    Airgead userAir = airVector.at(0);
    int length = userAir.getYears() * 12; //defines amount of months based on years input
    double total = userAir.getInvestment(); 
    double monthlyDeposit = userAir.getDeposit();
    double intTotal = 0.0; //variable to keep track of yearly interest accumulation
    double annualInterestRate = static_cast<double>(userAir.getInterest()) / 100; //turns intrest rate into a percentage
    int i;

    for (i = 0; i < length; i++) {
        total += monthlyDeposit;
        double monthlyInterest = (total * annualInterestRate) / 12; //calculates the monthy interest gained
        intTotal += monthlyInterest;
        total += monthlyInterest;

        Airgead tempAir; //group of functioons to set the variables for each months increased total
        tempAir.setInvestment(total);
        tempAir.setIntTotal(intTotal);
        tempAir.setDeposit(monthlyDeposit);
        tempAir.setInterest(userAir.getInterest());
        tempAir.setYears(userAir.getYears());

        airVector.push_back(tempAir);

        if ((i + 1) % 12 == 0) {
            intTotal = 0.0; // Reset annual interest total at the end of each year
        }
    }
}

void PrintEarnedValue(vector<Airgead>& airVector) { //function to print out data for the client to see
	Airgead tempAir;
	int i;
	int count = 1; //keeps track of the amount of years
	cout << "----------------------------------------------------" << endl;
	cout << "  Year   Year End Balance   Year End Earned Interest" << endl;
	cout << "----------------------------------------------------" << endl;
	for (i = 12; i <= airVector.size(); i += 12) {
		tempAir = airVector.at(i);
		cout << fixed << setprecision(2) << "  " << count << "                 $" << tempAir.getInvestment() << "                $" << tempAir.getIntTotal() << endl;
		count++;
	}
}

int main() {
	Airgead userAir;
	vector<Airgead> airVector;
    char answer = 'Y';
    
    while (answer == 'Y') { //Insures the program keeps running as long as the client wishes to test different saving options
        userAir.setAirgead();
        airVector.push_back(userAir);
        CalculateInterest(airVector); //calls function to calculate the amount of interest
        PrintEarnedValue(airVector); //calls function to print data

        cout << "Would you like to test different investment options? (Y/N)" << endl; //asks client if they would like to try new investment options
        cin >> answer;
        answer = toupper(answer);
        airVector.clear(); //clears vector so that you can keep testing investments
    }

	return 0;
}