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

	cout		<<	"\t\t ����� \"� ���� �������� ������\"	" << endl;
	cout		<<	"\t\t (����� ���� �.��������)			\n\n";
	cout		<<	"\t\t � ���� �������� ������,			" << endl;
	cout		<<	"\t\t � ���� ��� �����,					" << endl;
	cout		<<	"\t\t ����� � ����� ��������,			" << endl;
	cout		<<	"\t\t ������� ����.						\n" << endl;
	cout		<<	"\t\t ������ �� ���� ������� :			" << endl;
	cout		<<	"\t\t \"���, ������, ���-���!\"			" << endl;
	cout		<<	"\t\t ����� ������� �������� :			" << endl;
	cout		<<	"\t\t \"������, �� ��������!\"			\n" << endl;
	std::cout	<<	"\t\t �������� - ����� ���������		" << std::endl;
	std::cout	<<	"\t\t ��� ������� ������,				" << std::endl;
	std::cout	<<	"\t\t ����� ����, �������� ����,		" << std::endl;
	std::cout	<<	"\t\t ������ ��������.					\n" << std::endl;
	std::cout	<<	"\t\t ��!���� �� ���� �������			" << std::endl;
	std::cout	<<	"\t\t ��� ������� �������;				" << std::endl;
	std::cout	<<	"\t\t ������� ����������				" << std::endl;
	std::cout	<<	"\t\t ���������, �����.					\n" << std::endl;
	cout		<<	"\t\t ����� ������� ��������,			\n";
	cout		<<	"\t\t � � ������� - �������,			\n";
	cout		<<	"\t\t ������ �� ���� ������				\n";
	cout		<<	"\t\t ��� ����� �������.				\n\n";
	std::cout	<<	"\t\t ������ ���, ��������,				\n";
	std::cout	<<	"\t\t �� �������� � ��� ������			\n";
	std::cout	<<	"\t\t � �����, ����� ��������			\n";
	std::cout	<<	"\t\t �������� ��������.				\n";
	// FORMATTING OUTPUT IN CONSOLE BY ESCAPE CONSEQUENCES END //

	// CODE/INSTRUCTIONS END //
}
// MAIN FUNCTION END //