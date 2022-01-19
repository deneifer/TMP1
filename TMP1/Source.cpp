#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0,n1=0;
	cout << "¬ведите диапазон:" << endl;
	cout << "от ";cin >> n1;
	cout << "до ";cin >> n;cout << endl;
	/*int* m = new int[n];
	for (int i = n1;i < n;i++)
	{
		m[i] = i;
	}*/
	int a=0, b=0, c=0, d=0;

	
		for (int i = n1;i < n&&a<n;i++)
		{
			for (int j = n1;j < n && b < n;j++)
			{
				for (int k = n1;k < n && c < n;k++)
				{
					for (int l =n1;l < n && d < n;l++)
					{
						a = i;
			            b = j;
			            c = k;
			            d = l;
			            if ((pow(a, 3) + pow(b, 3) == pow(c, 3) + pow(d, 3))
					              &&a!= b && a != c && a != d&&
							       b != a && b != c && b != d&&
							       c != b && c != a && c != d&&
							       d != b && d != c && d != a)
			            {
				            cout << a << "^3 + " << b << "^3 = " << c << "^3 + " << d << "^3"<<endl;
			            };

					}
				}
			}
			
		}
	

	//delete[] m;
	system ("PAUSE");
	return 0;
}