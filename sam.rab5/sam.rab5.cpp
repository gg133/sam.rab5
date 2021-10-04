#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Переводчик\n\n1.Русские слова\n2.Английские слова\n\n3.Выйти\n";
	int tLanguage; cin >> tLanguage;
	int rWords;
	int eWords;
	switch (tLanguage)
	{
	case 1:
		cout << "Переводчик \"Список русских слов\"\n\n1.Привет\n2.Пожалуйста\n3.Извини\n4.Выбрать пуджа\n5.Мужчина\n6.Женщина\n7.Водитель\n8.Кошка\n9.Собака\n10.Лиса\n11.Дом\n12.Дорога\n13.Магазин\n14.Город\n15.Кафе\n\nВыберете номер слова: ";
			cin >> rWords;
			switch (rWords)
			{
			case 1:
				cout << "Перевод: Првиет -> Hello";
			break;
			case 2:
				cout << "Перевод: Пожалуйста -> Please";
				break;
			case 3:
				cout << "Перевод: Извини -> Sorry";
				break;
			case 4:
				cout << "Перевод: Выбрать пуджа -> Choose pudge";
				break;
			case 5:
				cout << "Перевод: Мужчина -> Man";
				break;
			case 6:
				cout << "Перевод: Женщина -> Woman";
				break;
			case 7:
				cout << "Перевод: Водитель -> Driver";
				break;
			case 8:
				cout << "Перевод: Кошка -> Cat";
				break;
			case 9:
				cout << "Перевод: Собака -> Dog";
				break;
			case 10:
				cout << "Перевод: Лиса -> Fox";
				break;
			case 11:
				cout << "Перевод: Дом -> House";
				break;
			case 12:
				cout << "Перевод: Дорога -> Road";
				break;
			case 13:
				cout << "Перевод: Магазин -> Shop";
				break;
			case 14:
				cout << "Перевод: Город -> City";
				break;
			case 15:
				cout << "Перевод: Кафе -> Cafe";
				break;
			default:
				cout << "Такого слова в переводчике нет\n";
				break;
			}
			break;
	case 2:
		cout << "Переводчик \"Список английских слов\"\n\n1.Hello\n2.Please\n3.Sorry\n4.Choose pudge\n5.Man\n6.Woman\n7.Driver\n8.Cat\n9.Dog\n10.Fox\n11.House\n12.Road\n13.Shop\n14.City\n15.Cafe\n\nВыберете номер слова: ";
		cin >> eWords;
		switch (eWords)
		{
		case 1:
			cout << "Перевод: Hello -> Првиет";
			break;
		case 2:
			cout << "Перевод: Please -> Пожалуйста";
			break;
		case 3:
			cout << "Перевод: Sorry -> Извини";
			break;
		case 4:
			cout << "Перевод: Choose pudge -> Выбрать пуджа";
			break;
		case 5:
			cout << "Перевод: Man -> Мужчина";
			break;			  
		case 6:				  
			cout << "Перевод: Woman -> Женщина";
			break;			  
		case 7:				  
			cout << "Перевод:  Driver -> Водитель";
			break;			  
		case 8:
			cout << "Перевод: Cat -> Кошка";
			break;
		case 9:
			cout << "Перевод: Dog -> Собака";
			break;
		case 10:
			cout << "Перевод: Fox -> Лиса";
			break;
		case 11:
			cout << "Перевод: House -> Дом";
			break;
		case 12:
			cout << "Перевод: Road -> Дорога";
			break;
		case 13:
			cout << "Перевод: Shop ->  Магазин";
			break;
		case 14:
			cout << "Перевод: City -> Город";
			break;
		case 15:
			cout << "Перевод: Cafe -> Кафе";
			break;
		default:
			cout << "Такого слова в переводчике нет\n";
			break;
		}
		break;
	case 3:
		system("cls");
		cout << "Вы вышли из переводчика";
		break;
	default:
		cout << "Такого варианта меню нет";
		break;
	}
	//int _; cin >> _;
	return 0;
   
}