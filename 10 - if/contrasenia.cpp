#include <iostream>
using namespace std;

void main() {
	char contra[10] = "";

	cout << "Intrudoce tu contraseña: ";

	cin >> contra;

	bool mayus = false;
	bool minus = false;
	bool num = false;

	if (contra[0] >= 65 && contra[0] <= 90) // Es mayúscula
	{
		mayus = true;
	}
	if (contra[0] >= 97 && contra[0] <= 122) // Es mayúscula
	{
		minus = true;
	}
	if (contra[0] >= 48 && contra[0] <= 57) // Es mayúscula
	{
		num = true;
	}

	if (contra[1] >= 65 && contra[1] <= 90) // Es mayúscula
	{
		mayus = true;
	}
	if (contra[1] >= 97 && contra[1] <= 122) // Es mayúscula
	{
		minus = true;
	}
	if (contra[1] >= 48 && contra[1] <= 57) // Es mayúscula
	{
		num = true;
	}

	if (contra[2] >= 65 && contra[2] <= 90) // Es mayúscula
	{
		mayus = true;
	}
	if (contra[2] >= 97 && contra[2] <= 122) // Es mayúscula
	{
		minus = true;
	}
	if (contra[2] >= 48 && contra[2] <= 57) // Es mayúscula
	{
		num = true;
	}

	if (contra[3] >= 65 && contra[3] <= 90) // Es mayúscula
	{
		mayus = true;
	}
	if (contra[3] >= 97 && contra[3] <= 122) // Es mayúscula
	{
		minus = true;
	}
	if (contra[3] >= 48 && contra[3] <= 57) // Es mayúscula
	{
		num = true;
	}

	if (contra[4] >= 65 && contra[4] <= 90) // Es mayúscula
	{
		mayus = true;
	}
	if (contra[4] >= 97 && contra[4] <= 122) // Es mayúscula
	{
		minus = true;
	}
	if (contra[4] >= 48 && contra[4] <= 57) // Es mayúscula
	{
		num = true;
	}

	if (contra[5] >= 65 && contra[5] <= 90) // Es mayúscula
	{
		mayus = true;
	}
	if (contra[5] >= 97 && contra[5] <= 122) // Es mayúscula
	{
		minus = true;
	}
	if (contra[5] >= 48 && contra[5] <= 57) // Es mayúscula
	{
		num = true;
	}

	if (contra[6] >= 65 && contra[6] <= 90) // Es mayúscula
	{
		mayus = true;
	}
	if (contra[6] >= 97 && contra[6] <= 122) // Es mayúscula
	{
		minus = true;
	}
	if (contra[6] >= 48 && contra[6] <= 57) // Es mayúscula
	{
		num = true;
	}

	if (contra[7] >= 65 && contra[7] <= 90) // Es mayúscula
	{
		mayus = true;
	}
	if (contra[7] >= 97 && contra[7] <= 122) // Es mayúscula
	{
		minus = true;
	}
	if (contra[7] >= 48 && contra[7] <= 57) // Es mayúscula
	{
		num = true;
	}

	if (contra[8] >= 65 && contra[8] <= 90) // Es mayúscula
	{
		mayus = true;
	}
	if (contra[8] >= 97 && contra[8] <= 122) // Es mayúscula
	{
		minus = true;
	}
	if (contra[8] >= 48 && contra[8] <= 57) // Es mayúscula
	{
		num = true;
	}

	if (contra[9] >= 65 && contra[9] <= 90) // Es mayúscula
	{
		mayus = true;
	}
	if (contra[9] >= 97 && contra[9] <= 122) // Es mayúscula
	{
		minus = true;
	}
	if (contra[9] >= 48 && contra[9] <= 57) // Es mayúscula
	{
		num = true;
	}

	if (mayus && minus && num)
	{
		cout << "Felicidades, tu contraseña es correcta :)" << endl;
	}
	else {
		cout << "Tsss, te equivocastesss" << endl;
	}

	system("pause");
}
