#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2;
	int T, N, cnt;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cnt = 0;
		cin >> N;
		cin >> str1 >> str2;
		for (int i = 0; i < N; i++)
		{
			if (str1[i] == str2[i])
				cnt++;
		}
		cout << "#" << test_case << " " << cnt << "\n";
		test_case++;
	}
}