#include "main.h"


int main()
{
	int select = 0; //���ڽ����û���ѡ��
	while (1)
	{
		//��ʾ���˵�
		mainMenu();
		cin >> select;
		switch (select)
		{
		case 1: //ϵͳ����Ա���
			login(1);
			break;
		case 2: //ϵͳ����Ա���
			login(2);
			break;
		case 3: //ѧ���û����
			login(3);
			break;
		case 0:
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "�����������������룡" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}

/*
	mainMenu()����
	������ʾ���˵�ҳ��
*/
void mainMenu()
{
	cout << endl;
	cout << "=======================��ӭʹ��2021�о��������ɼ�����ϵͳ=======================" << endl;
	cout << endl << "��ѡ��������ݣ�" << endl;
	cout << "\t\t ---------------------------------------------\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                 1.ϵͳ����Ա                |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                 2.ϵͳ����Ա                |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                  3.ѧ���û�                 |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                    0.�˳�                   |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t ---------------------------------------------\n";
	cout << "����������ѡ��";
}

/*
	login(int type)����
	���ڴ�data1.txt�л�ȡ�û����룬��֤���������û��ĵ�¼
	���������ͣ��û����ͣ�1-ϵͳ����Ա 2-ϵͳ����Ա 3-ѧ���û�
	����ֵ����
*/
void login(int type)
{
	string username;//���ڽ����û�������û���
	string pwd; //���ڽ����û����������
	
	while (1)
	{
		cout << "�������û�����";
		cin >> username;
		cout << "���������룺";
		cin >> pwd;

		ifstream ifs(USERACCOUNT, ios::in);
		if (!ifs.is_open())
		{
			cout << "�ļ�data1.txt������" << endl;
			return;
		}
		int fType; //���ڽ��մ��ļ��ж������û�����
		string fUsername; //���ڽ��մ��ļ��ж������û���
		string fPwd; //���ڽ��մ��ļ��ж���������
		//��ʼ���ļ�
		while (ifs >> fType && ifs >> fUsername && ifs >> fPwd)
		{
			if (fType == type && fUsername == username && fPwd == pwd)
			{
				//��¼�ɹ�
				cout << "��¼�ɹ���" << endl;
				//�ر��ļ���
				ifs.close();
				//�����Ӳ˵�
				if (type == 1)
				{
					//�������Ա�Ӳ˵�
				}
				else if (type == 2)
				{
					//�������Ա�Ӳ˵�
				}
				else
				{
					//����ѧ���Ӳ˵�
				}

				return;
			}
		}
		ifs.close();
		cout << "�û������������" << endl;
		cout << "1--����  2--�������˵�" << endl;
		int select;
		cin >> select;
		if (select == 2) break;
	}
	
}