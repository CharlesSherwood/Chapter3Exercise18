/*FileName:Chapter3Exercise18.cpp
Programmer:Charles Sherwood
Date:2/25
Requirements:This program should calculate the interest earned on a 
bank account after one year
*/

#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//create variables and ask for the users input
double Principal()
{
	double principal;
	cout << "Please enter the Balance of your Bank Account: $";
	cin >> principal;
	return principal;
}
double Interest()
{
	double interest;
	cout << "What was the interest rate of the account:" ;
	cin >> interest;
	return interest;
}
double Compound()
{
	double Comp;
	cout << "How many times was this compounded throughout the year:";
	cin >> Comp;
	return Comp;
}
//retrun them to the main module, and calculate the interest earned.
int main()
{
	double principal = Principal();
	double interest = Interest();
	double Comp = Compound();
	double IntEarned = principal * pow(1 + interest / Comp, Comp);
	double IntP = interest * 100;
	double Intr = principal * pow(1 + interest / Comp, Comp) - principal;

	cout << "Interest Rate:\t\t" << IntP << "%" << endl;
	cout << "Times Compounded:\t" << Comp<<endl;
	cout <<fixed<<setprecision(2)<< "Principal:\t\t$" << principal<<endl;
	cout << fixed << setprecision(2) << "Interest:\t\t$" << Intr << endl;
	cout << fixed << setprecision(2) << "Amount in savings:\t$" << IntEarned<<endl;


}