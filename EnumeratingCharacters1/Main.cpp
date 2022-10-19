#include "MainInclude.h"
#include "Class.h"
using namespace std;
void EditSettings(Settings& SettingsRAM);
string ChoisLanguage(Settings& SettingsRAM);
void SplitIntoStreams(Settings SettingsRAM);
void EnumeratingCharaters(std::string name_txt_file, Settings SettingsRAM);
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream SettingsTxt("settings.txt");
	File file;
	Settings SettingsRAM;
	if (!SettingsTxt.is_open())file.SaveSettingsLanguageFile(ChoisLanguage(SettingsRAM));
	else SettingsTxt.close();
	SettingsTxt.open("settings.txt");
	SettingsTxt >> SettingsRAM.Language;
	EditSettings(SettingsRAM);
	SplitIntoStreams(SettingsRAM);
	
}