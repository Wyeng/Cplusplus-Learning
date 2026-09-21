#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

void PrintVec(const std::vector<double> &v);
void STLLearning5()
{
	std::vector<double> q = {0.2, -0.8, 1.5, -2.0, 0.5};
	// 删除所有绝对值大于1.0的数据
	// remove_if并不会真正删除元素，而是将不符合条件的元素移动到容器的前面
	// 并返回一个指向新逻辑结尾的迭代器。然后我们可以使用erase方法来删除这些元素。
	q.erase(std::remove_if(q.begin(), q.end(),
		[](double angle)
		{
			return std::abs(angle) > 1.0;
		}),q.end());
	PrintVec(q);
}