#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
void PrintVec(const std::vector<double>& vec);
void PracticeCase4()
{
	std::vector<double> q = {0.2, -0.8, 1.5, -2.0};

	// task1：使用 std::accumulate 计算所有关节角的代数和。
	double sum = std::accumulate(q.begin(), q.end(), 0.0);
	std::cout << "Sum of all joint angles: " << sum << std::endl;

	// task2:所有关节角绝对值之和。
	double abs_sum = std::accumulate(q.begin(), q.end(), 0.0,
		[](double sum, double angle)
		{
			return sum + std::abs(angle);
		});
	std::cout << "Sum of absolute values of all joint angles: " << abs_sum << std::endl;

	// 计算所有关节角的平均值
	double average = std::accumulate(q.begin(), q.end(), 0.0) / q.size();
	std::cout << "Average of all joint angles: " << average << std::endl;


	// 计算误差平方和
	std::vector<double> error = {-0.2, 0.1, -0.5, 0.3};
	double error_sum = std::accumulate(error.begin(), error.end(), 0.0,
		[](double sum, double error)
		{
			return sum + pow(error, 2);
		});
	std::cout << "Sum of squared errors: " << error_sum << std::endl;
}