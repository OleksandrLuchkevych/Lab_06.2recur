#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Min, const int Max, int i)
{
	a[i] = Min + rand() % (Max - Min + 1);
	if (i < size - 1)
		Create(a, size, Min, Max, i + 1);

}
void Vyvid(int* a, const int size, int i)
{
	cout << a[i] << " ";
	if (i < size - 1)

		Vyvid(a, size, i + 1);
	else

		return;
}

void Create1(int* a, const int size, int i)
{
	if (i <= size - 1)
	{

		if (i % 2 != 0)
		{
			cout << a[i] << " ";
			Create1(a, size, i + 1);
		}
		else
			Create1(a, size, i + 1);
	}
	else return;
}

int Sum(int* a, const int size, int i, int& suma)
{

	if (i % 2 != 0)
		suma += a[i];
	if (i < size-1)
		return Sum(a, size, i + 1, suma);
	else
		return suma;

}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Min = -50;
	int Max = 50;
	int suma = 0;

	Create(a, n, Min, Max, 0);
	cout << endl;
	Vyvid(a, n, 0);
	cout << endl;
	Create1(a, n, 0);
	cout << endl;

	
	cout << "S = " << Sum(a, n, 0, suma) << endl;
}