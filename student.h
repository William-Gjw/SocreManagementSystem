#pragma once
#include <iostream>
using namespace std;

class Student
{
public:
	//Ĭ�Ϲ��캯��
	Student();
	//�вι���
	Student(string sId, string sName, string instituteName, 
		int type, double common1, double common2, double profess1, 
		double profess2, double firstScore, double secondScore,
		double spokenScore, double totalScore);

	string sId;//���Կ���
	string sName; //����
	string instituteName; //����ѧԺ
	int type; //������� 1-ѧ˶ 2-ר˶ 3-��ȫ
	double common1; //������1�ɼ�
	double common2; //������2�ɼ�
	double profess1; //רҵ��1�ɼ�
	double profess2; //רҵ��2�ɼ�
	double firstScore; //�����ܷ�
	double secondScore; //���Գɼ�
	double spokenScore; //����ɼ�
	double totalScore; //�ۺϳɼ�
};