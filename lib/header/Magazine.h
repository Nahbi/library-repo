#ifndef MAGAZINE_H
#define MAGAZINE_H
#include "ReferenceMaterial.h"
#include "misc.h"
#include "MyDate.h"
#include <string>
#include <ctime>
#include <iostream>
using std::string;
using std::endl;
using std::cout;



class Magazine : public ReferenceMaterial
{
private:
	string Volume;
	string IssueTopic;
	time_t IssueDate;

public:

	Magazine()
	{
		ReferenceNumber = "N/A";
		Title = "N/A";
		Author = "N/A";
		Volume = "N/A";
		IssueTopic = "N/A";
		IssueDate = time(0);
	}

	Magazine(string rn, string tit, string aut, string vol, string itop, MyDate issue)
	{
		ReferenceNumber = rn;
		Title = tit;
		Author = aut;
		Volume = vol;
		IssueTopic = itop;
		IssueDate = time(0);
		setIssueDate(issue);
	}

	void setVolume(string value){ Volume = value; }
	void setTopic(string value){ IssueTopic = value; }
	void setIssueDate(MyDate value)
	{
		misc::SetDate(value, &IssueDate);
	}
	string getVolume(){ return Volume; }
	string getTopic(){ return IssueTopic; }
	time_t getIssueDate(){ return IssueDate; }
	string getIssueDateString(){
		string issue = string(ctime(&IssueDate));
		return issue;
	}

	void displayDetails()
	{
		char * current = ctime(&IssueDate);
		system("cls");
		misc::gotoxy(10, 3);
		cout << "Reference Number : " << this->getRefNumber() << endl;
		misc::gotoxy(10, 4);
		cout << "Title            : " << this->getTitle() << endl;
		misc::gotoxy(10, 5);
		cout << "Author           : " << this->getAuthor() << endl;
		misc::gotoxy(10, 6);
		cout << "Volume           : " << this->getVolume() << endl;
		misc::gotoxy(10, 7);
		cout << "Topic            : " << this->getTopic() << endl;
		misc::gotoxy(10, 8);
		cout << "Issue Date       : " << this->getIssueDateString() << endl;
	}

	~Magazine(){}
};
#endif // !MAGAZINE_H
