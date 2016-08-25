#ifndef MEMBER_H
#define MEMBER_H
#pragma once
#include "misc.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Member
{
private:
	int IdNumber;
	string MemberId;
	string Name;
	string Address;
	string ContactNumber;

public:
	Member()
	{
		IdNumber = -1;
		MemberId = "N/A";
		Name = "N/A";
		Address = "N/A";
		ContactNumber = "N/A";
	}

	Member(int id, string memid, string name, string address, string contact)
	{
		IdNumber = id;
		MemberId = memid;
		Name = name;
		Address = address;
		ContactNumber = contact;
	}

	Member(Member &obj)
	{
		setIdNumber(obj.getIdNumber());
		setMemberId(obj.getMemberId());
		setName(obj.getName());
		setAddress(obj.getAddress());
		setContact(obj.getContact());
	}

	int getIdNumber(){return this->IdNumber;}
	string getMemberId(){return this->MemberId;}
	string getName(){return this->Name;}
	string getAddress(){return this->Address;}
	string getContact(){return this->ContactNumber;}

	void setIdNumber(int id){this->IdNumber = id;}
	void setMemberId(string memid){this->MemberId = memid;}
	void setName(string name){this->Name = name;}
	void setAddress(string address){this->Address = address;}
	void setContact(string contact){this->ContactNumber = contact;}

	void displayDetails()
	{
		system("cls");
		misc::gotoxy(10, 3);
		cout << "Id       : " << this->getIdNumber() << endl;
		misc::gotoxy(10, 4);
		cout << "Member Id: " << this->getMemberId() << endl;
		misc::gotoxy(10, 5);
		cout << "Name     : " << this->getName() << endl;
		misc::gotoxy(10, 6);
		cout << "Address  : " << this->getAddress() << endl;
		misc::gotoxy(10, 7);
		cout << "Contact  : " << this->getContact() << endl;
	}
};

#endif // !MEMBER_H