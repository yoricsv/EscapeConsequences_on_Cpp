/*
  *****************************************************************************************
  *                                     It's C++ Code                                     *
  *****************************************************************************************
*/
// INCLUDE CODE BEGIN //
#include <iostream>	
// INCLUDE CODE END //

// NAMESPACE DEFINES BEGIN //
using namespace std;
// NAMESPACE DEFINES END //

// MAIN FUNCTION BEGIN //
int main(void)
//
{
	// CODE/INSTRUCTIONS BEGIN //
/*
  *****************************************************************************************
  *                                ESCAPE CONSEQUENCES                                    *
  *****************************************************************************************
  *                                                                                       *
  * \r - return cursor to line start                                                      *
  * \n (end line) - go to the pointer on next line (analogue [<< endl] )                  *
  * \t (tabulation) - make an indent between symbols                                      *
  * \b - delete last displayed symbol                                                     *
  * \a - sound signal                                                                     *
  *                                                                                       *
  * \\ - displays a back slash                                                            *
  * \" - displays double quotes                                                           *
  * \' - displays single quote                                                            *
  *                                                                                       *
  *****************************************************************************************
*/

    // FORMATTING OUTPUT IN CONSOLE BY ESCAPE CONSEQUENCES BEGIN //
	std::cout	<<	"\n\n ^- This use two escape consequences of\t-\\n (End Line).	";
	cout		<<	"\n\t|\t <- There is use two tabulations divided by line[|].	\n" << endl;

	// SET RIGHT LOCALIZATION BEGIN //
	setlocale(LC_ALL, "Ru-RU");
	// SET RIGHT LOCALIZATION END //

	cout		<<	"\t\t Текст \"В лесу родилась елочка\"	" << endl;
	cout		<<	"\t\t (Автор слов Р.Кудашева)			\n\n";
	cout		<<	"\t\t В лесу родилась елочка,			" << endl;
	cout		<<	"\t\t В лесу она росла,					" << endl;
	cout		<<	"\t\t Зимой и летом стройная,			" << endl;
	cout		<<	"\t\t Зеленая была.						\n" << endl;
	cout		<<	"\t\t Метель ей пела песенку :			" << endl;
	cout		<<	"\t\t \"Спи, елочка, бай-бай!\"			" << endl;
	cout		<<	"\t\t Мороз снежком укутывал :			" << endl;
	cout		<<	"\t\t \"Смотри, не замерзай!\"			\n" << endl;
	std::cout	<<	"\t\t Трусишка - зайка серенький		" << std::endl;
	std::cout	<<	"\t\t Под елочкой скакал,				" << std::endl;
	std::cout	<<	"\t\t Порою волк, сердитый волк,		" << std::endl;
	std::cout	<<	"\t\t Рысцою пробегал.					\n" << std::endl;
	std::cout	<<	"\t\t Чу!Снег по лесу частому			" << std::endl;
	std::cout	<<	"\t\t Под полозом скрипит;				" << std::endl;
	std::cout	<<	"\t\t Лошадка мохноногая				" << std::endl;
	std::cout	<<	"\t\t Торопится, бежит.					\n" << std::endl;
	cout		<<	"\t\t Везет лошадка дровенки,			\n";
	cout		<<	"\t\t А в дровнях - мужичок,			\n";
	cout		<<	"\t\t Срубил он нашу елочку				\n";
	cout		<<	"\t\t Под самый корешок.				\n\n";
	std::cout	<<	"\t\t Теперь она, нарядная,				\n";
	std::cout	<<	"\t\t На праздник к нам пришла			\n";
	std::cout	<<	"\t\t И много, много радостей			\n";
	std::cout	<<	"\t\t Детишкам принесла.				\n";
	// FORMATTING OUTPUT IN CONSOLE BY ESCAPE CONSEQUENCES END //

	// CODE/INSTRUCTIONS END //
}
// MAIN FUNCTION END //