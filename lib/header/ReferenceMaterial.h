#ifndef REFERENCE_MATERIAL
#define REFERENCE_MATERIAL
#include <string>
using std::string;

class ReferenceMaterial
{
protected:
	string ReferenceNumber;
	string Title;
	string Author;

public:

	ReferenceMaterial()
	{
		ReferenceNumber = "N/A";
		Title = "N/A";
		Author = "N/A";
	}

	ReferenceMaterial(string rn, string tit, string aut)
	{
		ReferenceNumber = rn;
		Title = tit;
		Author = aut;
	}

	ReferenceMaterial(ReferenceMaterial &obj)
	{
		this->setRefNumber(obj.getRefNumber());
		this->setTitle(obj.getTitle());
		this->setAuthor(obj.getAuthor());
	}

	void setRefNumber(string value){this->ReferenceNumber = value;}
	void setTitle(string value){this->Title = value;}
	void setAuthor(string value){this->Author = value;}

	string getRefNumber(){return this->ReferenceNumber;}
	string getTitle(){return this->Title;}
	string getAuthor(){return this->Author;}

	virtual void displayDetails()
	{
		system("cls");
		misc::gotoxy(10, 3);
		cout << "Reference Number : " << this->getRefNumber() << endl;
		misc::gotoxy(10, 4);
		cout << "Title            : " << this->getTitle() << endl;
		misc::gotoxy(10, 5);
		cout << "Author           : " << this->getAuthor() << endl;
	}
};
#endif // !REFERENCE_MATERIAL
