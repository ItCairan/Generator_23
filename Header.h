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
int TotalNumberOfTasks(); // Количество генерируемых задач
int TotalNumberOfSteps(); // Количество шагов
int TotalNumberOfRequiredPoints(); // Количество обязательных точек
int TotalNumberOfBannedPoints(); // Количество запрещенных точек
int OperatingMode(); // Выбор режима работы
void FirstMode(const int QuanityOfTasks, const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints); // Режим 1: "Запись задачи в файл"
void SecondMode(const int QuanityOfTasks, const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints); // Режим 2: "Вопрос-ответ"
void Generation(const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints); // Генерация задач
int Answer(); // Ответ к задаче