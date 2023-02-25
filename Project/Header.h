#pragma once
#include <iostream>
#include <stdlib.h>
#include <locale>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>


struct Data
{
	// ��������� � �������� �����, ������ � ����� ����������
	int InitialNumber = 0; 
	int FiniteNumber = 100; 
	// ������ �������� + �����
	int Operation[3] = {-1,-2,-3};
	int OperationNumber[3] = { -1,-2,-3 };
	// ������� ����� ����� ��� �� ����� ���������� ������������
	int RequiredPoint[3] = { -1,-2,-3 };
	int BannedPoint[3] = { -4,-5,-6 };
	// ����� � ������
	int Result = 0;
};

void Description();
int TotalNumberOfTasks(); // ���������� ������������ �����
int TotalNumberOfSteps(); // ���������� �����
int TotalNumberOfRequiredPoints(); // ���������� ������������ �����
int TotalNumberOfBannedPoints(); // ���������� ����������� �����
int OperatingMode(); // ����� ������ ������
void FirstMode(const int QuanityOfTasks, const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints, Data Question[]); // ����� 1: "������ ������ � ����"
void SecondMode(const int& QuanityOfTasks, const int& QuanityOfSteps, const int& QuanityOfRequiredPoints, const int& QuanityOfBannedPoints, Data Question[]); // ����� 2: "������-�����"
void Generation(const int& i, const int& QuanityOfSteps, const int& QuanityOfRequiredPoints, const int& QuanityOfBannedPoints, Data Question[]); // ��������� �����
int Answer(const int& x, const int& y, const int& i, const int& QuanityOfSteps, const int& QuanityOfRequiredPoints, const int& QuanityOfBannedPoints, Data Question[]); // ����� � ������