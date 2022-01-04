#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	unsigned long n;
	cout << "\nEnter number:";
	cin >> n;
	for (int i = 0; i < 200; i++)
	{
		cout << setw(5) << i * n << " ";

		if (i % 10 == 0)
		{
			cout << endl;
		}
	}


	system("pause");
	return 0;
}