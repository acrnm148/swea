#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	int input;
	vector<long> vec;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> input;
		vec.push_back(input);
	}
	sort(vec.begin(), vec.end());
	cout << vec[N / 2];
}