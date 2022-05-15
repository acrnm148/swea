#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
	int test_case = 1;
	int T;
	cin >> T;
	float avg;
	int arr[10];
	while (test_case <= T)
	{
		avg = 0;
		for (int i = 0; i < 10; i++)
		{
			cin >> arr[i];
			avg += arr[i];
		}
		avg = floor((avg / 10) + 0.5);
		cout << "#" << test_case << " " << avg << "\n";
		test_case++;
	}
	return 0;
}