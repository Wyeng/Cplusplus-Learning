#include<iostream>
#include<algorithm>
#include<vector>
void PracticeCase1()
{
	const double lower_limit = -1.5;
	const double upper_limit = 1.5;
	std::vector<double> q = { 0.2,-0.8,1.3,0.5,-1.8,1.7};

	// task1:找出最大关节角
	double max_angle = *std::max_element(q.begin(), q.end());
	std::cout << "The max angle is: " << max_angle << std::endl;

	// task2:找出最小关节角
	double min_angle = *std::min_element(q.begin(), q.end());
	std::cout << "The min angle is: " << min_angle << std::endl;

	// task3:找出第一个大于1.0的关节角，并打印其位置
	auto find_large_it=std::find_if(q.begin(), q.end(),
		[](double angle)
		{
			return angle > 1.0;
		}
	);
	if (find_large_it != q.end())
	{
		std::cout << "The first angle greater than 1.0 is: " << *find_large_it << std::endl;
		std::cout << "The position of the first angle greater than 1.0 is: " << std::distance(q.begin(), find_large_it) << std::endl;
	}
	else
		std::cout << "No angle greater than 1.0 found." << std::endl;

	//task4:统计所有超过1.0的关节角的个数
	int count = std::count_if(q.begin(), q.end(),
		[](double angle)
		{
			return angle > 1.0;
		});
	std::cout << "The count of angle greater than 1.0 is: " << count << std::endl;

	// task5:找出第一个超出安全范围的关节
	auto find_out_of_range_it = std::find_if(q.begin(), q.end(),
		[lower_limit, upper_limit](double angle)
		{
			return angle < lower_limit || angle > upper_limit;
		});
	if (find_out_of_range_it != q.end())
	{
		std::cout << "First unsafe joint angle: " << *find_out_of_range_it << std::endl;
		std::cout << "Joint index: " << std::distance(q.begin(), find_out_of_range_it) << std::endl;
	}
	else
		std::cout << "All joints are safe." << std::endl;

	// task6:统计所有超出安全范围的关节个数
	auto count_out_of_range = std::count_if(q.begin(), q.end(),
		[lower_limit, upper_limit](double angle)
		{
			return angle < lower_limit || angle > upper_limit;
		});
	std::cout << "Count of unsafe joint angles: " << count_out_of_range << std::endl;
}