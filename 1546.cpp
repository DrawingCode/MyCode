#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {

	// 1. �� ���� �� �ִ� ã��
	// 2. ��� ���� ������ �������� �������� ��ġ��(���ؾ� ���� �����ϴ�!!)
	// 3. ��ģ �������� ��� ���ϱ�


	//float�� �������� 10^-6, double 10^-15 ���� ����


	int n;
	cin >> n;
	int* test = new int[n]; // ������ ����: new ���𿡼� �迭 �ε����� integral Ȥ�� enumrate type
	int max = 0;
	double sum = 0;

	//���� ���� �� �ִ� ã��
	for (int i = 0; i < n; i++) {
		cin >> test[i];
		if (max < test[i])
			max = test[i];
	}
	// sort�� �������ָ� �ִ��� ���� �ڿ� ��ġ��
	sort(test, test + n);


	//���� ��ģ �� ���ϱ�
	for (int i = 0; i < n; i++) 
		sum += (double)test[i] / max * 100;
	

	cout << sum / n;

	
	/*
	 ���ͳݿ��� �� Ǯ��:
	�迭 ������� �ʾƵ�, ���� ���� �� �Ѳ����� �����൵ ��

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