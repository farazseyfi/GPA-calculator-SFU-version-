#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	double A_plus = 4.33, A = 4.00, A_minus = 3.67, B_plus = 3.33, B = 3.00, B_minus = 2.67, C_plus = 2.33, C = 2.00, C_minus = 1.67, D = 1.00, F = 0.00;

	string lettergrade, option;
	double totalcredit=0, cal=0, totalcal=0, credit=0, cumulativegpa=0;
	for (;;)
	{
		cout << "Insert the course credit : " << endl;
		cin >> credit;
		cout << "Insert your letter grade (Upper case): " << endl;
		cin >> lettergrade;

		if (lettergrade == "A+")
		{
			cal = credit * A_plus;
		}
		else if (lettergrade == "A")
		{
			cal = credit * A;

		}
		else if (lettergrade == "A-")
		{
			cal = credit * A_minus;
		}
		else if (lettergrade == "B+")
		{
			cal = credit * B_plus;
		}
		else if (lettergrade == "B")
		{
			cal = credit * B;

		}
		else if (lettergrade == "B-")
		{
			cal = credit * B_minus;
		}
		else if (lettergrade == "C+")
		{
			cal = credit * C_plus;
		}
		else if (lettergrade == "C")
		{
			cal = credit * C;
		}
		else if (lettergrade == "C-")
		{
			cal = credit * C_minus;
		}
		else if (lettergrade == "D")
		{
			cal = credit * D;
		}
		else if (lettergrade == "F")
		{
			cal = credit * F;
		}
		else
		{
			cout << "undefined input" << endl;
		}
		totalcredit = totalcredit + credit;
		totalcal = totalcal + cal;

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
		cumulativegpa = totalcal / totalcredit;
		cout << "Your cumulative gpa is: " << cumulativegpa << endl;
		
		return 0;

}