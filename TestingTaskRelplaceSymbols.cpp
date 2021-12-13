#include <vector>
#include <iostream>

// Найти повторяющиеся символы
int getRepeatCount(std::string search, char symbol) {
	int count = 0;
	for (int i = 0; i < search.length(); i++) {
		if (search[i] == symbol) {
			count++;
		}
	}
	return count;
}

// Получить строку с заменными символами
std::string parce(std::string search) {
	std::string item;

	// LowerCase
	for (int i = 0; i < search.length(); i++) {
		search[i] = tolower(search[i]);
	}

	// Replace
	for (int i = 0; i < search.length(); i++) {
		item += getRepeatCount(search, search[i]) == 1 ? '(' : ')';
	}
	return item;
}
// Вывести строку в консоль
void print(std::string item) {
	std::cout << "string: " << item << ": " << parce(item) << std::endl;
}

int main()
{
	std::setlocale(0, "");
	print("din");
	print("recede");
	print("Success");
	print("(( @");
	print("It my work!!");
	print("Русские символы");
	print("Цель - конвертировать исходную строку");
	print("Unreal Engine 4.26");
}
