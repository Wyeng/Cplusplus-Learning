#include<iostream>
#include<vector>
using namespace std;
void Day2Learning()
{
	vector<int> vec;
	cout << vec.size() << endl;
	// resize是直接创建元素，但是元素会被初始化为0
	vec.resize(3);
	//for (auto& num : vec)
	//{
	//	cout << num << endl;
	//}
	//cout << vec.size() << endl;

	//这样不会对vec中的元素进行修改，因为num只是一个copy的临时变量，对他修改并不会造成实际值的变化
	//for (int num : vec)
	//{
	//	num += 1;
	//}

	//这才对vec中的元素进行了修改
	//for (int& num : vec)
	//{
	//	num += 1;
	//}

	// 只对数据进行读取使用const来限定
	//for (const int& num : vec)
	//{
	//	cout << num << endl;
	//}


}