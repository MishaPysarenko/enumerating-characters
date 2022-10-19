#include "Class.h"
#include "MainInclude.h"
using namespace std;
void File::SaveSettingsLanguageFile(std::string settings)
{
	ofstream stream;
	stream.open("settings.txt");
	stream << settings;
	stream.close();
};
