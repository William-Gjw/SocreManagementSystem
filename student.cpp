#include "student.h"

//默认构造函数
Student::Student()
{

}
//有参构造
Student::Student(string sId, string sName, string instituteName,
	int type, double common1, double common2, double profess1,
	double profess2, double firstScore, double secondScore,
	double spokenScore, double totalScore)
{
	this->sId = sId;
	this->sName = sName;
	this->instituteName = instituteName;
	this->type = type;
	this->common1 = common1;
	this->common2 = common2;
	this->profess1 = profess1;
	this->profess2 = profess2;
	this->firstScore = firstScore;
	this->secondScore = secondScore;
	this->spokenScore = spokenScore;
	this->totalScore = totalScore;
}