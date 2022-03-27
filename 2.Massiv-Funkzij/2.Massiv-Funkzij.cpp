//2.	Дан двумерный массив размерностью M х M, заполненный случайными числами из диапазона от 0 до 20. Определить сумму элементов, расположенных на главной диагонали, а также сумму элементов, расположенных на побочной диагонали

	#include <iostream>
	#include <Windows.h>
	#include<time.h>
	using namespace std;

	const int Youchu = 5;
	const int Xox = 5;
	int Andr[Youchu][Xox];
	int sum_g = 0;
	int sum_p = 0;
	
	void ShowSumglavnoj_pobochnoi() {
		for (int y = 0; y < Youchu; y++)
		{

			for (int x = 0; x < Xox; x++)
			{
				if (y == x) {
					sum_g += Andr[y][x];

					cout << sum_g << "=summa glavnoj";

				}

			}
			cout << endl;
		}
		for (int y = 0; y < Youchu; y++)
		{
			for (int x = 0; x < Xox; x++)
			{
				if (x == Youchu - y - 1) {
					sum_p += Andr[y][x];
					cout << sum_p << "=summa pobochnoi";

				}

			}
			cout << endl;
		}
		
	}
	


	int main()
	{


		srand(time(0));
		for (int y = 0; y < Youchu; y++)
		{

			for (int x = 0; x < Xox; x++)
			{
				Andr[y][x] = rand() % 20;
				cout << Andr[y][x] << " | ";
			}
			cout << endl;
		}

		ShowSumglavnoj_pobochnoi();
	}
			
