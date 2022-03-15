#include "main.h"


int main()
{
	int select = 0; //用于接收用户的选择
	while (1)
	{
		//显示主菜单
		mainMenu();
		cin >> select;
		switch (select)
		{
		case 1: //系统管理员身份
			login(1);
			break;
		case 2: //系统操作员身份
			login(2);
			break;
		case 3: //学生用户身份
			login(3);
			break;
		case 0:
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新输入！" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}

/*
	mainMenu()函数
	用于显示主菜单页面
*/
void mainMenu()
{
	cout << endl;
	cout << "=======================欢迎使用2021研究生招生成绩管理系统=======================" << endl;
	cout << endl << "请选择您的身份：" << endl;
	cout << "\t\t ---------------------------------------------\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                 1.系统管理员                |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                 2.系统操作员                |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                  3.学生用户                 |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                    0.退出                   |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t ---------------------------------------------\n";
	cout << "请输入您的选择：";
}

/*
	login(int type)函数
	用于从data1.txt中获取用户密码，验证三种类型用户的登录
	参数：整型（用户类型）1-系统管理员 2-系统操作员 3-学生用户
	返回值：无
*/
void login(int type)
{
	string username;//用于接收用户输入的用户名
	string pwd; //用于接收用户输入的密码
	
	while (1)
	{
		cout << "请输入用户名：";
		cin >> username;
		cout << "请输入密码：";
		cin >> pwd;

		ifstream ifs(USERACCOUNT, ios::in);
		if (!ifs.is_open())
		{
			cout << "文件data1.txt不存在" << endl;
			return;
		}
		int fType; //用于接收从文件中读出的用户类型
		string fUsername; //用于接收从文件中读出的用户名
		string fPwd; //用于接收从文件中读出的密码
		//开始读文件
		while (ifs >> fType && ifs >> fUsername && ifs >> fPwd)
		{
			if (fType == type && fUsername == username && fPwd == pwd)
			{
				//登录成功
				cout << "登录成功！" << endl;
				//关闭文件流
				ifs.close();
				//进入子菜单
				if (type == 1)
				{
					//进入管理员子菜单
				}
				else if (type == 2)
				{
					//进入操作员子菜单
				}
				else
				{
					//进入学生子菜单
				}

				return;
			}
		}
		ifs.close();
		cout << "用户名或密码错误！" << endl;
		cout << "1--重试  2--返回主菜单" << endl;
		int select;
		cin >> select;
		if (select == 2) break;
	}
	
}