#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {

	// 1. 본 과목 중 최댓값 찾기
	// 2. 모든 과목 점수를 세준이의 공식으로 고치기(세준아 왤케 복잡하니!!)
	// 3. 고친 성적으로 평균 구하기


	//float는 오차범위 10^-6, double 10^-15 정도 내외


	int n;
	cin >> n;
	int* test = new int[n]; // 컴파일 에러: new 선언에서 배열 인덱스는 integral 혹은 enumrate type
	int max = 0;
	double sum = 0;

	//점수 저장 및 최댓값 찾기
	for (int i = 0; i < n; i++) {
		cin >> test[i];
		if (max < test[i])
			max = test[i];
	}
	// sort로 정렬해주면 최댓값이 가장 뒤에 위치함
	sort(test, test + n);


	//점수 고친 거 더하기
	for (int i = 0; i < n; i++) 
		sum += (double)test[i] / max * 100;
	

	cout << sum / n;

	
	/*
	 인터넷에서 본 풀이:
	배열 사용하지 않아도, 합을 구한 후 한꺼번에 나눠줘도 됨

	double sum=0;
	int m=-1;
	for(int i=0; i<n; i++){
		double score;
		cin>>score;
		sum+= score;
		if(m<score)
			m=score;
	}

	cout << ((sum / m) * 100) / n;


*/
	



	return 0;
}