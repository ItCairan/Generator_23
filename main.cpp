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
		cout << " Здравствуйте" << endl;
		cout << " Добро пожаловать в \"Генератор 23 задания из ЕГЭ по информатике\"" << endl;
		int Desc;
		cout << " Для ознакомления с описанием работы программы введите \"1\"." << endl
			<< " Для перехода в меню настройки параметров введите любое другое число." << endl << " ";
		cout << "=> ";
		cin >> Desc;
		cin.get();
		if (Desc == 1) { Description(); }
		system("cls");
		cout << " Параметры" << endl;
		cout << " ===========" << endl;
		int QuanityOfTasks = TotalNumberOfTasks(); // Количество генерируемых задач
		if (QuanityOfTasks != 0)
		{
			cout << " ==============================================================" << endl;
			int QuanityOfSteps = TotalNumberOfSteps(); // Количество шагов
			cout << " ==============================================================" << endl;
			int QuanityOfRequiredPoints = TotalNumberOfRequiredPoints(); // Количество обязательных точек
			cout << " ==============================================================" << endl;
			int QuanityOfBannedPoints = TotalNumberOfBannedPoints(); // Количество запрещенных точек
			cin.get();
			cout << " ==============================================================" << endl;
			cout << " Для перехода в меню выбора режима работы программы нажмите любую клавишу: " << endl << " ";
			cout << "=> ";
			_getch();
			system("cls");
			cout << " Режим работы " << endl;
			cout << " ==============" << endl;
			int  Mode = OperatingMode(); // Выбор режима работы
			switch (Mode)
			{
			case 1: {FirstMode(QuanityOfTasks, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question); break; } // Режим 1: "Запись задачи в файл"
			case 2: {SecondMode(QuanityOfTasks, QuanityOfSteps, QuanityOfRequiredPoints, QuanityOfBannedPoints, Question); break; } // Режим 2: "Вопрос-ответ"
			default: break;
			}
			cout << " ==============================================================" << endl;
			cout << " Для перехода в меню завершения работы программы нажмите любую клавишу: " << endl << " ";
			cout << "=> ";
			_getch();
			system("cls");
			do
			{
				cout << " Выберите дальнейшие действия: " << endl << " 1) Перезапуск программы. " << endl << " 2) Завершение работы программы. " << endl << " ";
				cout << "=> ";
				cin >> Reset;
				if ((Reset < 1) or (Reset > 2)) { cout << " Введено неверное значение. Попробуйте еще раз." << endl; }
			} while ((Reset < 1) or (Reset > 2));
		}
	} while (Reset == 1);
	
	cout << " Программа завершает свою работу. До свидания :) " << endl;

	return 0;
	system("pause");
}