#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int T, len_num, len_sq, state, cnt;
	double num1, num2;
	int sq;
	string s_num, s_sq;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cnt = 0;
		s_num = "";
		s_sq = "";
		cin >> num1 >> num2;
		for (int num = num1; num <= num2; num++)
		{
			state = 0;
			sq = (int)sqrt(num);
			if (sqrt(num) == sq)
			{
				s_num = to_string(num);
				s_sq = to_string(sq);
				len_num = s_num.length();
				len_sq = s_sq.length();
				//cout << "test " << s_num << " " << s_sq << "\n";
				for (int i = 0; i * i < len_num; i++)
				{
					if (s_num[i] != s_num[len_num - i - 1])
					{
						state = 1;
						break;
					}
				}
				if (state == 0)
				{
					for (int i = 0; i * i < len_sq; i++)
					{
						if (s_sq[i] != s_sq[len_sq - i - 1])
						{
							state = 1;
							break;
						}
					}
				}
				if (state == 0)
					cnt++;
			}
		}
		cout << "#" << test_case << " " << cnt << "\n";
		test_case++;
	}
}