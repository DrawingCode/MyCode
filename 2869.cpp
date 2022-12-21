#include <iostream>
using namespace std;

int main(void) {
	//어렴풋이 생각한 v-a 목표점이 맞았음...
	// 이렇게 쉬웠다니!!
	// v-a를 목표점이라고 했을때, 이걸 a-b로 나누면 나머지가 0이냐 0이 아니냐로 나뉨
	// 0이면 그냥 +1 해주면 되는데, 0이 아니면 +2
	// 0이 아닐 경우 나머지만큼 올라가는 게 a보다 무조건 작으므로...

	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int  a, b, v;
	cin >> a >> b >> v;

	int cnt = (v-a)/(a-b);
	int mod = (v - a) % (a - b);

	if (mod != 0)
		cnt++;

	cout << cnt+1;
	
	return 0;


}