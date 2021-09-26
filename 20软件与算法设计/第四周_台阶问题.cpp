//递归
#include <iostream>
using namespace std;
 
int stair(int a) {
	if (a==1)
	{
		return 1;
	}
	if (a==2)
	{
		return 2;
	}
	return (stair(a - 1) + stair(a - 2));
}
int main() {
	int n;
	cout << "请输入教学楼的台阶数：" << endl;
	cin >> n;
	cout << "有" << stair(n) << "种走法。" << endl;

	return 0;
}



//递推
#include <iostream>
using namespace std;

int jumpFloor(int n) {
	size_t n1 = 0, n2 = 1;
	

	for (size_t i = 0; i < n; i++)
	{
		size_t n3 = n1;
		n1 = n2;
		n2 += n3;
	}
	return n2;
}

int main() {
	int n;
	cin >> n;
	cout << jumpFloor(n) << endl;
	
	return 0;
 }
