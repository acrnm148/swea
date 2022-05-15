#include <iostream>

using namespace std;

int main()
{
	int P;
	int K = 100;

	cin >> P >> K;
	cout << abs(P - K) + 1;
}