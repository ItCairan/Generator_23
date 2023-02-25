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
			Sleep(500);
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

void FirstMode(const int QuanityOfTasks, const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints, Data Question[]) // ����� 1: "������ ������ � ����"
{
	for (int i = 0; i < QuanityOfTasks; i++)
	{
		Question[i].InitialNumber = 0;
		Question[i].FiniteNumber = 100;
		for (int k = 0; k < 3; k++)
		{
			Question[i].Operation[k] = -(k + 1);
			Question[i].OperationNumber[k] = -(k + 1);
			Question[i].RequiredPoint[k] = -(k + 1);
			Question[i].BannedPoint[k] = -(k + 4);
		}
		Question[i].Result = 0;
	}
	
	system("cls");
	int V;
	int PrOt = 0;
	do
	{
		cout << " ������� ������ ������ ����� ��� ����������: " << endl
			<< " 1) ������� ����� ����� �������������� " << endl
			<< " 2) ������� ���� �� ���������" << endl;
		cout << " => ";
		cin >> V;
		if ((V < 1) or (V > 2)) { cout << " ������� �������� ��������. ���������� ������ ������ ��������." << endl; }
		else if (V == 2) { Sleep(500);  cout << " ���������� ����� ����������� � ���� �� ���������" << endl; }
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
			file = fopen(filename, "a+");
			if (file == NULL) { cout << " ������ � ����� ��������. ���������� ������ ������ �����." << endl; }
		}while (file == NULL);
		for (int i = 0; i < QuanityOfTasks; i++)
		{
			Generation(i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question);
			fprintf(file, " \n \n %d. ����������� ����������� �����, ���������� �� ������. \n", i + 1);
			fprintf(file, " � ����������� ���� ��� �������, �������� ��������� ������: \n");
			for (int k = 0; k < QuanityOfSteps; k++)
			{
				fprintf(file, " %d ", k + 1);
				if (Question[i].Operation[k] == 1) 
				{ 
					fprintf(file, "��������� %d. \n", Question[i].OperationNumber[k]);
				}
				else 
				{ 
					fprintf(file, "�������� �� %d. \n", Question[i].OperationNumber[k]);
				}
			}
			fprintf(file, " ������ �� ��� ");
			if (Question[i].Operation[0] == 1) 
			{ 
				fprintf(file, "����������� ����� �� ������ �� %d. \n", Question[i].OperationNumber[0]);
			}
			else 
			{ 
				fprintf(file, "�������� ����� �� ������ �� %d. \n", Question[i].OperationNumber[0]);
			}
			fprintf(file, " ������ �� ��� ");
			if (Question[i].Operation[1] == 1) 
			{ 
				fprintf(file, "����������� ����� �� ������ �� %d. \n", Question[i].OperationNumber[1]);
			}
			else 
			{ 
				fprintf(file, "�������� ����� �� ������ �� %d. \n", Question[i].OperationNumber[1]);
			}
			if (QuanityOfSteps == 3)
			{
				fprintf(file, " ������ �� ��� ");
				if (Question[i].Operation[2] == 1) 
				{ 
					fprintf(file, "����������� ����� �� ������ �� %d. \n", Question[i].OperationNumber[2]);
				}
				else 
				{ 
					fprintf(file, "�������� ����� �� ������ �� %d. \n", Question[i].OperationNumber[2]);
				}
			}
			fprintf(file, " ��������� ��� ����������� - ��� ������������������ ������. \n");
			fprintf(file, " ������� ���������� ����� ��������, ������� �������� ����� %d ����������� � ����� %d? \n", Question[i].InitialNumber, Question[i].FiniteNumber);
			if (QuanityOfRequiredPoints == 1)
			{
				fprintf(file, " ��� ���� ���������� ���������� ��������� �������� ����� %d. \n", Question[i].RequiredPoint[0]);
			}
			else if (QuanityOfRequiredPoints == 2)
			{
				fprintf(file, " ��� ���� ���������� ���������� ��������� �������� ����� %d � %d. \n", Question[i].RequiredPoint[0], Question[i].RequiredPoint[1]);
			}
			else if (QuanityOfRequiredPoints == 3)
			{
				fprintf(file, " ��� ���� ���������� ���������� ��������� �������� ����� %d, %d � %d. \n", Question[i].RequiredPoint[0], Question[i].RequiredPoint[1], Question[i].RequiredPoint[2]);
			}
			if (QuanityOfBannedPoints == 1)
			{
				fprintf(file, " ����� ���������� ���������� ��������� �� �������� ����� %d. \n", Question[i].BannedPoint[0]);
			}
			else if (QuanityOfBannedPoints == 2)
			{
				fprintf(file, " ����� ���������� ���������� ��������� �� �������� ����� %d � %d. \n", Question[i].BannedPoint[0], Question[i].BannedPoint[1]);
			}
			else if (QuanityOfBannedPoints == 3)
			{
				fprintf(file, " ����� ���������� ���������� ��������� �� �������� ����� %d, %d � %d. \n", Question[i].BannedPoint[0], Question[i].BannedPoint[1], Question[i].BannedPoint[2]);
			}
			fprintf(file, " ���������� ���������� ��������� - ��� ������������������ ����������� ���������� ���� ������ ���������. \n");
			fprintf(file, " \n �����: %d \n", Question[i].Result);
			Sleep(500);
		}
		fclose(file);
	}
	else
	{
		FILE* file;
		char filename [BUFSIZ] = "C:\\Users\\kiril\\Desktop\\������� 23.txt";
		fopen_s(&file, filename, "a+");
		for (int i = 0; i < QuanityOfTasks; i++)
		{
			Generation(i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question);
			fprintf(file, " \n \n %d. ����������� ����������� �����, ���������� �� ������. \n", i + 1);
			fprintf(file, " � ����������� ���� ��� �������, �������� ��������� ������: \n");
			for (int k = 0; k < QuanityOfSteps; k++)
			{
				fprintf(file, " %d ", k + 1);
				if (Question[i].Operation[k] == 1)
				{
					fprintf(file, "��������� %d. \n", Question[i].OperationNumber[k]);
				}
				else
				{
					fprintf(file, "�������� �� %d. \n", Question[i].OperationNumber[k]);
				}
			}
			fprintf(file, " ������ �� ��� ");
			if (Question[i].Operation[0] == 1)
			{
				fprintf(file, "����������� ����� �� ������ �� %d. \n", Question[i].OperationNumber[0]);
			}
			else
			{
				fprintf(file, "�������� ����� �� ������ �� %d. \n", Question[i].OperationNumber[0]);
			}
			fprintf(file, " ������ �� ��� ");
			if (Question[i].Operation[1] == 1)
			{
				fprintf(file, "����������� ����� �� ������ �� %d. \n", Question[i].OperationNumber[1]);
			}
			else
			{
				fprintf(file, "�������� ����� �� ������ �� %d. \n", Question[i].OperationNumber[1]);
			}
			if (QuanityOfSteps == 3)
			{
				fprintf(file, " ������ �� ��� ");
				if (Question[i].Operation[2] == 1)
				{
					fprintf(file, "����������� ����� �� ������ �� %d. \n", Question[i].OperationNumber[2]);
				}
				else
				{
					fprintf(file, "�������� ����� �� ������ �� %d. \n", Question[i].OperationNumber[2]);
				}
			}
			fprintf(file, " ��������� ��� ����������� - ��� ������������������ ������. \n");
			fprintf(file, " ������� ���������� ����� ��������, ������� �������� ����� %d ����������� � ����� %d? \n", Question[i].InitialNumber, Question[i].FiniteNumber);
			if (QuanityOfRequiredPoints == 1)
			{
				fprintf(file, " ��� ���� ���������� ���������� ��������� �������� ����� %d. \n", Question[i].RequiredPoint[0]);
			}
			else if (QuanityOfRequiredPoints == 2)
			{
				fprintf(file, " ��� ���� ���������� ���������� ��������� �������� ����� %d � %d. \n", Question[i].RequiredPoint[0], Question[i].RequiredPoint[1]);
			}
			else if (QuanityOfRequiredPoints == 3)
			{
				fprintf(file, " ��� ���� ���������� ���������� ��������� �������� ����� %d, %d � %d. \n", Question[i].RequiredPoint[0], Question[i].RequiredPoint[1], Question[i].RequiredPoint[2]);
			}
			if (QuanityOfBannedPoints == 1)
			{
				fprintf(file, " ����� ���������� ���������� ��������� �� �������� ����� %d. \n", Question[i].BannedPoint[0]);
			}
			else if (QuanityOfBannedPoints == 2)
			{
				fprintf(file, " ����� ���������� ���������� ��������� �� �������� ����� %d � %d. \n", Question[i].BannedPoint[0], Question[i].BannedPoint[1]);
			}
			else if (QuanityOfBannedPoints == 3)
			{
				fprintf(file, " ����� ���������� ���������� ��������� �� �������� ����� %d, %d � %d. \n", Question[i].BannedPoint[0], Question[i].BannedPoint[1], Question[i].BannedPoint[2]);
			}
			fprintf(file, " ���������� ���������� ��������� - ��� ������������������ ����������� ���������� ���� ������ ���������. \n");
			fprintf(file, " \n �����: %d \n", Question[i].Result);
			Sleep(500);
		}
		fclose(file);
	}
}

void SecondMode(const int &QuanityOfTasks, const int &QuanityOfSteps, const int &QuanityOfRequiredPoints, const int &QuanityOfBannedPoints, Data Question[]) // ����� 2: "������-�����"
{
	for (int i = 0; i < QuanityOfTasks; i++)
	{
		Question[i].InitialNumber = 0;
		Question[i].FiniteNumber = 100;
		for (int k = 0; k < 3; k++)
		{
			Question[i].Operation[k] = -(k+1);
			Question[i].OperationNumber[k] = -(k + 1);
			Question[i].RequiredPoint[k] = -(k + 1);
			Question[i].BannedPoint[k] = -(k + 4);
		}
		Question[i].Result = 0;
	}

	system("cls");

	int PrOt = 0;
	for (int i = 0; i < QuanityOfTasks; i++)
	{
		Generation(i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question);
		system("cls");
		cout << " ����������� ����������� �����, ���������� �� ������." << endl
			<< " � ����������� ���� ��� �������, �������� ��������� ������:" << endl;
		for (int k = 0; k < QuanityOfSteps; k++)
		{
			cout << " " << k + 1 << ". ";
			if (Question[i].Operation[k] == 1) { cout << "��������� " << Question[i].OperationNumber[k] << "." << endl; }
			else { cout << "�������� �� " << Question[i].OperationNumber[k] << "." << endl; }
		}
		cout << " ������ �� ��� ";
		if (Question[i].Operation[0] == 1) { cout << "����������� ����� �� ������ �� " << Question[i].OperationNumber[0] << "." << endl; }
		else { cout << "�������� ����� �� ������ �� " << Question[i].OperationNumber[0] << "." << endl; }
		cout << " ������ �� ��� ";
		if (Question[i].Operation[1] == 1) { cout << "����������� ����� �� ������ �� " << Question[i].OperationNumber[1] << "." << endl; }
		else { cout << "�������� ����� �� ������ �� " << Question[i].OperationNumber[1] << "." << endl; }
		if (QuanityOfSteps == 3) 
		{
			cout << " ������ �� ��� ";
			if (Question[i].Operation[2] == 1) { cout << "����������� ����� �� ������ �� " << Question[i].OperationNumber[2] << "." << endl; }
			else { cout << "�������� ����� �� ������ �� " << Question[i].OperationNumber[2] << "." << endl; }
		}
		cout << " ��������� ��� ����������� - ��� ������������������ ������. " << endl;
		cout << " ������� ���������� ����� ��������, ������� �������� ����� " << Question[i].InitialNumber << " ����������� � ����� " << Question[i].FiniteNumber << "?" << endl;
		if (QuanityOfRequiredPoints == 1)
		{
			cout << " ��� ���� ���������� ���������� ��������� �������� ����� " << Question[i].RequiredPoint[0] << "." << endl;
		}
		else if (QuanityOfRequiredPoints == 2)
		{
			cout << " ��� ���� ���������� ���������� ��������� �������� ����� " << Question[i].RequiredPoint[0] << " � " << Question[i].RequiredPoint[1] << "." << endl;
		}
		else if (QuanityOfRequiredPoints == 3)
		{
			cout << " ��� ���� ���������� ���������� ��������� �������� ����� " << Question[i].RequiredPoint[0] << ", " << Question[i].RequiredPoint[1] << " � " << Question[i].RequiredPoint[2] << "." << endl;
		}
		if (QuanityOfBannedPoints == 1)
		{
			cout << " ����� ���������� ���������� ��������� �� �������� ����� " << Question[i].BannedPoint[0] << "." << endl;
		}
		else if (QuanityOfBannedPoints == 2)
		{
			cout << " ����� ���������� ���������� ��������� �� �������� ����� " << Question[i].BannedPoint[0] << " � " << Question[i].BannedPoint[1] << "." << endl;
		}
		else if (QuanityOfBannedPoints == 3)
		{
			cout << " ����� ���������� ���������� ��������� �� �������� ����� " << Question[i].BannedPoint[0] << ", " << Question[i].BannedPoint[1] << " � " << Question[i].BannedPoint[2] << "." << endl;
		}
		cout << " ���������� ���������� ��������� - ��� ������������������ ����������� ���������� ���� ������ ���������." << endl;
		cout << endl << " ������� �����: ";
		int Otvet;
		cin >> Otvet;
		if (Otvet == Question[i].Result) 
		{
			cout << " �����! " << endl << endl;
			PrOt++;
		}
		else
		{
			cout << " ������. " << endl << endl;
		}
	}
	cout << " ����������" << endl;
	cout << " ���������� ���� �����: " << QuanityOfTasks << endl;
	cout << " ���������� �������� �����: " << PrOt << endl;
	cout << " ������: ";
	double Percent = (double)PrOt / (double)QuanityOfTasks;
	if (Percent > 0.9) { cout << " ������ ��� ��� ����� ��� ������." << endl; }
	else if (Percent > 0.6) { cout << " ������ ����������� �����, �� ���� ������." << endl; }
	else if (Percent > 0.3) { cout << " ������ ��������� ���������� �����, ������� ����� ������." << endl; }
	else { cout << " ������ ������� ���� ����� ��� �� ����� ������ �� ������ �����." << endl; }
}

void Generation(const int &i,const int &QuanityOfSteps, const int &QuanityOfRequiredPoints, const int &QuanityOfBannedPoints, Data Question[]) // ��������� �����
{	
	Sleep(500);
	srand(time(NULL));

	do
	{
		Question[i].InitialNumber = rand() % 100 + 1;
		Question[i].FiniteNumber = rand() % 100 + 1;
	} while ((Question[i].FiniteNumber <= Question[i].InitialNumber) or (Question[i].FiniteNumber - Question[i].InitialNumber < 7) or (Question[i].FiniteNumber - Question[i].InitialNumber > 60));
	
	for (int j = 0; j < QuanityOfSteps; j++)
	{
		Question[i].Operation[j] = rand() % 2 + 1;
		if (Question[i].Operation[j] == 1)
		{
			do
			{
				Question[i].OperationNumber[j] = rand() % 5 + 1;
			} while (((Question[i].OperationNumber[0] == Question[i].OperationNumber[1]) and (Question[i].Operation[j] == 1)) or ((Question[i].OperationNumber[1] == Question[i].OperationNumber[2]) and (Question[i].Operation[j] == 1)) or ((Question[i].OperationNumber[0] == Question[i].OperationNumber[2]) and (Question[i].Operation[j] == 1)));
		}
		else
		{
			do
			{
				Question[i].OperationNumber[j] = rand() % 4 + 2;
			} while (((Question[i].OperationNumber[0] == Question[i].OperationNumber[1]) and (Question[i].Operation[j] == 2)) or ((Question[i].OperationNumber[1] == Question[i].OperationNumber[2]) and (Question[i].Operation[j] == 1)) or ((Question[i].OperationNumber[0] == Question[i].OperationNumber[2]) and (Question[i].Operation[j] == 1)));
		}
	}
	
	int Sr[2][3] = { {-1,-2,-3}, {-4,-5,-6} };
	do
	{
		for (int k = 0; k < QuanityOfRequiredPoints; k++)
		{
			do
			{
				Question[i].RequiredPoint[k] = rand() % (Question[i].FiniteNumber - Question[i].InitialNumber + 1) + Question[i].InitialNumber;
			} while ((Question[i].RequiredPoint[0] == Question[i].RequiredPoint[1]) or (Question[i].RequiredPoint[1] == Question[i].RequiredPoint[2]) or (Question[i].RequiredPoint[0] == Question[i].RequiredPoint[2]) 
				or (Question[i].RequiredPoint[0] == Question[i].FiniteNumber) or (Question[i].RequiredPoint[1] == Question[i].FiniteNumber) or (Question[i].RequiredPoint[2] == Question[i].FiniteNumber)
				or (Question[i].RequiredPoint[0] == Question[i].InitialNumber) or (Question[i].RequiredPoint[1] == Question[i].InitialNumber) or (Question[i].RequiredPoint[2] == Question[i].InitialNumber));
			
			Sr[0][k] = Question[i].RequiredPoint[k];
		}
		for (int t = 0; t < QuanityOfBannedPoints; t++)
		{
			do
			{
				Question[i].BannedPoint[t] = rand() % (Question[i].FiniteNumber - Question[i].InitialNumber + 1) + Question[i].InitialNumber;
			} while ((Question[i].BannedPoint[0] == Question[i].BannedPoint[1]) or (Question[i].BannedPoint[1] == Question[i].BannedPoint[2]) or (Question[i].BannedPoint[0] == Question[i].BannedPoint[2])
			or (Question[i].BannedPoint[0] == Question[i].FiniteNumber) or (Question[i].BannedPoint[1] == Question[i].FiniteNumber) or (Question[i].BannedPoint[2] == Question[i].FiniteNumber)
				or (Question[i].BannedPoint[0] == Question[i].InitialNumber) or (Question[i].BannedPoint[1] == Question[i].InitialNumber) or (Question[i].BannedPoint[2] == Question[i].InitialNumber));

			Sr[1][t] = Question[i].BannedPoint[t];
		}
	} while ((Sr[0][0] == Sr[1][0]) or (Sr[0][0] == Sr[1][1]) or (Sr[0][0] == Sr[1][2]) or (Sr[0][1] == Sr[1][0]) or (Sr[0][1] == Sr[1][1]) or (Sr[0][1] == Sr[1][2]) or (Sr[0][2] == Sr[1][0]) or (Sr[0][2] == Sr[1][1]) or (Sr[0][2] == Sr[1][2]));

	for (int k = QuanityOfRequiredPoints; k < 3; k++)
	{
		Question[i].RequiredPoint[k] = 0;
	}

	for (int k = QuanityOfBannedPoints; k < 3; k++)
	{
		Question[i].BannedPoint[k] = 0;
	}

	if (QuanityOfRequiredPoints != 0)
	{
		if ((Question[i].RequiredPoint[2] != 0) and (Question[i].RequiredPoint[1] != 0))
		{
			Question[i].Result += Answer(Question[i].InitialNumber, Question[i].RequiredPoint[0], i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) * Answer(Question[i].RequiredPoint[0], Question[i].RequiredPoint[1], i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) * Answer(Question[i].RequiredPoint[1], Question[i].RequiredPoint[2], i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) * Answer(Question[i].RequiredPoint[2], Question[i].FiniteNumber, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question);

		}
		else if (Question[i].RequiredPoint[1] != 0)
		{
			Question[i].Result += Answer(Question[i].InitialNumber, Question[i].RequiredPoint[0], i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) * Answer(Question[i].RequiredPoint[0], Question[i].RequiredPoint[1], i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) * Answer(Question[i].RequiredPoint[1], Question[i].FiniteNumber, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question);
		}
		else
		{
			Question[i].Result += Answer(Question[i].InitialNumber, Question[i].RequiredPoint[0], i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) * Answer(Question[i].RequiredPoint[0], Question[i].FiniteNumber, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question);
		}
	}
	else
	{
		Question[i].Result += Answer(Question[i].InitialNumber, Question[i].FiniteNumber, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question);
	}
}

int Answer(const int &x, const int &y, const int &i, const int &QuanityOfSteps, const int &QuanityOfRequiredPoints, const int &QuanityOfBannedPoints, Data Question[]) // ����� � ������
{
	if (x > y) { return 0; }
	for (int t = 0; t < QuanityOfBannedPoints; t++)
	{
		if (x == Question[i].BannedPoint[t]) { return 0; }
	}
	if (x == y) { return 1; }
	else switch (QuanityOfSteps)
	{
	case 2: 
	{ 
		if ((Question[i].Operation[0] == 1) and (Question[i].Operation[1] == 1))
		{
			return (Answer(x + Question[i].OperationNumber[0],y , i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x + Question[i].OperationNumber[1], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question));
		}
		else if ((Question[i].Operation[0] == 1) and (Question[i].Operation[1] == 2))
		{
			return (Answer(x + Question[i].OperationNumber[0], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x * Question[i].OperationNumber[1], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question));
		}
		else if ((Question[i].Operation[0] == 2) and (Question[i].Operation[1] == 1))
		{
			return (Answer(x * Question[i].OperationNumber[0], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x + Question[i].OperationNumber[1], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question));
		}
		else { return (Answer(x * Question[i].OperationNumber[0], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x * Question[i].OperationNumber[1], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question)); }
	}
	case 3: 
	{ 
		if ((Question[i].Operation[0] == 1) and (Question[i].Operation[1] == 1) and (Question[i].Operation[2] == 1))
		{
			return (Answer(x + Question[i].OperationNumber[0], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x + Question[i].OperationNumber[1], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x + Question[i].OperationNumber[2], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question));
		}
		else if ((Question[i].Operation[0] == 2) and (Question[i].Operation[1] == 1) and (Question[i].Operation[2] == 1))
		{
			return (Answer(x * Question[i].OperationNumber[0], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x + Question[i].OperationNumber[1], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x + Question[i].OperationNumber[2], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question));
		}
		else if ((Question[i].Operation[0] == 1) and (Question[i].Operation[1] == 2) and (Question[i].Operation[2] == 1))
		{
			return (Answer(x + Question[i].OperationNumber[0], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x * Question[i].OperationNumber[1], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x + Question[i].OperationNumber[2], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question));
		}
		else if ((Question[i].Operation[0] == 1) and (Question[i].Operation[1] == 1) and (Question[i].Operation[2] == 2))
		{
			return (Answer(x + Question[i].OperationNumber[0], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x + Question[i].OperationNumber[1], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x * Question[i].OperationNumber[2], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question));
		}
		else if ((Question[i].Operation[0] == 2) and (Question[i].Operation[1] == 2) and (Question[i].Operation[2] == 1))
		{
			return (Answer(x * Question[i].OperationNumber[0], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x * Question[i].OperationNumber[1], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x + Question[i].OperationNumber[2], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question));
		}
		else if ((Question[i].Operation[0] == 2) and (Question[i].Operation[1] == 1) and (Question[i].Operation[2] == 2))
		{
			return (Answer(x * Question[i].OperationNumber[0], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x + Question[i].OperationNumber[1], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x * Question[i].OperationNumber[2], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question));
		}
		else if ((Question[i].Operation[0] == 2) and (Question[i].Operation[1] == 2) and (Question[i].Operation[2] == 2))
		{
			return (Answer(x * Question[i].OperationNumber[0], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x * Question[i].OperationNumber[1], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x * Question[i].OperationNumber[2], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question));
		}
		else { return (Answer(x + Question[i].OperationNumber[0], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x * Question[i].OperationNumber[1], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question) + Answer(x * Question[i].OperationNumber[2], y, i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question)); }
	}
	default: break;
	}
}