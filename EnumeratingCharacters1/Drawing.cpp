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
		cout << "1.����� ����� " << SettingsRAM.Language << endl;
		cout << "----------------------------------" << endl;
		cout << "2.���������� ������� " << SettingsRAM.NumberOfThreads << endl;
		cout << "----------------------------------" << endl;
		cout << "3.���������� �������� � ���������� " << SettingsRAM.NumberOfCombinations << endl;
		cout << "---------------------------------------------------------------------------------------------" << endl;
		cout << "����� ������� � �������� ����� ����, ������� ����� ������, ��� ������ ��������� ������� \"0\": ";
	}
	else if (SettingsRAM.Language == "ua")
	{
		cout << "----------------------------------" << endl;
		cout << "1.���� ���� " << SettingsRAM.Language << endl;
		cout << "----------------------------------" << endl;
		cout << "2.ʳ������ ������ " << SettingsRAM.NumberOfThreads << endl;
		cout << "----------------------------------" << endl;
		cout << "3.ʳ������ ������� � ���������� " << SettingsRAM.NumberOfCombinations << endl;
		cout << "---------------------------------------------------------------------------------------------" << endl;
		cout << "��� ������� �� ������ ����� ����, ������ ����� ������, ��� ������� �������� ������ \"0\": ";
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
		cout << "��������� ���������� �������" << endl;
		cout << "------------------------------" << endl;
		cout << "����: �����  � ��� ���������� ���������� ������� � ���������� ���� ����������. \n����� ����������� ���������� ��������� ��������� ������� ���� � �������� �����������\n� ����� ������� �������������������� ������." << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		cout << "��� ��������� ��������� ������� ������� �� ������ ��� �� 8 �������\n������: "<< SettingsRAM.NumberOfThreads << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		cout << "������� ���������� �������: ";
	}
	else if (SettingsRAM.Language == "ua")
	{
		cout << "������������ ʲ��ʲ�Ҳ ����ʲ�" << endl;
		cout << "------------------------------" << endl;
		cout << "����: ���� � �� ��������� ������� ������� � ��������� ��� ���������. \n���� ��������� ��������� �������� �������� ������� ���� � ��������� ����������\n � ����� ������ �������������� ������." << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		cout << "�� �������� �������� ������� ������ �� ����� �� �� 8 ������.\n�����: " << SettingsRAM.NumberOfThreads << endl;
		cout << "----------------------------------------------------------------------------------" << endl;
		cout << "������ ������� ������: ";
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
		cout << "��������� ���������� ���������� ��������" << endl;
		cout << "----------------------------------------" << endl;
		cout << "��� ��������� ��������� ������ ���������� ���������� �� ������ ��� �� 20 ��������\n������: " << SettingsRAM.NumberOfCombinations << endl;
		cout << "----------------------------------------" << endl;
		cout << "������� ���������� ����������: ";
	}
	else if (SettingsRAM.Language == "ua")
	{
		cout << "������������ ʲ��ʲ��� �������ֲ� ��������" << endl;
		cout << "------------------------------------------" << endl;
		cout << "�� �������� �������� ������ ������� ��������� �� ����� �� �� 20 ��������\n�����: " << SettingsRAM.NumberOfCombinations << endl;
		cout << "----------------------------------------" << endl;
		cout << "������ ������� ���������: ";
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