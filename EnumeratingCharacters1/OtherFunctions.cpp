#include "Class.h"
#include "MainInclude.h"
using namespace std;
string ChoisLanguage(Settings& SettingsRAM)
{
	Drawing menu;
	while (true)
	{
		system("cls");
		menu.DrawLanguageMenu();
		string language;
		cin >> language;
		if ((language == "1") || (language == "ru") || (language == "RU"))
		{
			system("cls");
			SettingsRAM.Language = "ru";
			return ("ru");
		}
		else if ((language == "2") || (language == "ua") || (language == "UA"))
		{
			system("cls");
			SettingsRAM.Language = "ua";
			return ("ua");
		}
		else if ((language == "3") || (language == "en") || (language == "EN"))
		{
			system("cls");
			SettingsRAM.Language = "en";
			return ("en");
		}
	}
};

void EnumeratingCharaters(std::string name_txt_file, Settings SettingsRAM, short int CallingThreadNumber)
{
	//смотри, тебе осталдось лиш разделить количество символов на перебор
	//в принципе логика такая "CallingThreadNumber" это номер поктока которы управляет функцыей
	//этот номер надо использовать так чтобы взять эту часть от всей части 
	ofstream file(name_txt_file);
	short int NumberOfIterations = 1 + (SettingsRAM.AmountSymbols / SettingsRAM.NumberOfThreads);
	short int CycleStart;
	if (CallingThreadNumber == 1)CycleStart = 0;
	//else if (CallingThreadNumber == SettingsRAM.NumberOfThreads)CycleStart = SettingsRAM.AmountSymbols - NumberOfIterations;
	else CycleStart = NumberOfIterations * (CallingThreadNumber - 1);
	if (SettingsRAM.NumberOfCombinations == 1)
	{
		char symbol[1];
		short int first_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			symbol[0] = first_char + 33;
			cout << symbol[0] << endl;
			file << symbol[0] << endl;
		}
		file.close();
	}
	else if (SettingsRAM.NumberOfCombinations == 2)
	{
		char symbol[2];
		short int first_char = CycleStart, second_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				symbol[0] = first_char + 33;
				symbol[1] = second_char + 33;
				cout << symbol[0] << symbol[1] << endl;
				file << symbol[0] << symbol[1] << endl;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 3)
	{
		char symbol[3];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					symbol[0] = first_char + 33;
					symbol[1] = second_char + 33;
					symbol[2] = third_char + 33;
					cout << symbol[0] << symbol[1] << symbol[2] << endl;
					file << symbol[0] << symbol[1] << symbol[2] << endl;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 4)
	{
		char symbol[4];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; first_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; first_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; first_char++, NumberOfIterationsControl3++)//4
					{
						symbol[0] = first_char + 33;
						symbol[1] = second_char + 33;
						symbol[2] = third_char + 33;
						symbol[3] = fourth_char + 33;
						cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << endl;
						file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << endl;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 5)
	{
		char symbol[5];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							symbol[0] = first_char + 33;
							symbol[1] = second_char + 33;
							symbol[2] = third_char + 33;
							symbol[3] = fourth_char + 33;
							symbol[4] = fifth_char + 33;
							cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << endl;
							file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << endl;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 6)
	{
		char symbol[6];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								symbol[0] = first_char + 33;
								symbol[1] = second_char + 33;
								symbol[2] = third_char + 33;
								symbol[3] = fourth_char + 33;
								symbol[4] = fifth_char + 33;
								symbol[5] = sixth_char + 33;
								cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << endl;
								file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << endl;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 7)
	{
		char symbol[7];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									symbol[0] = first_char + 33;
									symbol[1] = second_char + 33;
									symbol[2] = third_char + 33;
									symbol[3] = fourth_char + 33;
									symbol[4] = fifth_char + 33;
									symbol[5] = sixth_char + 33;
									symbol[6] = seventh_char + 33;
									cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << endl;
									file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << endl;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 8)
	{
		char symbol[8];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										symbol[0] = first_char + 33;
										symbol[1] = second_char + 33;
										symbol[2] = third_char + 33;
										symbol[3] = fourth_char + 33;
										symbol[4] = fifth_char + 33;
										symbol[5] = sixth_char + 33;
										symbol[6] = seventh_char + 33;
										symbol[7] = eighth_char + 33;
										cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << endl;
										file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << endl;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 9)
	{
		char symbol[9];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart, ninth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										for (short int NumberOfIterationsControl8 = 0; NumberOfIterationsControl8 < NumberOfIterations; ninth_char++, NumberOfIterationsControl8++)//9
										{
											symbol[0] = first_char + 33;
											symbol[1] = second_char + 33;
											symbol[2] = third_char + 33;
											symbol[3] = fourth_char + 33;
											symbol[4] = fifth_char + 33;
											symbol[5] = sixth_char + 33;
											symbol[6] = seventh_char + 33;
											symbol[7] = eighth_char + 33;
											symbol[8] = ninth_char + 33;
											cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << endl;
											file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << endl;
										}
										ninth_char = CycleStart;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 10)
	{
		char symbol[10];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart, ninth_char = CycleStart, tenth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										for (short int NumberOfIterationsControl8 = 0; NumberOfIterationsControl8 < NumberOfIterations; ninth_char++, NumberOfIterationsControl8++)//9
										{
											for (short int NumberOfIterationsControl9 = 0; NumberOfIterationsControl9 < NumberOfIterations; tenth_char++, NumberOfIterationsControl9++)//10
											{
												symbol[0] = first_char + 33;
												symbol[1] = second_char + 33;
												symbol[2] = third_char + 33;
												symbol[3] = fourth_char + 33;
												symbol[4] = fifth_char + 33;
												symbol[5] = sixth_char + 33;
												symbol[6] = seventh_char + 33;
												symbol[7] = eighth_char + 33;
												symbol[8] = ninth_char + 33;
												symbol[9] = tenth_char + 33;
												cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << endl;
												file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << endl;
											}
											tenth_char = CycleStart;
										}
										ninth_char = CycleStart;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 11)
	{
		char symbol[11];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart, ninth_char = CycleStart, tenth_char = CycleStart, eleventh_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										for (short int NumberOfIterationsControl8 = 0; NumberOfIterationsControl8 < NumberOfIterations; ninth_char++, NumberOfIterationsControl8++)//9
										{
											for (short int NumberOfIterationsControl9 = 0; NumberOfIterationsControl9 < NumberOfIterations; tenth_char++, NumberOfIterationsControl9++)//10
											{
												for (short int NumberOfIterationsControl10 = 0; NumberOfIterationsControl10 < NumberOfIterations; eleventh_char++, NumberOfIterationsControl10++)//11
												{
													symbol[0] = first_char + 33;
													symbol[1] = second_char + 33;
													symbol[2] = third_char + 33;
													symbol[3] = fourth_char + 33;
													symbol[4] = fifth_char + 33;
													symbol[5] = sixth_char + 33;
													symbol[6] = seventh_char + 33;
													symbol[7] = eighth_char + 33;
													symbol[8] = ninth_char + 33;
													symbol[9] = tenth_char + 33;
													symbol[10] = eleventh_char + 33;
													cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << endl;
													file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << endl;
												}
												eleventh_char = CycleStart;
											}
											tenth_char = CycleStart;
										}
										ninth_char = CycleStart;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 12)
	{
		char symbol[12];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart, ninth_char = CycleStart, tenth_char = CycleStart, eleventh_char = CycleStart,
			twelfth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										for (short int NumberOfIterationsControl8 = 0; NumberOfIterationsControl8 < NumberOfIterations; ninth_char++, NumberOfIterationsControl8++)//9
										{
											for (short int NumberOfIterationsControl9 = 0; NumberOfIterationsControl9 < NumberOfIterations; tenth_char++, NumberOfIterationsControl9++)//10
											{
												for (short int NumberOfIterationsControl10 = 0; NumberOfIterationsControl10 < NumberOfIterations; eleventh_char++, NumberOfIterationsControl10++)//11
												{
													for (short int NumberOfIterationsControl11 = 0; NumberOfIterationsControl11 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl11++)//12
													{
														symbol[0] = first_char + 33;
														symbol[1] = second_char + 33;
														symbol[2] = third_char + 33;
														symbol[3] = fourth_char + 33;
														symbol[4] = fifth_char + 33;
														symbol[5] = sixth_char + 33;
														symbol[6] = seventh_char + 33;
														symbol[7] = eighth_char + 33;
														symbol[8] = ninth_char + 33;
														symbol[9] = tenth_char + 33;
														symbol[10] = eleventh_char + 33;
														symbol[11] = twelfth_char + 33;
														cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << endl;
														file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << endl;
													}
													twelfth_char = CycleStart;
												}
												eleventh_char = CycleStart;
											}
											tenth_char = CycleStart;
										}
										ninth_char = CycleStart;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 13)
	{
		char symbol[13];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart, ninth_char = CycleStart, tenth_char = CycleStart, eleventh_char = CycleStart,
			twelfth_char = CycleStart, thirteenth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										for (short int NumberOfIterationsControl8 = 0; NumberOfIterationsControl8 < NumberOfIterations; ninth_char++, NumberOfIterationsControl8++)//9
										{
											for (short int NumberOfIterationsControl9 = 0; NumberOfIterationsControl9 < NumberOfIterations; tenth_char++, NumberOfIterationsControl9++)//10
											{
												for (short int NumberOfIterationsControl10 = 0; NumberOfIterationsControl10 < NumberOfIterations; eleventh_char++, NumberOfIterationsControl10++)//11
												{
													for (short int NumberOfIterationsControl11 = 0; NumberOfIterationsControl11 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl11++)//12
													{
														for (short int NumberOfIterationsControl12 = 0; NumberOfIterationsControl12 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl12++)//13
														{
															symbol[0] = first_char + 33;
															symbol[1] = second_char + 33;
															symbol[2] = third_char + 33;
															symbol[3] = fourth_char + 33;
															symbol[4] = fifth_char + 33;
															symbol[5] = sixth_char + 33;
															symbol[6] = seventh_char + 33;
															symbol[7] = eighth_char + 33;
															symbol[8] = ninth_char + 33;
															symbol[9] = tenth_char + 33;
															symbol[10] = eleventh_char + 33;
															symbol[11] = twelfth_char + 33;
															symbol[12] = thirteenth_char + 33;
															cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << endl;
															file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << endl;
														}
														thirteenth_char = CycleStart;
													}
													twelfth_char = CycleStart;
												}
												eleventh_char = CycleStart;
											}
											tenth_char = CycleStart;
										}
										ninth_char = CycleStart;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 14)
	{
		char symbol[14];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart, ninth_char = CycleStart, tenth_char = CycleStart, eleventh_char = CycleStart,
			twelfth_char = CycleStart, thirteenth_char = CycleStart, fourteenth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										for (short int NumberOfIterationsControl8 = 0; NumberOfIterationsControl8 < NumberOfIterations; ninth_char++, NumberOfIterationsControl8++)//9
										{
											for (short int NumberOfIterationsControl9 = 0; NumberOfIterationsControl9 < NumberOfIterations; tenth_char++, NumberOfIterationsControl9++)//10
											{
												for (short int NumberOfIterationsControl10 = 0; NumberOfIterationsControl10 < NumberOfIterations; eleventh_char++, NumberOfIterationsControl10++)//11
												{
													for (short int NumberOfIterationsControl11 = 0; NumberOfIterationsControl11 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl11++)//12
													{
														for (short int NumberOfIterationsControl12 = 0; NumberOfIterationsControl12 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl12++)//13
														{
															for (short int NumberOfIterationsControl13 = 0; NumberOfIterationsControl13 < NumberOfIterations; fourteenth_char++, NumberOfIterationsControl13++)//14
															{
																symbol[0] = first_char + 33;
																symbol[1] = second_char + 33;
																symbol[2] = third_char + 33;
																symbol[3] = fourth_char + 33;
																symbol[4] = fifth_char + 33;
																symbol[5] = sixth_char + 33;
																symbol[6] = seventh_char + 33;
																symbol[7] = eighth_char + 33;
																symbol[8] = ninth_char + 33;
																symbol[9] = tenth_char + 33;
																symbol[10] = eleventh_char + 33;
																symbol[11] = twelfth_char + 33;
																symbol[12] = thirteenth_char + 33;
																symbol[13] = fourteenth_char + 33;
																cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << endl;
																file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << endl;
															}
															fourteenth_char = CycleStart;
														}
														thirteenth_char = CycleStart;
													}
													twelfth_char = CycleStart;
												}
												eleventh_char = CycleStart;
											}
											tenth_char = CycleStart;
										}
										ninth_char = CycleStart;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 15)
	{
		char symbol[15];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart, ninth_char = CycleStart, tenth_char = CycleStart, eleventh_char = CycleStart,
			twelfth_char = CycleStart, thirteenth_char = CycleStart, fourteenth_char = CycleStart, fifteenth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										for (short int NumberOfIterationsControl8 = 0; NumberOfIterationsControl8 < NumberOfIterations; ninth_char++, NumberOfIterationsControl8++)//9
										{
											for (short int NumberOfIterationsControl9 = 0; NumberOfIterationsControl9 < NumberOfIterations; tenth_char++, NumberOfIterationsControl9++)//10
											{
												for (short int NumberOfIterationsControl10 = 0; NumberOfIterationsControl10 < NumberOfIterations; eleventh_char++, NumberOfIterationsControl10++)//11
												{
													for (short int NumberOfIterationsControl11 = 0; NumberOfIterationsControl11 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl11++)//12
													{
														for (short int NumberOfIterationsControl12 = 0; NumberOfIterationsControl12 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl12++)//13
														{
															for (short int NumberOfIterationsControl13 = 0; NumberOfIterationsControl13 < NumberOfIterations; fourteenth_char++, NumberOfIterationsControl13++)//14
															{
																for (short int NumberOfIterationsControl14 = 0; NumberOfIterationsControl14 < NumberOfIterations; fifteenth_char++, NumberOfIterationsControl14++)//15
																{
																	symbol[0] = first_char + 33;
																	symbol[1] = second_char + 33;
																	symbol[2] = third_char + 33;
																	symbol[3] = fourth_char + 33;
																	symbol[4] = fifth_char + 33;
																	symbol[5] = sixth_char + 33;
																	symbol[6] = seventh_char + 33;
																	symbol[7] = eighth_char + 33;
																	symbol[8] = ninth_char + 33;
																	symbol[9] = tenth_char + 33;
																	symbol[10] = eleventh_char + 33;
																	symbol[11] = twelfth_char + 33;
																	symbol[12] = thirteenth_char + 33;
																	symbol[13] = fourteenth_char + 33;
																	symbol[14] = fifteenth_char + 33;
																	cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << symbol[14] << endl;
																	file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << symbol[14] << endl;
																}
																fifteenth_char = CycleStart;
															}
															fourteenth_char = CycleStart;
														}
														thirteenth_char = CycleStart;
													}
													twelfth_char = CycleStart;
												}
												eleventh_char = CycleStart;
											}
											tenth_char = CycleStart;
										}
										ninth_char = CycleStart;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 16)
	{
		char symbol[16];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart, ninth_char = CycleStart, tenth_char = CycleStart, eleventh_char = CycleStart,
			twelfth_char = CycleStart, thirteenth_char = CycleStart, fourteenth_char = CycleStart, fifteenth_char = CycleStart,
			sixteenth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										for (short int NumberOfIterationsControl8 = 0; NumberOfIterationsControl8 < NumberOfIterations; ninth_char++, NumberOfIterationsControl8++)//9
										{
											for (short int NumberOfIterationsControl9 = 0; NumberOfIterationsControl9 < NumberOfIterations; tenth_char++, NumberOfIterationsControl9++)//10
											{
												for (short int NumberOfIterationsControl10 = 0; NumberOfIterationsControl10 < NumberOfIterations; eleventh_char++, NumberOfIterationsControl10++)//11
												{
													for (short int NumberOfIterationsControl11 = 0; NumberOfIterationsControl11 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl11++)//12
													{
														for (short int NumberOfIterationsControl12 = 0; NumberOfIterationsControl12 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl12++)//13
														{
															for (short int NumberOfIterationsControl13 = 0; NumberOfIterationsControl13 < NumberOfIterations; fourteenth_char++, NumberOfIterationsControl13++)//14
															{
																for (short int NumberOfIterationsControl14 = 0; NumberOfIterationsControl14 < NumberOfIterations; fifteenth_char++, NumberOfIterationsControl14++)//15
																{
																	for (short int NumberOfIterationsControl15 = 0; NumberOfIterationsControl15 < NumberOfIterations; sixteenth_char++, NumberOfIterationsControl15++)//16
																	{
																		symbol[0] = first_char + 33;
																		symbol[1] = second_char + 33;
																		symbol[2] = third_char + 33;
																		symbol[3] = fourth_char + 33;
																		symbol[4] = fifth_char + 33;
																		symbol[5] = sixth_char + 33;
																		symbol[6] = seventh_char + 33;
																		symbol[7] = eighth_char + 33;
																		symbol[8] = ninth_char + 33;
																		symbol[9] = tenth_char + 33;
																		symbol[10] = eleventh_char + 33;
																		symbol[11] = twelfth_char + 33;
																		symbol[12] = thirteenth_char + 33;
																		symbol[13] = fourteenth_char + 33;
																		symbol[14] = fifteenth_char + 33;
																		symbol[15] = sixteenth_char + 33;
																		cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << symbol[14] << symbol[15] << endl;
																		file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << symbol[14] << symbol[15] << endl;
																	}
																	sixteenth_char = CycleStart;
																}
																fifteenth_char = CycleStart;
															}
															fourteenth_char = CycleStart;
														}
														thirteenth_char = CycleStart;
													}
													twelfth_char = CycleStart;
												}
												eleventh_char = CycleStart;
											}
											tenth_char = CycleStart;
										}
										ninth_char = CycleStart;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 17)
	{
		char symbol[17];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart, ninth_char = CycleStart, tenth_char = CycleStart, eleventh_char = CycleStart,
			twelfth_char = CycleStart, thirteenth_char = CycleStart, fourteenth_char = CycleStart, fifteenth_char = CycleStart,
			sixteenth_char = CycleStart, seventeenth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										for (short int NumberOfIterationsControl8 = 0; NumberOfIterationsControl8 < NumberOfIterations; ninth_char++, NumberOfIterationsControl8++)//9
										{
											for (short int NumberOfIterationsControl9 = 0; NumberOfIterationsControl9 < NumberOfIterations; tenth_char++, NumberOfIterationsControl9++)//10
											{
												for (short int NumberOfIterationsControl10 = 0; NumberOfIterationsControl10 < NumberOfIterations; eleventh_char++, NumberOfIterationsControl10++)//11
												{
													for (short int NumberOfIterationsControl11 = 0; NumberOfIterationsControl11 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl11++)//12
													{
														for (short int NumberOfIterationsControl12 = 0; NumberOfIterationsControl12 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl12++)//13
														{
															for (short int NumberOfIterationsControl13 = 0; NumberOfIterationsControl13 < NumberOfIterations; fourteenth_char++, NumberOfIterationsControl13++)//14
															{
																for (short int NumberOfIterationsControl14 = 0; NumberOfIterationsControl14 < NumberOfIterations; fifteenth_char++, NumberOfIterationsControl14++)//15
																{
																	for (short int NumberOfIterationsControl15 = 0; NumberOfIterationsControl15 < NumberOfIterations; sixteenth_char++, NumberOfIterationsControl15++)//16
																	{
																		for (short int NumberOfIterationsControl16 = 0; NumberOfIterationsControl16 < NumberOfIterations; seventeenth_char++, NumberOfIterationsControl16++)//17
																		{
																			symbol[0] = first_char + 33;
																			symbol[1] = second_char + 33;
																			symbol[2] = third_char + 33;
																			symbol[3] = fourth_char + 33;
																			symbol[4] = fifth_char + 33;
																			symbol[5] = sixth_char + 33;
																			symbol[6] = seventh_char + 33;
																			symbol[7] = eighth_char + 33;
																			symbol[8] = ninth_char + 33;
																			symbol[9] = tenth_char + 33;
																			symbol[10] = eleventh_char + 33;
																			symbol[11] = twelfth_char + 33;
																			symbol[12] = thirteenth_char + 33;
																			symbol[13] = fourteenth_char + 33;
																			symbol[14] = fifteenth_char + 33;
																			symbol[15] = sixteenth_char + 33;
																			symbol[16] = seventeenth_char + 33;
																			cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << symbol[14] << symbol[15] << symbol[16] << endl;
																			file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << symbol[14] << symbol[15] << symbol[16] << endl;
																		}
																		seventeenth_char = CycleStart;
																	}
																	sixteenth_char = CycleStart;
																}
																fifteenth_char = CycleStart;
															}
															fourteenth_char = CycleStart;
														}
														thirteenth_char = CycleStart;
													}
													twelfth_char = CycleStart;
												}
												eleventh_char = CycleStart;
											}
											tenth_char = CycleStart;
										}
										ninth_char = CycleStart;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 18)
	{
		char symbol[18];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart, ninth_char = 0, tenth_char = CycleStart, eleventh_char = CycleStart,
			twelfth_char = CycleStart, thirteenth_char = CycleStart, fourteenth_char = CycleStart, fifteenth_char = CycleStart,
			sixteenth_char = CycleStart, seventeenth_char = CycleStart, eighteenth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										for (short int NumberOfIterationsControl8 = 0; NumberOfIterationsControl8 < NumberOfIterations; ninth_char++, NumberOfIterationsControl8++)//9
										{
											for (short int NumberOfIterationsControl9 = 0; NumberOfIterationsControl9 < NumberOfIterations; tenth_char++, NumberOfIterationsControl9++)//10
											{
												for (short int NumberOfIterationsControl10 = 0; NumberOfIterationsControl10 < NumberOfIterations; eleventh_char++, NumberOfIterationsControl10++)//11
												{
													for (short int NumberOfIterationsControl11 = 0; NumberOfIterationsControl11 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl11++)//12
													{
														for (short int NumberOfIterationsControl12 = 0; NumberOfIterationsControl12 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl12++)//13
														{
															for (short int NumberOfIterationsControl13 = 0; NumberOfIterationsControl13 < NumberOfIterations; fourteenth_char++, NumberOfIterationsControl13++)//14
															{
																for (short int NumberOfIterationsControl14 = 0; NumberOfIterationsControl14 < NumberOfIterations; fifteenth_char++, NumberOfIterationsControl14++)//15
																{
																	for (short int NumberOfIterationsControl15 = 0; NumberOfIterationsControl15 < NumberOfIterations; sixteenth_char++, NumberOfIterationsControl15++)//16
																	{
																		for (short int NumberOfIterationsControl16 = 0; NumberOfIterationsControl16 < NumberOfIterations; seventeenth_char++, NumberOfIterationsControl16++)//17
																		{
																			for (short int NumberOfIterationsControl17 = 0; NumberOfIterationsControl17 < NumberOfIterations; eighteenth_char++, NumberOfIterationsControl17++)//18
																			{
																				symbol[0] = first_char + 33;
																				symbol[1] = second_char + 33;
																				symbol[2] = third_char + 33;
																				symbol[3] = fourth_char + 33;
																				symbol[4] = fifth_char + 33;
																				symbol[5] = sixth_char + 33;
																				symbol[6] = seventh_char + 33;
																				symbol[7] = eighth_char + 33;
																				symbol[8] = ninth_char + 33;
																				symbol[9] = tenth_char + 33;
																				symbol[10] = eleventh_char + 33;
																				symbol[11] = twelfth_char + 33;
																				symbol[12] = thirteenth_char + 33;
																				symbol[13] = fourteenth_char + 33;
																				symbol[14] = fifteenth_char + 33;
																				symbol[15] = sixteenth_char + 33;
																				symbol[16] = seventeenth_char + 33;
																				symbol[17] = eighteenth_char + 33;
																				cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << symbol[14] << symbol[15] << symbol[16] << symbol[17] << endl;
																				file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << symbol[14] << symbol[15] << symbol[16] << symbol[17] << endl;
																			}
																			eighteenth_char = CycleStart;
																		}
																		seventeenth_char = CycleStart;
																	}
																	sixteenth_char = CycleStart;
																}
																fifteenth_char = CycleStart;
															}
															fourteenth_char = CycleStart;
														}
														thirteenth_char = CycleStart;
													}
													twelfth_char = CycleStart;
												}
												eleventh_char = CycleStart;
											}
											tenth_char = CycleStart;
										}
										ninth_char = CycleStart;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 19)
	{
		char symbol[19];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart, ninth_char = CycleStart, tenth_char = CycleStart, eleventh_char = CycleStart,
			twelfth_char = CycleStart, thirteenth_char = CycleStart, fourteenth_char = CycleStart, fifteenth_char = CycleStart,
			sixteenth_char = CycleStart, seventeenth_char = CycleStart, eighteenth_char = CycleStart,nineteenth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										for (short int NumberOfIterationsControl8 = 0; NumberOfIterationsControl8 < NumberOfIterations; ninth_char++, NumberOfIterationsControl8++)//9
										{
											for (short int NumberOfIterationsControl9 = 0; NumberOfIterationsControl9 < NumberOfIterations; tenth_char++, NumberOfIterationsControl9++)//10
											{
												for (short int NumberOfIterationsControl10 = 0; NumberOfIterationsControl10 < NumberOfIterations; eleventh_char++, NumberOfIterationsControl10++)//11
												{
													for (short int NumberOfIterationsControl11 = 0; NumberOfIterationsControl11 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl11++)//12
													{
														for (short int NumberOfIterationsControl12 = 0; NumberOfIterationsControl12 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl12++)//13
														{
															for (short int NumberOfIterationsControl13 = 0; NumberOfIterationsControl13 < NumberOfIterations; fourteenth_char++, NumberOfIterationsControl13++)//14
															{
																for (short int NumberOfIterationsControl14 = 0; NumberOfIterationsControl14 < NumberOfIterations; fifteenth_char++, NumberOfIterationsControl14++)//15
																{
																	for (short int NumberOfIterationsControl15 = 0; NumberOfIterationsControl15 < NumberOfIterations; sixteenth_char++, NumberOfIterationsControl15++)//16
																	{
																		for (short int NumberOfIterationsControl16 = 0; NumberOfIterationsControl16 < NumberOfIterations; seventeenth_char++, NumberOfIterationsControl16++)//17
																		{
																			for (short int NumberOfIterationsControl17 = 0; NumberOfIterationsControl17 < NumberOfIterations; eighteenth_char++, NumberOfIterationsControl17++)//18
																			{
																				for (short int NumberOfIterationsControl18 = 0; NumberOfIterationsControl18 < NumberOfIterations; nineteenth_char++, NumberOfIterationsControl18++)//19
																				{
																					symbol[0] = first_char + 33;
																					symbol[1] = second_char + 33;
																					symbol[2] = third_char + 33;
																					symbol[3] = fourth_char + 33;
																					symbol[4] = fifth_char + 33;
																					symbol[5] = sixth_char + 33;
																					symbol[6] = seventh_char + 33;
																					symbol[7] = eighth_char + 33;
																					symbol[8] = ninth_char + 33;
																					symbol[9] = tenth_char + 33;
																					symbol[10] = eleventh_char + 33;
																					symbol[11] = twelfth_char + 33;
																					symbol[12] = thirteenth_char + 33;
																					symbol[13] = fourteenth_char + 33;
																					symbol[14] = fifteenth_char + 33;
																					symbol[15] = sixteenth_char + 33;
																					symbol[16] = seventeenth_char + 33;
																					symbol[17] = eighteenth_char + 33;
																					symbol[18] = nineteenth_char + 33;
																					cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << symbol[14] << symbol[15] << symbol[16] << symbol[17] << symbol[18] << endl;
																					file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << symbol[14] << symbol[15] << symbol[16] << symbol[17] << symbol[18] << endl;
																				}
																				nineteenth_char = CycleStart;
																			}
																			eighteenth_char = CycleStart;
																		}
																		seventeenth_char = CycleStart;
																	}
																	sixteenth_char = CycleStart;
																}
																fifteenth_char = CycleStart;
															}
															fourteenth_char = CycleStart;
														}
														thirteenth_char = CycleStart;
													}
													twelfth_char = CycleStart;
												}
												eleventh_char = CycleStart;
											}
											tenth_char = CycleStart;
										}
										ninth_char = CycleStart;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else if (SettingsRAM.NumberOfCombinations == 20)
	{
		char symbol[20];
		short int first_char = CycleStart, second_char = CycleStart, third_char = CycleStart,
			fourth_char = CycleStart, fifth_char = CycleStart, sixth_char = CycleStart, seventh_char = CycleStart,
			eighth_char = CycleStart, ninth_char = CycleStart, tenth_char = CycleStart, eleventh_char = CycleStart,
			twelfth_char = CycleStart, thirteenth_char = CycleStart, fourteenth_char = CycleStart, fifteenth_char = CycleStart,
			sixteenth_char = CycleStart, seventeenth_char = CycleStart, eighteenth_char = CycleStart, nineteenth_char = CycleStart,twentieth_char = CycleStart;
		for (short int NumberOfIterationsControl = 0; NumberOfIterationsControl < NumberOfIterations; first_char++, NumberOfIterationsControl++)//1
		{
			for (short int NumberOfIterationsControl1 = 0; NumberOfIterationsControl1 < NumberOfIterations; second_char++, NumberOfIterationsControl1++)//2
			{
				for (short int NumberOfIterationsControl2 = 0; NumberOfIterationsControl2 < NumberOfIterations; third_char++, NumberOfIterationsControl2++)//3
				{
					for (short int NumberOfIterationsControl3 = 0; NumberOfIterationsControl3 < NumberOfIterations; fourth_char++, NumberOfIterationsControl3++)//4
					{
						for (short int NumberOfIterationsControl4 = 0; NumberOfIterationsControl4 < NumberOfIterations; fifth_char++, NumberOfIterationsControl4++)//5
						{
							for (short int NumberOfIterationsControl5 = 0; NumberOfIterationsControl5 < NumberOfIterations; sixth_char++, NumberOfIterationsControl5++)//6
							{
								for (short int NumberOfIterationsControl6 = 0; NumberOfIterationsControl6 < NumberOfIterations; seventh_char++, NumberOfIterationsControl6++)//7
								{
									for (short int NumberOfIterationsControl7 = 0; NumberOfIterationsControl7 < NumberOfIterations; eighth_char++, NumberOfIterationsControl7++)//8
									{
										for (short int NumberOfIterationsControl8 = 0; NumberOfIterationsControl8 < NumberOfIterations; ninth_char++, NumberOfIterationsControl8++)//9
										{
											for (short int NumberOfIterationsControl9 = 0; NumberOfIterationsControl9 < NumberOfIterations; tenth_char++, NumberOfIterationsControl9++)//10
											{
												for (short int NumberOfIterationsControl10 = 0; NumberOfIterationsControl10 < NumberOfIterations; eleventh_char++, NumberOfIterationsControl10++)//11
												{
													for (short int NumberOfIterationsControl11 = 0; NumberOfIterationsControl11 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl11++)//12
													{
														for (short int NumberOfIterationsControl12 = 0; NumberOfIterationsControl12 < NumberOfIterations; twelfth_char++, NumberOfIterationsControl12++)//13
														{
															for (short int NumberOfIterationsControl13 = 0; NumberOfIterationsControl13 < NumberOfIterations; fourteenth_char++, NumberOfIterationsControl13++)//14
															{
																for (short int NumberOfIterationsControl14 = 0; NumberOfIterationsControl14 < NumberOfIterations; fifteenth_char++, NumberOfIterationsControl14++)//15
																{
																	for (short int NumberOfIterationsControl15 = 0; NumberOfIterationsControl15 < NumberOfIterations; sixteenth_char++, NumberOfIterationsControl15++)//16
																	{
																		for (short int NumberOfIterationsControl16 = 0; NumberOfIterationsControl16 < NumberOfIterations; seventeenth_char++, NumberOfIterationsControl16++)//17
																		{
																			for (short int NumberOfIterationsControl17 = 0; NumberOfIterationsControl17 < NumberOfIterations; eighteenth_char++, NumberOfIterationsControl17++)//18
																			{
																				for (short int NumberOfIterationsControl18 = 0; NumberOfIterationsControl18 < NumberOfIterations; nineteenth_char++, NumberOfIterationsControl18++)//19
																				{
																					for (short int NumberOfIterationsControl19 = 0; NumberOfIterationsControl19 < NumberOfIterations; twentieth_char++, NumberOfIterationsControl19++)//20
																					{
																						symbol[0] = first_char + 33;
																						symbol[1] = second_char + 33;
																						symbol[2] = third_char + 33;
																						symbol[3] = fourth_char + 33;
																						symbol[4] = fifth_char + 33;
																						symbol[5] = sixth_char + 33;
																						symbol[6] = seventh_char + 33;
																						symbol[7] = eighth_char + 33;
																						symbol[8] = ninth_char + 33;
																						symbol[9] = tenth_char + 33;
																						symbol[10] = eleventh_char + 33;
																						symbol[11] = twelfth_char + 33;
																						symbol[12] = thirteenth_char + 33;
																						symbol[13] = fourteenth_char + 33;
																						symbol[14] = fifteenth_char + 33;
																						symbol[15] = sixteenth_char + 33;
																						symbol[16] = seventeenth_char + 33;
																						symbol[17] = eighteenth_char + 33;
																						symbol[18] = nineteenth_char + 33;
																						symbol[19] = twentieth_char + 33;
																						cout << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << symbol[14] << symbol[15] << symbol[16] << symbol[17] << symbol[18] << symbol[19] << endl;
																						file << symbol[0] << symbol[1] << symbol[2] << symbol[3] << symbol[4] << symbol[5] << symbol[6] << symbol[7] << symbol[8] << symbol[9] << symbol[10] << symbol[11] << symbol[12] << symbol[13] << symbol[14] << symbol[15] << symbol[16] << symbol[17] << symbol[18] << symbol[19] << endl;
																					}
																					twentieth_char = CycleStart;
																				}
																				nineteenth_char = CycleStart;
																			}
																			eighteenth_char = CycleStart;
																		}
																		seventeenth_char = CycleStart;
																	}
																	sixteenth_char = CycleStart;
																}
																fifteenth_char = CycleStart;
															}
															fourteenth_char = CycleStart;
														}
														thirteenth_char = CycleStart;
													}
													twelfth_char = CycleStart;
												}
												eleventh_char = CycleStart;
											}
											tenth_char = CycleStart;
										}
										ninth_char = CycleStart;
									}
									eighth_char = CycleStart;
								}
								seventh_char = CycleStart;
							}
							sixth_char = CycleStart;
						}
						fifth_char = CycleStart;
					}
					fourth_char = CycleStart;
				}
				third_char = CycleStart;
			}
			second_char = CycleStart;
		}
	}
	else cout << "ERROR" << endl;
}

void SplitIntoStreams(Settings SettingsRAM)
{
	string name_txt_file;
	if (SettingsRAM.NumberOfThreads >= 1)
	{
		name_txt_file = "1.txt";
		thread one(EnumeratingCharaters, name_txt_file, SettingsRAM, 1);
		if (SettingsRAM.NumberOfThreads >= 2)
		{
			name_txt_file = "2.txt";
			thread two(EnumeratingCharaters, name_txt_file, SettingsRAM, 2);
			if (SettingsRAM.NumberOfThreads >= 3)
			{
				name_txt_file = "3.txt";
				thread three(EnumeratingCharaters, name_txt_file, SettingsRAM, 3);
				if (SettingsRAM.NumberOfThreads >= 4)
				{
					name_txt_file = "4.txt";
					thread four(EnumeratingCharaters, name_txt_file, SettingsRAM, 4);
					if (SettingsRAM.NumberOfThreads >= 5)
					{
						name_txt_file = "5.txt";
						thread five(EnumeratingCharaters, name_txt_file, SettingsRAM, 5);
						if (SettingsRAM.NumberOfThreads >= 6)
						{
							name_txt_file = "6.txt";
							thread six(EnumeratingCharaters, name_txt_file, SettingsRAM, 6);
							if (SettingsRAM.NumberOfThreads >= 7)
							{
								name_txt_file = "7.txt";
								thread seven(EnumeratingCharaters, name_txt_file, SettingsRAM, 7);
								if (SettingsRAM.NumberOfThreads >= 8)
								{
									name_txt_file = "8.txt";
									thread eight(EnumeratingCharaters, name_txt_file, SettingsRAM, 8);
									eight.join();
								}
								seven.join();
							}
							six.join();
						}
						five.join();
					}
					four.join();
				}
				three.join();
			}
			two.join();
		}
		one.join();
	}

}

void EditSettings(Settings& SettingsRAM)
{
	Drawing menu;
	while (true)
	{
		int Chois;
		system("cls");
		menu.DrawSettingsMenu(SettingsRAM);
		cin >> Chois;
		switch (Chois)
		{
		case 0:SplitIntoStreams(SettingsRAM); break;
		case 1:File file; file.SaveSettingsLanguageFile(ChoisLanguage(SettingsRAM)); break;
		case 2:menu.DrawSettingsNumberOfThreads(SettingsRAM);
			cin >> SettingsRAM.NumberOfThreads;
			if (SettingsRAM.NumberOfThreads > 8) SettingsRAM.NumberOfThreads = 8;
			else if (SettingsRAM.NumberOfThreads < 1) SettingsRAM.NumberOfThreads = 1;
			break;
		case 3:menu.DrawSettingsNumberOfCombinations(SettingsRAM);
			cin >> SettingsRAM.NumberOfCombinations;
			if (SettingsRAM.NumberOfCombinations > 20) SettingsRAM.NumberOfCombinations = 20;
			else if (SettingsRAM.NumberOfCombinations < 1) SettingsRAM.NumberOfCombinations = 1;
			break;
		default:break;
		}
	}
}