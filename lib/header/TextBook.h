#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include "ReferenceMaterial.h"
#include "MyDate.h"
#include "misc.h"
#include <string>
#include <ctime>
#include <iostream>
using std::string;
using std::endl;
using std::cout;

class TextBook : public ReferenceMaterial
{
private:
	string ISBN;
	string Course;
	string Publisher;
	time_t DatePublished;

public:
	TextBook()
	{
		ReferenceNumber = "N/A";
		Title = "N/A";
		Author = "N/A";
		ISBN = "N/A";
		Course = "N/A";
		Publisher = "N/A";
		DatePublished = time(0);
	}

	TextBook(string rn, string tit, string aut, string isb, string cou, string pub, MyDate d)
	{
		d
	}
};
