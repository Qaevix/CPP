// Example 1_1 (using scanf/printf for input / output):

//#define_CRT_SECURE_NO_WARNINGS // can add this line if compiler shows "Error C4996
								 // 'scanf' : This function or variable may be unsafe. Consider
								 // _CRT_SECURE_NO_WARNINGS. ..."
								 // or can replace scanf_s as suggested by compiler
								 
// Example 1_1 

#include <stdio.h> // or #include <cstdio>

int main() {

	float grossSalary, netSalary, socialTax, incomeTax;

	const float INCOME_TAX_RATE = 25.5;		// income tax rate (%)
	const float SOCIAL_TAX_RATE = 10.5;		// social tax rate (%)
	const float	NONTAXABLE_AMOUNT = 510;	// non-taxable minimum (Eur)

	printf("Enter gross salary: ");
	scanf("%f", &grossSalary);

	socialTax = grossSalary * SOCIAL_TAX_RATE / 100;
	printf("\nSocial tax: %f Eur\n", socialTax);

	float incomeTaxableAmount = grossSalary - socialTax - NONTAXABLE_AMOUNT;
	incomeTax = incomeTaxableAmount * INCOME_TAX_RATE / 100;
	printf("income tax: %f Eur\n\n", incomeTax);

	netSalary = grossSalary - socialTax - incomeTax;
	printf("Net Salary: %f Eur\n\n", netSalary);

	return 0;

}

------------------------------------------------------------------------------------------------ -

// Example 1.2

#include <iostream>
using namespace std;

int main() {

	float grossSalary, netSalary, socialTax, incomeTax;

	const float INCOME_TAX_RATE = 25.5;		// income tax rate (%)
	const float SOCIAL_TAX_RATE = 10.5;		// social tax rate (%)
	const float NONTAXABLE_AMOUNT = 510;	// non-taxable minimum (Eur)

	cout << "Enter gross salary: ";
	cin >> grossSalary;

	socialTax = grossSalary * SOCIAL_TAX_RATE / 100;
	cout << endl << "Social tax: " << socialTax << " Eur" << endl;
	// cout << "\nSocial tax: " << socialTax << " Eur\n";		// the same output as previous
																// but without using "endl"

	float incomeTaxableAmount = grossSalary - socialTax - NONTAXABLE_AMOUNT;
	incomeTax = incomeTaxableAmount * INCOME_TAX_RATE / 100;
	cout << "Income tax: " << incomeTax << " Eur" << endl << endl;
	// cout << "Income tax: " << incomeTax << " Eur\n\n";		// the same output as previous
																// but without using "endl"

	return 0;

}
