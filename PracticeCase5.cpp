#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

void PrintVec(const std::vector<double>& v);

void PracticeCase5()
{
	// 数据的安全范围为[-1.0, 1.0]
	double lower_limit = -1.0;
	double upper_limit = 1.0;
	std::vector<double> q = {0.2, -0.8, 1.5, -2.0, 0.5, 1.8};
	std::cout << "The size of the vector is: " << q.size() << std::endl;

	// task1：按照安全范围的约束，找到新的逻辑结尾
	auto new_end = std::remove_if(q.begin(), q.end(),
		[lower_limit,upper_limit](double angle)
		{
			return angle < lower_limit || angle>upper_limit;
		});
	std::cout << "The size of the vector after remove_if is: " << q.size() << std::endl;

	// task2：删除不符合条件的元素
	q.erase(new_end, q.end());
	std::cout << "The size of the vector after erase is: " << q.size() << std::endl;

	// task3：打印结果
	PrintVec(q);
}