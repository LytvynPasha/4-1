#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double S;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	cout << "i = "; cin >> i;
	S = 0;
	k = N;
	while (i <= N)
	{
		S += pow(1, 2) / (pow(k, 2) * pow(N, 2));
		i++;
	}
	cout << S << endl;

		S = 0;
	i = k;
	do {
		S += pow(1, 2) / (pow(k, 2) * pow(N, 2));
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = k; i <= N; i++)
	{
		S += pow(1, 2) / (pow(k, 2) * pow(N, 2));
	}
	cout << S << endl;
	S = 0;
	for (i = k; i <= N; i++)
	{
		S += pow(1, 2) / (pow(k, 2) * pow(N, 2));
	}
	cout << S << endl;
	return 0;
}
