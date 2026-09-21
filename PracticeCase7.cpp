#include<iostream>
#include<vector>
#include<algorithm>

void PrintVec(const std::vector<double>& v);

void PracticeCase7()
{
	// 数据的安全范围为 [-1.0, 1.0]
	const double lower_limit = -1.0;
	const double upper_limit = 1.0;
	std::vector<double> q = {0.2, -0.8, 1.5, -2.0, 0.5, 1.8, -0.3};
	const int original_size = q.size();
	std::cout << "Before filtering: ";
	PrintVec(q);

	// task1:使用 remove_if + erase 删除所有超出安全范围的关节角。
	q.erase(std::remove_if(q.begin(), q.end(),
		[lower_limit, upper_limit](double angle)
		{
			return angle < lower_limit || angle > upper_limit;
		}), q.end());
	std::cout << "After filtering: ";
	PrintVec(q);

	// task2:检查一共删除了多少个关节角。
	std::cout << "Number of angles removed: " << original_size-std::distance(q.begin(),q.end()) << std::endl;

	//task3:过滤以后，对剩余的安全关节角，按照距离 0.0 的绝对值从小到大排序。
	std::sort(q.begin(), q.end(),
		[](double angle1, double angle2)
		{
			return std::abs(angle1) < std::abs(angle2);
		});
	PrintVec(q);
}