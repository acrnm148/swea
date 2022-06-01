#include <iostream>

using namespace std;

int main()
{
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		double L;
		int D, N;
		int total_D = 0;
		cin >> D >> L >> N;
		for(int i = 0; i< N; i++)
			total_D += D + (i * (L / 100) * D);
		cout << "#" << test_case << " " << total_D << "\n";
		test_case++;
	}
	
}