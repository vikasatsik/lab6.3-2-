// lab6.3(2).cpp 
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів
// Сацик Вікторії
//17 варіант



#include <iostream>
using namespace std;
void Input(int* a, const int size, int i)
{
	cout << "a[" << i << "] = ";
	cin >> a[i];
	if (i < size - 1)
		Input(a, size, i + 1);
	else
		cout << endl;
}
int main()
{
	const int n = 5;
	int a[n];
	Input(a, n, 0);
	return 0;
}
