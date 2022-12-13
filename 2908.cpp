#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	// 0~9까지의 아스키 코드 값은 48~57

	ios_base::sync_with_stdio(false);

	string n1, n2;
	cin >> n1>> n2;

	for (int i = 2; i >=0; i--) {
		if (n1[i] < n2[i]) {
			reverse(n2.begin(), n2.end());
			cout << n2;
			break;
		}
		else if (n1[i] > n2[i]) {
			reverse(n1.begin(), n1.end());
			cout << n1;
			break;
		}
	}

	return 0;
}