#include<iostream>
#include<vector>
#include<algorithm>
void STLLearning4()
{
	// sort函数默认是将容器中的内容按照从小到大进行排序，会直接修改容器的内容
	std::vector<int> q = { 2,5,3,7,3,1 };
	std::sort(q.begin(), q.end());
	for (const auto& tmp : q)
		std::cout << tmp << "  ";
	std::cout << std::endl;

	// 如果想要sort函数按照从大到小排序的话，需要加第三个参数
	std::sort(q.begin(), q.end(),
		[](int a, int b)
		{
			return a>b;
		});
	for (const auto& tmp : q)
		std::cout << tmp << "  ";
	std::cout << std::endl;
}