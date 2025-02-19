/*FileName:Chapter3Exercise18.cpp
Programmer:Charles Sherwood
Date:2/25
Requirements:This program should calculate the interest earned on a 
bank account after one year
*/

#include <iomanip>
#include <iostream>
using namespace std;


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
int main()
{
	double principal = Principal();
	double interest = Interest();
	double Comp = Compound();
	double IntEarned = principal * (1 + interest / Comp);






}