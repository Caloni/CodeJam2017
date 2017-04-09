#include <iostream>

using namespace std;

typedef unsigned long long Number;

void GetMinMax(Number N, Number K, Number &maxLR, Number &minLR)
{
	if (N == K)
		maxLR = minLR = 0;
	else if (K == 1)
	{
		maxLR = N / 2;
		if (N % 2)
			minLR = N / 2;
		else
			minLR = N / 2 - 1;
	}
	else
	{
		Number lastOne = N / K + N % K;
		GetMinMax(lastOne, 1, maxLR, minLR);
	}
}

int main()
{
	Number T = 0;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		Number N = 0;
		Number K = 0;
		cin >> N >> K;
		Number maxLR = 0;
		Number minLR = 0;
		GetMinMax(N, K, maxLR, minLR);
		cout << "Case #" << (i + 1) << ": " << maxLR << " " << minLR << endl;
	}
}
