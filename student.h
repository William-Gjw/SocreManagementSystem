#pragma once
#include <iostream>
using namespace std;

class Student
{
public:
	//默认构造函数
	Student();
	//有参构造
	Student(string sId, string sName, string instituteName, 
		int type, double common1, double common2, double profess1, 
		double profess2, double firstScore, double secondScore,
		double spokenScore, double totalScore);

	string sId;//复试考号
	string sName; //姓名
	string instituteName; //报考学院
	int type; //报考类别 1-学硕 2-专硕 3-非全
	double common1; //基础课1成绩
	double common2; //基础课2成绩
	double profess1; //专业课1成绩
	double profess2; //专业课2成绩
	double firstScore; //初试总分
	double secondScore; //复试成绩
	double spokenScore; //口语成绩
	double totalScore; //综合成绩
};