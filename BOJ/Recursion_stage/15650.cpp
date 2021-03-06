#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void combination(vector<char> comb, int N, int M, int target, int index) {
	if (index == M) {
		for (int i = 0; i < index; i++) {
			cout << comb[i] << " ";
		}
		cout << "\n";
	}
	else if (target == N + 1) {								//M개보다 숫자를 적게 뽑은 경우
		return;
	}
	else {
		comb[index] = target + '0';
		combination(comb, N, M, target + 1, index + 1);		//target을 뽑는 경우
		combination(comb, N, M, target + 1, index);			//target을 뽑지 않는 경우
	}
}

int main() {
	int N, M;
	cin >> N >> M;
	vector<char> comb('0', M);

	combination(comb, N, M, 1, 0);
}
