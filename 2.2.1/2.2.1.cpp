#include <iostream>
#include <string>
enum class months {
	Jan=1,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	Jul,
	Aug,
	Sen,
	Oct,
	Nov,
	Dec
};
int main() {
	setlocale(LC_ALL, "Russian");
int m;
std::string s;
do {
std::cout << "Введите номер месяца : ";
std::cin >> m;
months n = static_cast <months>(m);
	switch(n) {
		case months::Jan:{ s = "Январь"; break; }
		case months::Feb:{ s = "Февраль"; break; }
		case months::Mar: { s = "Март"; break; }
		case months::Apr: { s = "Апрель"; break; }
		case months::May: { s = "Май"; break; }
		case months::Jun: { s = "Июнь"; break; }
		case months::Jul: { s = "Июль"; break; }
		case months::Aug: { s = "Август"; break; }
		case months::Sen: { s = "Сентябрь"; break; }
		case months::Oct: { s = "Октябрь"; break; }
		case months::Nov: { s = "Ноябрь"; break; }
		case months::Dec: { s = "Декабрь"; break; }
		default: { 
			if (m == 0) { s = "До свидания"; break;}
			s = "Неправильный номер!"; break; }
	}
		std::cout << s << std::endl;
} while (m != 0);
}

	/*Введите номер месяца : 1
	Январь
	Введите номер месяца : 7
	Июль
	Введите номер месяца : 13
	Неправильный номер!
	Введите номер месяца : 0
	До свидания*/