#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
#include<numeric>

void PracticeCase8()
{
	std::array < double,6 > q= { 0.2, -0.8, 1.5, -0.3, 0.5, 1.0};

	// task1：打印数组 q 的大小。
	std::cout << "Size of array q: " << q.size() << std::endl;

	// task2:计算所有关节角的代数和
	double sum_angle = std::accumulate(q.begin(), q.end(), 0.0,
		[](double sum, double angle)
		{
			return sum += angle;
		});
	std::cout << "Sum of angles: " << sum_angle << std::endl;

	// task3:按照关节角从小到大排序。
	std::sort(q.begin(), q.end());
	for (auto& angle : q)
	{
		std::cout << angle << " ";
	}
	std::cout << std::endl;

	// task4：把所有关节角乘以 2.0。
	std::transform(q.begin(), q.end(),q.begin(),
		[](double angle)
		{
			return angle * 2.0;
		});
	for (auto& angle : q)
	{
		std::cout << angle << " ";
	}
}