#pragma once
#include <iostream>
using namespace std;
//����vector������Ϊѧ��������
#include <vector>;
//�ļ���
#include <fstream>;
//����ѧ����ͷ�ļ�
#include "student.h"


//�˺�����
#define USERACCOUNT "data1.txt"
//ѧ��������Ϣ
#define STUDENTINFO "data2.txt"
//ѧ˶
#define XUESHUO "data3.txt"
//ר˶˶
#define XUESHUO "data4.txt"
//��ȫ����
#define FEIQUAN "data5.txt"

//����vector�������ڴ������ѧ����Ϣ
vector<Student> vAll;
//����vector�������ڴ��ѧ˶ѧ����Ϣ
vector<Student> vXueshuo;
//����vector�������ڴ��ר˶ѧ����Ϣ
vector<Student> vZhuanshuo;
//����vector�������ڴ�ŷ�ȫѧ����Ϣ
vector<Student> vFeiquan;

/*
	mainMenu()����
	������ʾ���˵�ҳ��
*/
void mainMenu();

/*
	login(int type)����
	���ڴ�data1.txt�л�ȡ�û����룬��֤���������û��ĵ�¼
	���������ͣ��û����ͣ�1-ϵͳ����Ա 2-ϵͳ����Ա 3-ѧ���û�
	����ֵ����
*/
void login(int type);

/*
	adminMenuManager(string username, string pwd)
	����ʵ�ֹ���Ա�Ӳ˵��߼�
	����1�������û���   ����2����������

*/
void adminMenuManager(string username, string pwd);

/*
	operatorMenuManager(string username, string pwd)
	����ʵ�ֹ���Ա�Ӳ˵��߼�
	����1�������û���   ����2����������

*/
void operatorMenuManager(string username, string pwd);

/*
	studentMenuManager(string username, string pwd)
	����ʵ�ֹ���Ա�Ӳ˵��߼�
	����1�������û���   ����2����������

*/
void studentMenuManager(string username, string pwd);