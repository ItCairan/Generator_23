#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
using namespace std;

void Description()
{
	cout << " В этой программе вы сможете: " << endl
		<< " 1. Сгенерировать задачи из 23 задания из ЕГЭ по информатике с заданными параметрами." << endl
		<< " 2. Получить ответы на сгенерированные задачи." << endl
		<< " 3. Сохранить сгенерированные задачи в нужный вам файл." << endl
		<< " 4. Провести игру \"Вопрос-ответ\" и понять уровень своих знаний." << endl
		<< " Условие задачи программа подбирает по заданным пользователем параметрам." << endl
		<< " Значения для задач программа подбирает случайным образом из приемлемого для решения диапазона значений." << endl; 
	cout << " ==============================================================" << endl;
	cout << " Для перехода в меню настройки параметров нажмите любую клавишу: " << endl << " ";
	cout << "=> ";
	_getch();
}

int TotalNumberOfTasks() // Количество генерируемых задач
{
	int NumberT;
	cout << " Сколько задач требуется сгенерировать? " << endl 
		<< " Ожидаемое количество: от \"1\" до \"100\" включительно. " << endl  
		<< " Если генерация задач не требуется, то введите \"0\" и программа завершится." << endl << " ";
	do
	{
		cout << "=> ";
		cin >> NumberT;
		if (NumberT < 0) { cout << " Количество задач не может быть отрицательным. Попробуйте ввести другое значение:" << endl << " "; }
		else if (NumberT > 100) { cout << " Количество задач слишком большое. Попробуйте ввести другое значение:" << endl << " "; }
		else if (NumberT == 0) { cout << " Программа завершает свою работу. До свидания :) " << endl; }
		else { cout << " Прекрасно. Задач будет сгенерировано: " << NumberT << endl; }
	} while ((NumberT < 0) or (NumberT > 100));
	
	return NumberT;
}

int TotalNumberOfSteps() // Количество шагов
{
	int NumberS;
	cout << " Сколько вариантов шага должно быть в задаче? " << endl
		<< " Ожидаемое количество: \"2\" или \"3\". " << endl << " ";
	do
	{
		cout << "=> ";
		cin >> NumberS;
		if (NumberS < 2) { cout << " Слишком мало вариантов шага. Попробуйте ввести другое значение:" << endl << " "; }
		else if (NumberS > 3) { cout << " Вариантов шага слишком много. Попробуйте ввести другое значение:" << endl << " "; }
		else { cout << " Чудесно. Шагов в сгенерированных задачах будет: " << NumberS << endl; }
	} while ((NumberS < 2) or (NumberS > 3));

	return NumberS;
}

int TotalNumberOfRequiredPoints() // Количество обязательных точек
{
	int NumberRP;
	cout << " Сколько чисел обязательно должна содержать траектория вычислений программы? " << endl
		<< " Ожидаемое количество: от \"0\" до \"3\" включительно. " << endl << " ";
	do
	{
		cout << "=> ";
		cin >> NumberRP;
		if (NumberRP < 0) { cout << " Количество чисел не может быть отрицательным. Попробуйте ввести другое значение:" << endl << " "; }
		else if (NumberRP > 3) { cout << " Слишком много чисел для траектории вычислений. Попробуйте ввести другое значение:" << endl << " "; }
		else if (NumberRP == 0) { cout << " Прекрасно. Траектория вычислений не содержит обязательных чисел. " << endl; }
		else { cout << " Супер. Обязательных чисел в траектории: " << NumberRP << endl; }
	} while ((NumberRP < 0) or (NumberRP > 3));

	return NumberRP;
}

int TotalNumberOfBannedPoints() // Количество запрещенных точек
{
	int NumberBP;
	cout << " Сколько чисел обязательно не должно содержаться в траектории вычислений программы? " << endl
		<< " Ожидаемое количество: от \"0\" до \"3\" включительно. " << endl << " ";
	do
	{
		cout << "=> ";
		cin >> NumberBP;
		if (NumberBP < 0) { cout << " Количество чисел не может быть отрицательным. Попробуйте ввести другое значение:" << endl << " "; }
		else if (NumberBP > 3) { cout << " Слишком много чисел для траектории вычислений. Попробуйте ввести другое значение:" << endl << " "; }
		else if (NumberBP == 0) { cout << " Прекрасно. Траектория вычислений не содержит запрещенных чисел. " << endl; }
		else { cout << " Прекрасно. Запрещенных чисел в траектории: " << NumberBP << endl; }
	} while ((NumberBP < 0) or (NumberBP > 3));

	return NumberBP;
}

int OperatingMode() // Выбор режима работы
{
	int Mode;
	int Zero = 1;
	do
	{
		
		cout << " Выберите дальнейший режим работы." << endl
			<< " 1) Режим \"Запись задачи в файл\"" << endl
			<< " 2) Режим \"Вопрос - ответ\"" << endl;
		if (Zero == 1) { cout << " Для ознакомления с режимами работы введите \" 0 \"" << endl; }
		cout << " => ";
		cin >> Mode;
		if ((Mode == 0) and (Zero == 1)) 
		{ 
			cout << " Описание режимов " << endl ;
			cout << " 1) \"Запись задачи в файл\" " << endl
				<< " Этот режим служит для того, чтобы сгенерированные задачи и ответы к ним записывались в файл." << endl
				<< " Пользователю предлагается выбрать файл в формате \"txt\" для сохранения данных: " << endl
				<< " 1. Пользователь может указать путь к конкретному файлу." << endl
				<< " 2. Пользователь может выбрать для сохранения файл по умолчанию" << endl
				<< " Файл по умолчанию - это текстовый файл созданный программой на рабочем столе по название \"Задание 23\"." << endl
				<< " Затем в файл сохраняются задачи и ответы." << endl
				<< " Если выбранный файл оказался не пустым, то программа прозводит запись с новой строки.";
			cout << " 2) \"Вопрос - ответ\" " << endl
				<< " Этот режим служит для того, чтобы выводить сгенерированные задачи по очереди и реагировать на ответ пользователя." << endl
				<< " После этого программа выводит статистику и оценку ответов пользователя." << endl
				<< " Статистика состоит из количества всех задач и количества решенных задач."
				<< " Оценка ответов заключается в выводе основанном на процентном соотношении решенных задач." << endl;
			cout << " ==============================================================" << endl;
			Zero = 0;
		}
		else if (((Mode < 1) or (Mode > 2))) { cout << " Режима с таким номером не существует. Попробуйте ввести другое значение:" << endl; }
		else 
		{ 
			Sleep(500);
			switch (Mode)
			{
			case 1: {cout << " Супер. Вы выбрали режим \"Запись задачи в файл\" " << endl; break; }
			case 2: {cout << " Супер. Вы выбрали режим \"Вопрос - ответ\" " << endl; break; }
			default: break;
			}
		}
	} while ((Mode < 1) or (Mode > 2));
	
	return Mode;
}

void FirstMode(const int QuanityOfTasks, const int QuanityOfSteps, const int QuanityOfRequiredPoints, const int QuanityOfBannedPoints, Data Question[]) // Режим 1: "Запись задачи в файл"
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
		cout << " Укажите способ выбора файла для сохранения: " << endl
			<< " 1) Указать адрес файла самостоятельно " << endl
			<< " 2) Выбрать файл по умолчанию" << endl;
		cout << " => ";
		cin >> V;
		if ((V < 1) or (V > 2)) { cout << " Введено неверное значение. Попробуйте ввести другое значение." << endl; }
		else if (V == 2) { Sleep(500);  cout << " Сохранение будет произведено в файл по умолчанию" << endl; }
	} while ((V < 1) or (V > 2));
	cin.get();
	if (V == 1)
	{
		FILE* file;
		char filename[255];
		do
		{
			cout << " Введите имя файла. " << endl
				<< " На ввод ожидается путь к файлу. " << endl;
			cout << " => ";
			gets_s(filename, 255);
			file = fopen(filename, "a+");
			if (file == NULL) { cout << " Доступ к файлу запрещен. Попробуйте ввести другой адрес." << endl; }
		}while (file == NULL);
		for (int i = 0; i < QuanityOfTasks; i++)
		{
			Generation(i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question);
			fprintf(file, " \n \n %d. Исполнитель преобразует число, записанное на экране. \n", i + 1);
			fprintf(file, " У исполнителя есть три команды, которыми присвоены номера: \n");
			for (int k = 0; k < QuanityOfSteps; k++)
			{
				fprintf(file, " %d ", k + 1);
				if (Question[i].Operation[k] == 1) 
				{ 
					fprintf(file, "Прибавить %d. \n", Question[i].OperationNumber[k]);
				}
				else 
				{ 
					fprintf(file, "Умножить на %d. \n", Question[i].OperationNumber[k]);
				}
			}
			fprintf(file, " Первая из них ");
			if (Question[i].Operation[0] == 1) 
			{ 
				fprintf(file, "увеличивает число на экране на %d. \n", Question[i].OperationNumber[0]);
			}
			else 
			{ 
				fprintf(file, "умножает число на экране на %d. \n", Question[i].OperationNumber[0]);
			}
			fprintf(file, " Вторая из них ");
			if (Question[i].Operation[1] == 1) 
			{ 
				fprintf(file, "увеличивает число на экране на %d. \n", Question[i].OperationNumber[1]);
			}
			else 
			{ 
				fprintf(file, "умножает число на экране на %d. \n", Question[i].OperationNumber[1]);
			}
			if (QuanityOfSteps == 3)
			{
				fprintf(file, " Третья из них ");
				if (Question[i].Operation[2] == 1) 
				{ 
					fprintf(file, "увеличивает число на экране на %d. \n", Question[i].OperationNumber[2]);
				}
				else 
				{ 
					fprintf(file, "умножает число на экране на %d. \n", Question[i].OperationNumber[2]);
				}
			}
			fprintf(file, " Программа для исполнителя - это последовательность команд. \n");
			fprintf(file, " Сколько существует таких программ, которые исходное число %d преобразуют в число %d? \n", Question[i].InitialNumber, Question[i].FiniteNumber);
			if (QuanityOfRequiredPoints == 1)
			{
				fprintf(file, " При этом траектория вычислений программы содержит число %d. \n", Question[i].RequiredPoint[0]);
			}
			else if (QuanityOfRequiredPoints == 2)
			{
				fprintf(file, " При этом траектория вычислений программы содержит числа %d и %d. \n", Question[i].RequiredPoint[0], Question[i].RequiredPoint[1]);
			}
			else if (QuanityOfRequiredPoints == 3)
			{
				fprintf(file, " При этом траектория вычислений программы содержит числа %d, %d и %d. \n", Question[i].RequiredPoint[0], Question[i].RequiredPoint[1], Question[i].RequiredPoint[2]);
			}
			if (QuanityOfBannedPoints == 1)
			{
				fprintf(file, " Также траектория вычислений программы не содержит число %d. \n", Question[i].BannedPoint[0]);
			}
			else if (QuanityOfBannedPoints == 2)
			{
				fprintf(file, " Также траектория вычислений программы не содержит числа %d и %d. \n", Question[i].BannedPoint[0], Question[i].BannedPoint[1]);
			}
			else if (QuanityOfBannedPoints == 3)
			{
				fprintf(file, " Также траектория вычислений программы не содержит числа %d, %d и %d. \n", Question[i].BannedPoint[0], Question[i].BannedPoint[1], Question[i].BannedPoint[2]);
			}
			fprintf(file, " Траектория вычислений программы - это последовательность результатов выполнения всех команд программы. \n");
			fprintf(file, " \n Ответ: %d \n", Question[i].Result);
			Sleep(500);
		}
		fclose(file);
	}
	else
	{
		FILE* file;
		char filename [BUFSIZ] = "C:\\Users\\kiril\\Desktop\\Задание 23.txt";
		fopen_s(&file, filename, "a+");
		for (int i = 0; i < QuanityOfTasks; i++)
		{
			Generation(i, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question);
			fprintf(file, " \n \n %d. Исполнитель преобразует число, записанное на экране. \n", i + 1);
			fprintf(file, " У исполнителя есть три команды, которыми присвоены номера: \n");
			for (int k = 0; k < QuanityOfSteps; k++)
			{
				fprintf(file, " %d ", k + 1);
				if (Question[i].Operation[k] == 1)
				{
					fprintf(file, "Прибавить %d. \n", Question[i].OperationNumber[k]);
				}
				else
				{
					fprintf(file, "Умножить на %d. \n", Question[i].OperationNumber[k]);
				}
			}
			fprintf(file, " Первая из них ");
			if (Question[i].Operation[0] == 1)
			{
				fprintf(file, "увеличивает число на экране на %d. \n", Question[i].OperationNumber[0]);
			}
			else
			{
				fprintf(file, "умножает число на экране на %d. \n", Question[i].OperationNumber[0]);
			}
			fprintf(file, " Вторая из них ");
			if (Question[i].Operation[1] == 1)
			{
				fprintf(file, "увеличивает число на экране на %d. \n", Question[i].OperationNumber[1]);
			}
			else
			{
				fprintf(file, "умножает число на экране на %d. \n", Question[i].OperationNumber[1]);
			}
			if (QuanityOfSteps == 3)
			{
				fprintf(file, " Третья из них ");
				if (Question[i].Operation[2] == 1)
				{
					fprintf(file, "увеличивает число на экране на %d. \n", Question[i].OperationNumber[2]);
				}
				else
				{
					fprintf(file, "умножает число на экране на %d. \n", Question[i].OperationNumber[2]);
				}
			}
			fprintf(file, " Программа для исполнителя - это последовательность команд. \n");
			fprintf(file, " Сколько существует таких программ, которые исходное число %d преобразуют в число %d? \n", Question[i].InitialNumber, Question[i].FiniteNumber);
			if (QuanityOfRequiredPoints == 1)
			{
				fprintf(file, " При этом траектория вычислений программы содержит число %d. \n", Question[i].RequiredPoint[0]);
			}
			else if (QuanityOfRequiredPoints == 2)
			{
				fprintf(file, " При этом траектория вычислений программы содержит числа %d и %d. \n", Question[i].RequiredPoint[0], Question[i].RequiredPoint[1]);
			}
			else if (QuanityOfRequiredPoints == 3)
			{
				fprintf(file, " При этом траектория вычислений программы содержит числа %d, %d и %d. \n", Question[i].RequiredPoint[0], Question[i].RequiredPoint[1], Question[i].RequiredPoint[2]);
			}
			if (QuanityOfBannedPoints == 1)
			{
				fprintf(file, " Также траектория вычислений программы не содержит число %d. \n", Question[i].BannedPoint[0]);
			}
			else if (QuanityOfBannedPoints == 2)
			{
				fprintf(file, " Также траектория вычислений программы не содержит числа %d и %d. \n", Question[i].BannedPoint[0], Question[i].BannedPoint[1]);
			}
			else if (QuanityOfBannedPoints == 3)
			{
				fprintf(file, " Также траектория вычислений программы не содержит числа %d, %d и %d. \n", Question[i].BannedPoint[0], Question[i].BannedPoint[1], Question[i].BannedPoint[2]);
			}
			fprintf(file, " Траектория вычислений программы - это последовательность результатов выполнения всех команд программы. \n");
			fprintf(file, " \n Ответ: %d \n", Question[i].Result);
			Sleep(500);
		}
		fclose(file);
	}
}

void SecondMode(const int &QuanityOfTasks, const int &QuanityOfSteps, const int &QuanityOfRequiredPoints, const int &QuanityOfBannedPoints, Data Question[]) // Режим 2: "Вопрос-ответ"
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
		cout << " Исполнитель преобразует число, записанное на экране." << endl
			<< " У исполнителя есть три команды, которыми присвоены номера:" << endl;
		for (int k = 0; k < QuanityOfSteps; k++)
		{
			cout << " " << k + 1 << ". ";
			if (Question[i].Operation[k] == 1) { cout << "Прибавить " << Question[i].OperationNumber[k] << "." << endl; }
			else { cout << "Умножить на " << Question[i].OperationNumber[k] << "." << endl; }
		}
		cout << " Первая из них ";
		if (Question[i].Operation[0] == 1) { cout << "увеличивает число на экране на " << Question[i].OperationNumber[0] << "." << endl; }
		else { cout << "умножает число на экране на " << Question[i].OperationNumber[0] << "." << endl; }
		cout << " Вторая из них ";
		if (Question[i].Operation[1] == 1) { cout << "увеличивает число на экране на " << Question[i].OperationNumber[1] << "." << endl; }
		else { cout << "умножает число на экране на " << Question[i].OperationNumber[1] << "." << endl; }
		if (QuanityOfSteps == 3) 
		{
			cout << " Третья из них ";
			if (Question[i].Operation[2] == 1) { cout << "увеличивает число на экране на " << Question[i].OperationNumber[2] << "." << endl; }
			else { cout << "умножает число на экране на " << Question[i].OperationNumber[2] << "." << endl; }
		}
		cout << " Программа для исполнителя - это последовательность команд. " << endl;
		cout << " Сколько существует таких программ, которые исходное число " << Question[i].InitialNumber << " преобразуют в число " << Question[i].FiniteNumber << "?" << endl;
		if (QuanityOfRequiredPoints == 1)
		{
			cout << " При этом траектория вычислений программы содержит число " << Question[i].RequiredPoint[0] << "." << endl;
		}
		else if (QuanityOfRequiredPoints == 2)
		{
			cout << " При этом траектория вычислений программы содержит числа " << Question[i].RequiredPoint[0] << " и " << Question[i].RequiredPoint[1] << "." << endl;
		}
		else if (QuanityOfRequiredPoints == 3)
		{
			cout << " При этом траектория вычислений программы содержит числа " << Question[i].RequiredPoint[0] << ", " << Question[i].RequiredPoint[1] << " и " << Question[i].RequiredPoint[2] << "." << endl;
		}
		if (QuanityOfBannedPoints == 1)
		{
			cout << " Также траектория вычислений программы не содержит число " << Question[i].BannedPoint[0] << "." << endl;
		}
		else if (QuanityOfBannedPoints == 2)
		{
			cout << " Также траектория вычислений программы не содержит числа " << Question[i].BannedPoint[0] << " и " << Question[i].BannedPoint[1] << "." << endl;
		}
		else if (QuanityOfBannedPoints == 3)
		{
			cout << " Также траектория вычислений программы не содержит числа " << Question[i].BannedPoint[0] << ", " << Question[i].BannedPoint[1] << " и " << Question[i].BannedPoint[2] << "." << endl;
		}
		cout << " Траектория вычислений программы - это последовательность результатов выполнения всех команд программы." << endl;
		cout << endl << " Введите ответ: ";
		int Otvet;
		cin >> Otvet;
		if (Otvet == Question[i].Result) 
		{
			cout << " Верно! " << endl << endl;
			PrOt++;
		}
		else
		{
			cout << " Ошибка. " << endl << endl;
		}
	}
	cout << " Статистика" << endl;
	cout << " Количество всех задач: " << QuanityOfTasks << endl;
	cout << " Количество реженных задач: " << PrOt << endl;
	cout << " Оценка: ";
	double Percent = (double)PrOt / (double)QuanityOfTasks;
	if (Percent > 0.9) { cout << " Решены все или почти все задачи." << endl; }
	else if (Percent > 0.6) { cout << " Решено большинство задач, но есть ошибки." << endl; }
	else if (Percent > 0.3) { cout << " Решено небольшое количество задач, слишком много ошибок." << endl; }
	else { cout << " Решено слишком мало задач или ни одной задачи не решено вовсе." << endl; }
}

void Generation(const int &i,const int &QuanityOfSteps, const int &QuanityOfRequiredPoints, const int &QuanityOfBannedPoints, Data Question[]) // Генерация задач
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

int Answer(const int &x, const int &y, const int &i, const int &QuanityOfSteps, const int &QuanityOfRequiredPoints, const int &QuanityOfBannedPoints, Data Question[]) // Ответ к задаче
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