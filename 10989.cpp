#include <iostream>
using namespace std;


/*
�и� �´µ� ��� Ʋ���淡 �����Խ��� �ô���
arr�� short�� �迭�̾ �׷���...
�Ȱ��� ���� ��� ������ short�� ������ �Ѿ������ ����...
���� �㹫�ϳ�.
�迭�� 10000�̳� 10001�̳� for�̳� while�̳Ĵ� ��� ���� ��
�ٵ� while�� �� ���� �ɸ��� ��

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