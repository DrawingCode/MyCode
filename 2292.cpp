#include <iostream>

using namespace std;


int main(void) {
	/*int N;
	cin >> N;
	int n1 = 2;
	int n2 = 7;
	if (N == 1) {
		cout << 1;
		return 0;
	}
	for (int i = 0; ; i++) {
		if ((n1 <= N) && (N <= n2)) {
			cout << i + 2;
			return 0;
		}
		n1 += 6 * (i+1);
		n2 = n1 + 6*(i+1) + 5;
		
	}
	*/

	/*
	�ּ� ���� = m
	m=1�� ĭ: 1��(1)
	m=2�� ĭ: 6��(2~7)
	m=3�� ĭ: 12��(8~19)
	...
	m=i�� ĭ: 6*(i-1)��(2+(i-2)*6 ~ 1����6n������ ��)

	---------------------------------------------------*/
	int N;
	cin>> N;


	if(N==1){
	   cout<< 1;
	   return 0;
	}

	int sum=2;
	int i=0;

	for(int sum =2; sum<=N ; i++){
		sum += 6*i;	
	}

	cout<<i;
	return 0;



}