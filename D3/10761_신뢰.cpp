#include <iostream>
#include <cstring>
using namespace std;

int O_loc[101];
int O_btn[101];
int B_loc[101];
int B_btn[101];
int sec, O_now, B_now, state, O_next, B_next;

void init()
{
	memset(O_loc, 0, sizeof(O_loc));
	memset(O_btn, 0, sizeof(O_btn));
	memset(B_loc, 0, sizeof(B_loc));
	memset(B_btn, 0, sizeof(B_btn));
	O_loc[1] = 1;
	B_loc[1] = 1;
	sec = 1;
	O_now = 1;
	B_now = 1;
	O_next = 0;
	B_next = 0;
	state = 0;
}

int main()
{
	int N, T, num, idx;
	char ch;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		init();
		cin >> N;
		for (int i = 1; i <= N; i++)
		{
			cin >> ch >> num;
			if (ch == 'B')
				B_btn[i] = num;
			else if (ch == 'O')
				O_btn[i] = num;
		}
		idx = 1;
		while (idx <= N)
		{
			state = 0;
			if (O_loc[O_now] == 1 && O_now == O_btn[idx]) //버튼 누름
			{
				O_btn[idx] = 0;
				idx++;
				state = 1;
			}
			else
			{
				if (state == 0)
				{
					if (idx + 1 <= N)
					{
						i = idx + 1;
						while (i <= N && O_btn[i] == 0)
							i++;
						O_next = O_btn[i];
						if (O_next > O_btn[idx])
							O_now++;
						else if (O_next < O_btn[idx])
							O_now--;
						O_loc[O_now] = 1;
					}
					state = 1;
					if (B_loc[B_now] == 1 && B_now != B_btn[idx + 1])
					{
						B_loc[B_now] = 0;
						B_now++;
						B_loc[B_now] = 1;
					}
					state = 1;
				}
			}
			if (state == 0)
			{
				if (B_loc[B_now] == 1 && B_now == B_btn[idx])
					B_btn[idx] = 0;
				else
				{

					B_loc[B_now] = 0;
					B_now++;
					B_loc[B_now] = 1;
					if (O_loc[O_now] == 1 && O_now != O_btn[idx + 1])
					{
						O_loc[O_now] = 0;
						O_now++;
						O_loc[O_now] = 1;
					}
					state = 1;
				}
			}
			sec++;
		}
		cout << "#" << test_case << " " << sec - 1 << "\n";
		test_case++;
	}
}