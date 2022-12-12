#include <iostream>
using namespace std;

int main(void) {

	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;

	for (int j = 1; j <= num; j++) {
		// 공백 입력
		for (int i = num-j; i >0; i--) {
			cout << " "; 
		}

		// 별 입력
		for (int i = 0; i < j; i++) {
			cout << "*";
		}
		
		cout << "\n";
	}

	return 0;


}