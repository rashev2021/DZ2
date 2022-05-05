#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\t ЗАДАНИЕ 1\n";
	cout << "Вычислить значение сопротивления R0 \n\n";

   float R1, R2, R3;

   cout << "Введите сопротивление первого резистора: ";
   cin >> R1;
   cout << "Введите сопротивление второго резистора: ";
   cin >> R2;
   cout << "Введите сопротивление третьего резистора: ";
   cin >> R3;
   float R0 = 1 / R1 + 1 / R2 + 1 / R3;
   cout << "\n Ответ: ";
   cout << "R0 = " << R0 << "\n\n\n";


   cout << "\t ЗАДАНИЕ 2\n";
   cout << "Найти площадь круга \n\n";

   float pi = 3.14;
   float S, L, R;

   cout << "Введите длину окружности: ";
   cin >> L;
   R = L / (2 * pi);
   S = pi * R * R;
   cout << "Ответ: S = " << S << "\n\n";

   cout << "\t ЗАДАНИЕ 3\n";
   cout << "Вычислить пройденное расстояние \n\n";

   float V, T, A;

   cout << "Введите скорость V: ";
   cin >> V;
   cout << "Введите время T: ";
   cin >> T;
   cout << "Введите ускорение A: ";
   cin >> A;
   S = V * T + (A * T * T) / 2;
   cout << "Ответ: S = " << S << "\n";
}

