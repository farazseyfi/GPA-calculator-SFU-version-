// gpa calcultor including file reading.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	
	string lettergrade, option;
	double totalcredit=0, gradepoint=0, totalgradepoint=0, credit=0, cumulativegpa=0;
	for (;;)
	{
		cout << "Insert the course credit : " << endl;
		cin >> credit;
		cout << "Insert your letter grade (Upper case): " << endl;
		cin >> lettergrade;

		if (lettergrade == "A+")
		{
			gradepoint = credit * 4.33;
		}
		else if (lettergrade == "A")
		{
			gradepoint = credit * 4.00;

		}
		else if (lettergrade == "A-")
		{
			gradepoint = credit *3.67;
		}
		else if (lettergrade == "B+")
		{
			gradepoint = credit * 3.50;
		}
		else if (lettergrade == "B")
		{
			gradepoint = credit * 3.33;

		}
		else if (lettergrade == "B-")
		{
			gradepoint = credit * 2.67;
		}
		else if (lettergrade == "C+")
		{
			gradepoint = credit * 2.33;
		}
		else if (lettergrade == "C")
		{
			gradepoint = credit * 2.00;
		}
		else if (lettergrade == "C-")
		{
			gradepoint = credit * 1.67;
		}
		else if (lettergrade == "D")
		{
			gradepoint = credit * 1.00;
		}
		else if (lettergrade == "F")
		{
			gradepoint = credit * 0.00;
		}
		else
		{
			cout << "undefined input" << endl;
		}
		totalcredit = totalcredit + credit;
		totalgradepoint = totalgradepoint + gradepoint; 

		cout << "Would you like to add another course?" << endl;
		cin >> option;
		if (option == "Yes" || option == "yes")
		{
			continue;
		}
		else
		{
			break;
		}
	}
		cumulativegpa = totalgradepoint / totalcredit;
		cout << "Your cumulative gpa is: " << cumulativegpa << endl;
		
		return 0;

}


