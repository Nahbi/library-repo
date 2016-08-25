#ifndef RESEARCH_PAPER_H
#define RESEARCH_PAPER_H
#include "ReferenceMaterial.h"
#include "misc.h"
#include <string>
#include <iostream>
using std::string;
using std::endl;
using std::cout;

class ResearchPaper : public ReferenceMaterial
{
private:
	string ResearchTopic;
	string Supervisor;
	string Sponsor;

public:

	ResearchPaper()
	{
		ReferenceNumber = "N/A";
		Title = "N/A";
		Author = "N/A";
		ResearchTopic = "N/A";
		Supervisor = "N/A";
		Sponsor = "N/A";
	}

	ResearchPaper(string rn, string tit, string aut, string rt, string sup, string spon)
	{
		setRefNumber(rn);
		setTitle(tit);
		setAuthor(aut);
		setResearchTopic(rt);
		setSupervisor(sup);
		setSponsor(spon);
	}

	ResearchPaper(ResearchPaper &obj)
	{
		setRefNumber(obj.getRefNumber());
		setTitle(obj.getTitle());
		setAuthor(obj.getAuthor());
		setResearchTopic(obj.getResearchTopic());
		setSupervisor(obj.getSupervisor());
		setSponsor(obj.getSponsor());
	}

	void setResearchTopic(string value){this->ResearchTopic = value;}
	void setSupervisor(string value){this->Supervisor = value;}
	void setSponsor(string value){this->Sponsor = value;}

	string getResearchTopic(){return this->ResearchTopic;}
	string getSupervisor(){return this->Supervisor;}
	string getSponsor(){return this->Sponsor;}

	void displayDetails()
	{
		system("cls");
		misc::gotoxy(10, 3);
		cout << "Reference Number : " << this->getRefNumber() << endl;
		misc::gotoxy(10, 4);
		cout << "Title            : " << this->getTitle() << endl;
		misc::gotoxy(10, 5);
		cout << "Author           : " << this->getAuthor() << endl;
		misc::gotoxy(10, 6);
		cout << "Research Topic   : " << this->getResearchTopic() << endl;
		misc::gotoxy(10, 7);
		cout << "Sponsor          : " << this->getSponsor() << endl;
		misc::gotoxy(10, 8);
		cout << "Supervisor       : " << this->getSupervisor() << endl;
	}
};
#endif
