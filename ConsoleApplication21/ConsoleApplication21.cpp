

#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int min = -20;
	int max = 20;
	int mas[10];
	cout << "TAP-1:" << endl;
	for (int j = 0; j < 10; j++)
	{
		int random = min + rand() % (max - min + 1);
		mas[j] = random;
	}
	for (int j = 0; j < 10; j++)
	{
		cout << mas[j] << " ";

	}
	cout << endl;
	for (int j = 0; j < 10; j++)
	{
		if (mas[j] < 0)
		{
			mas[j] = -mas[j];
		}
	}
	for (int j = 0; j < 10; j++)
	{
		cout << mas[j] << " ";

	}
	cout << endl << endl;
	cout << "TAP-2:" << endl;
	min = 40;
	max = 100;
	char mas1[10];
	for (int j = 0; j < 10; j++)
	{
		int random = min + rand() % (max - min + 1);
		mas1[j] = (char)random;
	}
	for (int j = 0; j < 10; j++)
	{
		cout << mas1[j] << " ";

	}
	cout << endl;
	for (int j = 0; j < 10; j++)
	{
		if ((int)mas1[j] < 58 && (int)mas1[j]>46)
		{
			mas1[j] += 17;
		}

	}
	for (int j = 0;j < 10; j++)
	{
		cout << mas1[j] << " ";

	}



	cout << endl << endl;
	cout << "TAP-3:" << endl;
	min = 0;
	max = 100;
	int mas2[10];
	int eorta = 0;
	for (int i = 0; i < 10; i++)
	{
		int random = min + rand() % (max - min + 1);
		mas2[i] = random;
		eorta += random;
	}
	eorta /= 10;
	for (int i = 0; i < 10; i++)
	{
		cout << mas2[i] << " ";

	}
	int y = mas2[0];
	for (int i = 1; i < 10; i++)
	{
		if (eorta < mas2[i] && eorta < y)
		{
			if (mas2[i] - eorta < y - eorta)
			{
				y = mas2[i];
			}
		}
		else if (eorta > mas2[i] && eorta < y)
		{
			if (eorta - mas2[i] < y - eorta)
			{
				y= mas2[i];
			}
		}
		else if (eorta > mas2[i] && eorta > y)
		{
			if (eorta - mas2[i] < eorta - y)
			{
				y= mas2[i];
			}
		}
		else if (eorta < mas2[i] && eorta > y)
		{
			if (mas2[i] - eorta < eorta - y)
			{
				y = mas2[i];
			}
		}

	}
	cout << endl << "Ededi orta:" << eorta;
	cout << endl << "En yaxin element:" << y << endl << endl;



	cout << endl << endl;
