#pragma once
#include "MainInclude.h"

struct Settings
{
	std::string Language;
	short int NumberOfThreads = 3;
	short int AmountSymbols = 94;
	short int NumberOfCombinations = 1;
};

class File
{
public:
	void SaveSettingsLanguageFile(std::string settings);
};

class Drawing
{
public:
	void DrawLanguageMenu();
	void DrawSettingsMenu(Settings SettingsRAM);
	void DrawSettingsNumberOfThreads(Settings SettingsRAM);
	void DrawSettingsNumberOfCombinations(Settings SettingsRAM);
};


