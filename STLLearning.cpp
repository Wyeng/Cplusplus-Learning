#include<iostream>
#include<vector>
using namespace std;
int main()
{
	// vector中存储的数据在内存中是连续的  空间一致性很好
	vector<double> joint_position{ 0.0,0.5,1.0,-0.3,0.8,1.2 };
	for (auto& q : joint_position)
	{
		//cout << &q << endl;
	}

	// 初始化vector
	vector<double> q{ 0.1,0.2 };

	// vector的size是可以动态增长的
	cout << q.size() << endl;

	// 插入数据,插入q的尾部
	q.push_back(0.3);
	cout << q.size() << endl;

	// vector的capacity可能比size要大，因为vector需要动态增长
	// vector通常会提前申请一块较大的空间，直到不够才会重新分配
	cout << q.capacity() << endl;
	cout << &q << endl;

	// vector是可以提前预留元素空间的,但是size的大小还是0，capacity的值是预留的大小
	vector<int> v;
	v.reserve(100);
	cout << v.capacity() << endl;

	vector<int> x{ 1,2,3,4,5 };
	x.resize(5);
	for (auto& num : x)
	{
		cout << num;
	}
	return 0;
}