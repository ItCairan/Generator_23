#pragma once
#include <iostream>
#include <stdlib.h>
#include <locale>
#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>


void Description();
int TotalNumberOfTasks(); // ���������� ������������ �����
int TotalNumberOfSteps(); // ���������� �����
int TotalNumberOfRequiredPoints(); // ���������� ������������ �����
int TotalNumberOfBannedPoints(); // ���������� ����������� �����
int OperatingMode(); // ����� ������ ������
void FirstMode(const int QuanityOfTasks, const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints); // ����� 1: "������ ������ � ����"
void SecondMode(const int QuanityOfTasks, const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints); // ����� 2: "������-�����"
void Generation(const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints); // ��������� �����
int Answer(); // ����� � ������