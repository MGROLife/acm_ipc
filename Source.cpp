#include <iostream>
#include<algorithm>

using namespace std;

int main() {

	int N, M;
	long long Max = 0;
	long long Data[100001];

	cin >> N >> M;

	for (int i = 0; i < N;i++) {
		cin >> Data[i];
		if (Max < Data[i]) Max = Data[i];
	}

	long long L = 0;
	long long R = M * Max;
	long long ans = M * Max;

	while (L <= R) {
		long long Mid = (L + R) / 2;
		long long Time = 0;

		for (int i = 0; i < N;i++) 
			Time += (Mid / Data[i]);
		
		if (Time >= M) {
			R = Mid - 1;
			ans = Mid;
		}
		else {
			L = Mid + 1;
		}
	}

	cout << ans;

	return 0;
}
