#pragma once
#include <iostream>
using namespace std;
//引入vector容器作为学生类数组
#include <vector>;
//文件流
#include <fstream>;
//引入学生类头文件
#include "student.h"


//账号密码
#define USERACCOUNT "data1.txt"
//学生基本信息
#define STUDENTINFO "data2.txt"
//学硕
#define XUESHUO "data3.txt"
//专硕硕
#define XUESHUO "data4.txt"
//非全日制
#define FEIQUAN "data5.txt"

//创建vector容器用于存放所有学生信息
vector<Student> vAll;
//创建vector容器用于存放学硕学生信息
vector<Student> vXueshuo;
//创建vector容器用于存放专硕学生信息
vector<Student> vZhuanshuo;
//创建vector容器用于存放非全学生信息
vector<Student> vFeiquan;

/*
	mainMenu()函数
	用于显示主菜单页面
*/
void mainMenu();

/*
	login(int type)函数
	用于从data1.txt中获取用户密码，验证三种类型用户的登录
	参数：整型（用户类型）1-系统管理员 2-系统操作员 3-学生用户
	返回值：无
*/
void login(int type);

/*
	adminMenuManager(string username, string pwd)
	用于实现管理员子菜单逻辑
	参数1：接收用户名   参数2：接收密码

*/
void adminMenuManager(string username, string pwd);

/*
	operatorMenuManager(string username, string pwd)
	用于实现管理员子菜单逻辑
	参数1：接收用户名   参数2：接收密码

*/
void operatorMenuManager(string username, string pwd);

/*
	studentMenuManager(string username, string pwd)
	用于实现管理员子菜单逻辑
	参数1：接收用户名   参数2：接收密码

*/
void studentMenuManager(string username, string pwd);