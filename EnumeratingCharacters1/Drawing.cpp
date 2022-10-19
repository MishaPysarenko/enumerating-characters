#include "Class.h"
#include "MainInclude.h"
using namespace std;
void Drawing::DrawLanguageMenu()
{
	cout << "--------------------------------\n" <<
		"Please choose your language\n" <<
		"--------------------------------\n" <<
		"     1.ru  2.ua  3.en      \n" <<
		"--------------------------------\n";
};

void Drawing::DrawSettingsMenu(Settings SettingsRAM)
{
	if (SettingsRAM.Language == "ru")
	{
		cout << "----------------------------------" << endl;
		cout << "1.Выбор языка " << SettingsRAM.Language << endl;
		cout << "----------------------------------" << endl;
		cout << "2.Количество потоков " << SettingsRAM.NumberOfThreads << endl;
		cout << "----------------------------------" << endl;
		cout << "3.Количество символов в комбинаций " << SettingsRAM.NumberOfCombinations << endl;
		cout << "---------------------------------------------------------------------------------------------" << endl;
		cout << "Чтобы выбрать и изменить пункт меню, введите номер пункта, для начала программы введыте \"0\": ";
	}
	else if (SettingsRAM.Language == "ua")
	{
		cout << "----------------------------------" << endl;
		cout << "1.Вибір мови " << SettingsRAM.Language << endl;
		cout << "----------------------------------" << endl;
		cout << "2.Кількість потоків " << SettingsRAM.NumberOfThreads << endl;
		cout << "----------------------------------" << endl;
		cout << "3.Кількість символів у комбінаціях " << SettingsRAM.NumberOfCombinations << endl;
		cout << "---------------------------------------------------------------------------------------------" << endl;
		cout << "Щоб вибрати та змінити пункт меню, введіть номер пункту, для початку програми введіть \"0\": ";
	}
	else if (SettingsRAM.Language == "en")
	{
		cout << "-----------------------------------" << endl;
		cout << "1.Language selection " << SettingsRAM.Language << endl;
		cout << "-----------------------------------" << endl;
		cout << "2.Number of threads " << SettingsRAM.NumberOfThreads << endl;
		cout << "-----------------------------------" << endl;
		cout << "3.Number of symbols in combinations " << SettingsRAM.NumberOfCombinations << endl;
		cout << "---------------------------------------------------------------------------------------------" << endl;
		cout << "To select and change a menu item, enter the item number, to start the program enter \"0\": ";
	}
	else
	{
		cout << "ERROR: language setting not found, please restart the program" << endl;
	}
}

void Drawing::DrawSettingsNumberOfThreads(Settings SettingsRAM)
{
	system("cls");
	if (SettingsRAM.Language == "ru")
	{
		cout << "НАСТРОЙКА КОЛИЧЕСТВО ПОТОКОВ" << endl;
		cout << "------------------------------" << endl;
		cout << "ИНФО: Поток  – это программно выделенная область в физическом ядре процессора. \nТакая виртуальная реализация позволяет разделять ресурсы ядра и работать параллельно\nс двумя разными последовательностями команд." << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		cout << "Эта программа позволяет разбить процесс не больше чем на 8 потоков\nСейчас: "<< SettingsRAM.NumberOfThreads << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		cout << "Введите количество потоков: ";
	}
	else if (SettingsRAM.Language == "ua")
	{
		cout << "НАЛАШТУВАННЯ КІЛЬКІСТІ ПОТОКІВ" << endl;
		cout << "------------------------------" << endl;
		cout << "ІНФО: Потік – це програмно виділена область у фізичному ядрі процесора. \nТака віртуальна реалізація дозволяє розділяти ресурси ядра і працювати паралельно\n з двома різними послідовностями команд." << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		cout << "Ця програма дозволяє розбити процес не більше ніж на 8 потоків.\nЗараз: " << SettingsRAM.NumberOfThreads << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		cout << "Введіть кількість потоків: ";
	}
	else if (SettingsRAM.Language == "en")
	{
		cout << "SETTING NUMBER OF STREAMS" << endl;
		cout << "------------------------------" << endl;
		cout << "INFO: A thread is a programmatically allocated area in the physical processor core. \nThis virtual implementation allows you to share kernel resources and work in parallel\nwith two different sequences of commands." << endl;
		cout << "--------------------------------------------------------------------------------------" << endl;
		cout << "This program allows you to split the process into no more than 8 threads\nNow: " << SettingsRAM.NumberOfThreads << endl;
		cout << "--------------------------------------------------------------------------------------" << endl;
		cout << "Enter the number of threads: ";
	}
	else
	{
		cout << "ERROR: language setting not found, please restart the program" << endl;
	}
}

void Drawing::DrawSettingsNumberOfCombinations(Settings SettingsRAM)
{
	system("cls");
	if (SettingsRAM.Language == "ru")
	{
		cout << "НАСТРОЙКА КОЛИЧЕСТВО КОМБИНАЦИЙ СИМВОЛОВ" << endl;
		cout << "----------------------------------------" << endl;
		cout << "Эта программа позволяет задать количество комбинаций не больше чем на 20 символов\nСейчас: " << SettingsRAM.NumberOfCombinations << endl;
		cout << "----------------------------------------" << endl;
		cout << "Введите количество комбинаций: ";
	}
	else if (SettingsRAM.Language == "ua")
	{
		cout << "НАЛАШТУВАННЯ КІЛЬКІСТЬ КОМБІНАЦІЙ СИМВОЛОВ" << endl;
		cout << "------------------------------------------" << endl;
		cout << "Ця програма дозволяє задати кількість комбінацій не більше ніж на 20 символов\nЗараз: " << SettingsRAM.NumberOfCombinations << endl;
		cout << "----------------------------------------" << endl;
		cout << "Введіть кількість комбінацій: ";
	}
	else if (SettingsRAM.Language == "en")
	{
		cout << "SETUP NUMBER OF CHARACTER COMBINATIONS" << endl;
		cout << "--------------------------------------" << endl;
		cout << "This program allows you to set the number of combinations for no more than 20 characters\nNow: " << SettingsRAM.NumberOfCombinations << endl;
		cout << "--------------------------------------" << endl;
		cout << "Enter the number of combinations: ";
	}
	else
	{
		cout << "ERROR: language setting not found, please restart the program" << endl;
	}
}