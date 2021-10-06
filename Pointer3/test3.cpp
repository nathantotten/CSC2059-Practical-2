#include <iostream>

using namespace std;

void mul_div(double* pfirst, double* psecond)
{
	double temp = *pfirst * *psecond;
	*psecond = *pfirst / *psecond;
	*pfirst = temp;
	cout << *pfirst << endl;
	cout << *psecond << endl;
}

int main()
{
	double val1 = 2.0;
	double val2 = 3.0;

	double* x = &val1;
	double* y = &val2;

	mul_div(x, y);

	return 0;
}