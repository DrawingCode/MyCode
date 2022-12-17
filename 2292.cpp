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
	최소 개수 = m
	m=1인 칸: 1개(1)
	m=2인 칸: 6개(2~7)
	m=3인 칸: 12개(8~19)
	...
	m=i인 칸: 6*(i-1)개(2+(i-2)*6 ~ 1부터6n까지의 합)

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