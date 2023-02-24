#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int Reset = 0;
	Data Question[100];
	do
	{
		
		system("cls");
		cout << " ������������" << endl;
		cout << " ����� ���������� � \"��������� 23 ������� �� ��� �� �����������\"" << endl;
		int Desc;
		cout << " ��� ������������ � ��������� ������ ��������� ������� \"1\"." << endl
			<< " ��� �������� � ���� ��������� ���������� ������� ����� ������ �����." << endl << " ";
		cout << "=> ";
		cin >> Desc;
		cin.get();
		if (Desc == 1) { Description(); }
		system("cls");
		cout << " ���������" << endl;
		cout << " ===========" << endl;
		int QuanityOfTasks = TotalNumberOfTasks(); // ���������� ������������ �����
		if (QuanityOfTasks != 0)
		{
			cout << " ==============================================================" << endl;
			int QuanityOfSteps = TotalNumberOfSteps(); // ���������� �����
			cout << " ==============================================================" << endl;
			int QuanityOfRequiredPoints = TotalNumberOfRequiredPoints(); // ���������� ������������ �����
			cout << " ==============================================================" << endl;
			int QuanityOfBannedPoints = TotalNumberOfBannedPoints(); // ���������� ����������� �����
			cin.get();
			cout << " ==============================================================" << endl;
			cout << " ��� �������� � ���� ������ ������ ������ ��������� ������� ����� �������: " << endl << " ";
			cout << "=> ";
			_getch();
			system("cls");
			cout << " ����� ������ " << endl;
			cout << " ==============" << endl;
			int  Mode = OperatingMode(); // ����� ������ ������
			switch (Mode)
			{
			case 1: {FirstMode(QuanityOfTasks, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question); break; } // ����� 1: "������ ������ � ����"
			case 2: {SecondMode(QuanityOfTasks, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question); break; } // ����� 2: "������-�����"
			default: break;
			}
			cout << " ==============================================================" << endl;
			cout << " ��� �������� � ���� ���������� ������ ��������� ������� ����� �������: " << endl << " ";
			cout << "=> ";
			_getch();
			system("cls");
			do
			{
				cout << " �������� ���������� ��������: " << endl << " 1) ���������� ���������. " << endl << " 2) ���������� ������ ���������. " << endl << " ";
				cout << "=> ";
				cin >> Reset;
				if ((Reset < 1) or (Reset > 2)) { cout << " ������� �������� ��������. ���������� ��� ���." << endl; }
			} while ((Reset < 1) or (Reset > 2));
		}
	} while (Reset == 1);
	
	cout << " ��������� ��������� ���� ������. �� �������� :) " << endl;

	return 0;
	system("pause");
}