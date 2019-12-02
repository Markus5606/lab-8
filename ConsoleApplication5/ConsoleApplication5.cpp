#include<TCHAR.H>
#include"iostream"
#include"windows.h"
#include"math.h"

using namespace std;

int main()
{
	double A, x, z, y;

	printf("input X: ");
	scanf_s("%lf", &x);
	printf("input Y: ");
	scanf_s("%lf", &y);
	printf("input Z: ");
	scanf_s("%lf", &z);

	A = x + y * z;
	printf("%lf\n", A);
		system("pause");

	return 0;
}