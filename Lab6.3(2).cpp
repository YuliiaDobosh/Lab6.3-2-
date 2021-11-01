#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int*a , const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
int Min(int* a, const int size, int min, int i)
{
	if (a[i] < min && a[i] % 2 != 0)
		min = a[i];
	if (i < size - 1)
		return Min(a, size, min, i + 1);
	else
		return min;
}
int main()
{
	srand((unsigned)time(NULL)); 
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];
	int Low;
	cout << "Low= "; cin >> Low;
	int High;
	cout << "High = "; cin >> High;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	int min=High+1; 
	cout << "min = " << Min(a, n, min, 0) << endl;
	delete[]a;
	return 0;
}
