#include <iostream>
using namespace std;
typedef long long ll;


ll Quick_pow(ll a, ll b)
{
	ll res = 1;
	while (b)
	{
		if ((b & 1) == 1)
		{
			res *= a;
		}
		a = a * a;
		b >>= 1;
	}
	return res;
}

int main()
{
	cout << Quick_pow(5, 8) << endl;
	system("pause");
}