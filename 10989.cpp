#include <iostream>
using namespace std;


/*
분명 맞는데 계속 틀리길래 질문게시판 봤더니
arr이 short형 배열이어서 그랬다...
똑같은 수가 계속 들어오면 short형 범위를 넘어버리기 때문...
존나 허무하네.
배열이 10000이냐 10001이냐 for이냐 while이냐는 상관 없는 것
근데 while이 더 오래 걸리는 듯

*/

int arr[10001];
int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);


	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		int num;
		cin >> num;
		arr[num]++;
	}

	for (int i = 1; i <= 10000; i++) {
		while(arr[i]!=0){
			cout << i << '\n';
			arr[i]--;
		}
	}

	return 0;

}