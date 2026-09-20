#include<iostream>
#include<vector>
#include<algorithm>
void STLLearning3()
{
	std::vector<double> vec = { 1.1,2.1,3.1 ,4.1,5.1,6.1};
	// iterator（迭代器）实际就是指向容器中某个元素的位置
	// std::vector<double>::iterator it = vec.begin();
	auto it = vec.begin();
	std::cout << typeid(it).name() << std::endl;
	std::cout << *it << std::endl;
	// 迭代器可以像指针一样进行++、--、+、-等操作,移动的大小是根据容器中元素的类型来决定的
	std::cout << *(++it) << "  " << *(--it) <<"  " << *(it + 2) << std::endl;
	// vec.end()返回的是容器中最后一个元素的下一个位置，不能直接访问
	for (auto iter = vec.begin();iter != vec.end();iter++)
	{
		std::cout << *iter << "  ";
	}
	std::cout << std::endl;
	//max_element()返回容器中最大元素的迭代器 左闭右开
	auto max = *std::max_element(vec.begin(),vec.end());
	std::cout<<"The max element in vec is:" << max <<std::endl;

	//min_element()返回容器中最小元素的迭代器 左闭右开
	auto min = *std::min_element(vec.begin(), vec.end());
	std::cout << "The min element in vec is:" << min << std::endl;

	// find()返回容器中指定元素的迭代器 左闭右开
	// find()只能找到第一个匹配的元素，如果要找到所有匹配的元素，可以使用循环
	auto find = std::find(vec.begin(), vec.end(), 1.1);
	if (find != vec.end())
		std::cout << "found" << "  " << *find << std::endl;
	else
		std::cout << "not found" << std::endl;

	// find()只能找到匹配的元素，find_if()可以根据条件找到第一个匹配的元素
	// 需要借助lambda表达式来实现条件判断
	auto find_if = std::find_if(vec.begin(), vec.end(),
		[](double angle)
		{
			return angle > 3.0;
		});
	if (find_if != vec.end())
		std::cout << *find_if << std::endl;

	// count_if()可以根据条件统计容器中满足条件的元素个数
	int count = std::count_if(vec.begin(), vec.end(),
		[](double angle)
		{
			return angle > 3.0;
		});
	std::cout << "The count of elements greater than 3.0 is: " << count << std::endl;
}