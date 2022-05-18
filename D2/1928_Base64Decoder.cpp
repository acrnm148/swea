#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char base[64] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 
	'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 
	'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
	'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 
	't', 'u', 'v', 'w', 'x', 'y', 'z','0', '1', '2', '3', '4', 
	'5', '6', '7', '8', '9','+', '/'};

char str[7];

int tonum(string bin8)
{
	int idx = 7;
	int num;
	int tmp;
	while (idx >= 0)
	{
		if (idx == 7)
			num = bin8[idx] - '0';
		else
		{
			tmp = bin8[idx] - '0';
			for (int i = 0; i < 7 - idx; i++)
				tmp *= 2;
			num += tmp;
		}
		idx--;
	}
	return num;
}

void tobinary(int b, int cnt) //8자리의 2진수
{
	if (cnt < 5)
		tobinary(b / 2, cnt + 1);
	str[5 - cnt] = b % 2 + '0';
}

int main()
{
	int T, idx, len;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		string input, binary;
		idx = 0;
		cin >> input;
		len = input.length();
		while (idx < len)
		{
			for (int b = 0; b < 64; b++)
			{
				if (base[b] == input[idx])
				{
					tobinary(b, 0);
					binary += str;
					break;
				}
			}
			idx++;
		}
		idx = 0;
		len = binary.length();
		cout << "#" << test_case << " ";
		while (idx < len)
		{
			char ascii;
			string bin8;
			for (int i = 0; i<8; i++)
				bin8 += binary[idx + i];
			ascii = tonum(bin8);
			cout << ascii;
			idx += 8;
		}
		cout << "\n";
		test_case++;
	}
}