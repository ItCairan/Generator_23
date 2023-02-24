#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
using namespace std;

void Description()
{
	cout << " � ���� ��������� �� �������: " << endl
		<< " 1. ������������� ������ �� 23 ������� �� ��� �� ����������� � ��������� �����������." << endl
		<< " 2. �������� ������ �� ��������������� ������." << endl
		<< " 3. ��������� ��������������� ������ � ������ ��� ����." << endl
		<< " 4. �������� ���� \"������-�����\" � ������ ������� ����� ������." << endl
		<< " ������� ������ ��������� ��������� �� �������� ������������� ����������." << endl
		<< " �������� ��� ����� ��������� ��������� ��������� ������� �� ����������� ��� ������� ��������� ��������." << endl; 
	cout << " ==============================================================" << endl;
	cout << " ��� �������� � ���� ��������� ���������� ������� ����� �������: " << endl << " ";
	cout << "=> ";
	_getch();
}

int TotalNumberOfTasks() // ���������� ������������ �����
{
	int NumberT;
	cout << " ������� ����� ��������� �������������? " << endl 
		<< " ��������� ����������: �� \"1\" �� \"100\" ������������. " << endl  
		<< " ���� ��������� ����� �� ���������, �� ������� \"0\" � ��������� ����������." << endl << " ";
	do
	{
		cout << "=> ";
		cin >> NumberT;
		if (NumberT < 0) { cout << " ���������� ����� �� ����� ���� �������������. ���������� ������ ������ ��������:" << endl << " "; }
		else if (NumberT > 100) { cout << " ���������� ����� ������� �������. ���������� ������ ������ ��������:" << endl << " "; }
		else if (NumberT == 0) { cout << " ��������� ��������� ���� ������. �� �������� :) " << endl; }
		else { cout << " ���������. ����� ����� �������������: " << NumberT << endl; }
	} while ((NumberT < 0) or (NumberT > 100));
	
	return NumberT;
}

int TotalNumberOfSteps() // ���������� �����
{
	int NumberS;
	cout << " ������� ��������� ���� ������ ���� � ������? " << endl
		<< " ��������� ����������: \"2\" ��� \"3\". " << endl << " ";
	do
	{
		cout << "=> ";
		cin >> NumberS;
		if (NumberS < 2) { cout << " ������� ���� ��������� ����. ���������� ������ ������ ��������:" << endl << " "; }
		else if (NumberS > 3) { cout << " ��������� ���� ������� �����. ���������� ������ ������ ��������:" << endl << " "; }
		else { cout << " �������. ����� � ��������������� ������� �����: " << NumberS << endl; }
	} while ((NumberS < 2) or (NumberS > 3));

	return NumberS;
}

int TotalNumberOfRequiredPoints() // ���������� ������������ �����
{
	int NumberRP;
	cout << " ������� ����� ����������� ������ ��������� ���������� ���������� ���������? " << endl
		<< " ��������� ����������: �� \"0\" �� \"3\" ������������. " << endl << " ";
	do
	{
		cout << "=> ";
		cin >> NumberRP;
		if (NumberRP < 0) { cout << " ���������� ����� �� ����� ���� �������������. ���������� ������ ������ ��������:" << endl << " "; }
		else if (NumberRP > 3) { cout << " ������� ����� ����� ��� ���������� ����������. ���������� ������ ������ ��������:" << endl << " "; }
		else if (NumberRP == 0) { cout << " ���������. ���������� ���������� �� �������� ������������ �����. " << endl; }
		else { cout << " �����. ������������ ����� � ����������: " << NumberRP << endl; }
	} while ((NumberRP < 0) or (NumberRP > 3));

	return NumberRP;
}

int TotalNumberOfBannedPoints() // ���������� ����������� �����
{
	int NumberBP;
	cout << " ������� ����� ����������� �� ������ ����������� � ���������� ���������� ���������? " << endl
		<< " ��������� ����������: �� \"0\" �� \"3\" ������������. " << endl << " ";
	do
	{
		cout << "=> ";
		cin >> NumberBP;
		if (NumberBP < 0) { cout << " ���������� ����� �� ����� ���� �������������. ���������� ������ ������ ��������:" << endl << " "; }
		else if (NumberBP > 3) { cout << " ������� ����� ����� ��� ���������� ����������. ���������� ������ ������ ��������:" << endl << " "; }
		else if (NumberBP == 0) { cout << " ���������. ���������� ���������� �� �������� ����������� �����. " << endl; }
		else { cout << " ���������. ����������� ����� � ����������: " << NumberBP << endl; }
	} while ((NumberBP < 0) or (NumberBP > 3));

	return NumberBP;
}

int OperatingMode() // ����� ������ ������
{
	int Mode;
	int Zero = 1;
	do
	{
		
		cout << " �������� ���������� ����� ������." << endl
			<< " 1) ����� \"������ ������ � ����\"" << endl
			<< " 2) ����� \"������ - �����\"" << endl;
		if (Zero == 1) { cout << " ��� ������������ � �������� ������ ������� \" 0 \"" << endl; }
		cout << " => ";
		cin >> Mode;
		if ((Mode == 0) and (Zero == 1)) 
		{ 
			cout << " �������� ������� " << endl ;
			cout << " 1) \"������ ������ � ����\" " << endl
				<< " ���� ����� ������ ��� ����, ����� ��������������� ������ � ������ � ��� ������������ � ����." << endl
				<< " ������������ ������������ ������� ���� � ������� \"txt\" ��� ���������� ������: " << endl
				<< " 1. ������������ ����� ������� ���� � ����������� �����." << endl
				<< " 2. ������������ ����� ������� ��� ���������� ���� �� ���������" << endl
				<< " ���� �� ��������� - ��� ��������� ���� ��������� ���������� �� ������� ����� �� �������� \"������� 23\"." << endl
				<< " ����� � ���� ����������� ������ � ������." << endl
				<< " ���� ��������� ���� �������� �� ������, �� ��������� ��������� ������ � ����� ������.";
			cout << " 2) \"������ - �����\" " << endl
				<< " ���� ����� ������ ��� ����, ����� �������� ��������������� ������ �� ������� � ����������� �� ����� ������������." << endl
				<< " ����� ����� ��������� ������� ���������� � ������ ������� ������������." << endl
				<< " ���������� ������� �� ���������� ���� ����� � ���������� �������� �����."
				<< " ������ ������� ����������� � ������ ���������� �� ���������� ����������� �������� �����." << endl;
			cout << " ==============================================================" << endl;
			Zero = 0;
		}
		else if (((Mode < 1) or (Mode > 2))) { cout << " ������ � ����� ������� �� ����������. ���������� ������ ������ ��������:" << endl; }
		else 
		{ 
			switch (Mode)
			{
			case 1: {cout << " �����. �� ������� ����� \"������ ������ � ����\" " << endl; break; }
			case 2: {cout << " �����. �� ������� ����� \"������ - �����\" " << endl; break; }
			default: break;
			}
		}
	} while ((Mode < 1) or (Mode > 2));
	
	return Mode;
}

void FirstMode(const int QuanityOfTasks, const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints) // ����� 1: "������ ������ � ����"
{
	system("cls");
	int V;
	do
	{
		cout << " ������� ������ ������ ����� ��� ����������: " << endl
			<< " 1) ������� ����� ����� �������������� " << endl
			<< " 2) ������� ���� �� ���������" << endl;
		cout << " => ";
		cin >> V;
		if ((V < 1) or (V > 2)) { cout << " ������� �������� ��������. ���������� ������ ������ ��������." << endl; }
		else if (V == 2) { cout << " ���������� ����� ����������� � ���� �� ���������" << endl; }
	} while ((V < 1) or (V > 2));
	cin.get();
	if (V == 1)
	{
		FILE* file;
		char filename[255];
		do
		{
			cout << " ������� ��� �����. " << endl
				<< " �� ���� ��������� ���� � �����. " << endl;
			cout << " => ";
			gets_s(filename, 255);
			file = fopen(filename, "w");
			if (file == NULL) { cout << " ������ � ����� ��������. ���������� ������ ������ �����." << endl; }
		}while (file == NULL);

		fclose(file);
	}
	else
	{
		FILE* file;
		char filename [BUFSIZ] = "C:\\Users\\kiril\\Desktop\\������� 23.txt";
		fopen_s(&file, filename, "w");

		fclose(file);
	}
}

void SecondMode(const int QuanityOfTasks, const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints) // ����� 2: "������-�����"
{
	system("cls");
	struct Data
	{
		int InitialNumber;
		int FiniteNumber;
		int Operation[];
	};
	for (int i = 0; i < QuanityOfTasks; i++)
	{
		Generation(QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints);
	}
}

void Generation(const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints) // ��������� �����
{
	


}

int Answer() // ����� � ������
{
	
	
	
	return 1;
}