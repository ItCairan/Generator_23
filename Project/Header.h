#pragma once
#include <iostream>
#include <stdlib.h>
#include <locale>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>


struct Data
{
	// начальное и конечное числа, каждое в одном экземпляре
	int InitialNumber = 0; 
	int FiniteNumber = 100; 
	// Связка операция + число
	int Operation[3] = {-1,-2,-3};
	int OperationNumber[3] = { -1,-2,-3 };
	// сколько чисел нужно или не нужно определяет пользователь
	int RequiredPoint[3] = { -1,-2,-3 };
	int BannedPoint[3] = { -4,-5,-6 };
	// Ответ к задаче
	int Result = 0;
};

void Description();
int TotalNumberOfTasks(); // Количество генерируемых задач
int TotalNumberOfSteps(); // Количество шагов
int TotalNumberOfRequiredPoints(); // Количество обязательных точек
int TotalNumberOfBannedPoints(); // Количество запрещенных точек
int OperatingMode(); // Выбор режима работы
void FirstMode(const int QuanityOfTasks, const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints, Data Question[]); // Режим 1: "Запись задачи в файл"
void SecondMode(const int& QuanityOfTasks, const int& QuanityOfSteps, const int& QuanityOfRequiredPoints, const int& QuanityOfBannedPoints, Data Question[]); // Режим 2: "Вопрос-ответ"
void Generation(const int& i, const int& QuanityOfSteps, const int& QuanityOfRequiredPoints, const int& QuanityOfBannedPoints, Data Question[]); // Генерация задач
int Answer(const int& x, const int& y, const int& i, const int& QuanityOfSteps, const int& QuanityOfRequiredPoints, const int& QuanityOfBannedPoints, Data Question[]); // Ответ к задаче