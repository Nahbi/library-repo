#ifndef LOAN_H
#define LOAN_H
#include <ctime>
#include <string>
#include <iostream>
#include "misc.h"
using namespace std;
using std::string;

class Loan
{
private:
	int MemberId;
	string MaterialReferenceNumber;
	time_t RequestDate;
	string LoanType;
	time_t LoanDate;
public:
	Loan()
	{
		MemberId = -1;
		MaterialReferenceNumber = "N/A";
		RequestDate = time(NULL);
		string LoanType = "N/A";
		LoanDate = time(NULL);
	}

	Loan(int memid, string mat, string type)
	{
		setMember(memid);
		setMaterial(mat);
		RequestDate = time(0);
		setLoanType(type);
		LoanDate = time(NULL);
	}

	void setMember(int value){ this->MemberId = value;}
	void setMaterial(string value){this->MaterialReferenceNumber = value;}
	void setLoanType(string value){this->LoanType = value;}

	int getMemberId(){return this->MemberId;}
	string getMaterial(){return this->MaterialReferenceNumber;}
	string getLoanType(){return this->LoanType;}

	void displayDetails()
	{
		char* dtRequest = ctime(&RequestDate);
		char* dtLoan = ctime(&LoanDate);
		system("cls");
		misc::gotoxy(10, 3);
		cout << "Member Id          : " << this->getMemberId() << endl;
		misc::gotoxy(10, 4);
		cout << "Material Reference : " << this->getMaterial() << endl;
		misc::gotoxy(10, 5);
		cout << "Request Date       : " << dtRequest << endl;
		misc::gotoxy(10, 6);
		cout << "Loan Type          : " << this->getLoanType() << endl;
		misc::gotoxy(10, 7);
		cout << "Loan Date          : " << dtLoan << endl;
	}
};
#endif // !LOAN_H
