#include<iostream>
#include<unordered_map>
#include<algorithm>

void PracticeCase12()
{
	std::unordered_map<int, double>sensor_data;
	sensor_data.emplace(101, 23.5);
	sensor_data.emplace(205, 18.2);
	sensor_data.emplace(310, 42.7);
	sensor_data.emplace(502, 15.8);

	// task1:使用 range-for + structured binding 输出所有数据。
	for (const auto& [idx, data] : sensor_data)
	{
		std::cout << "sensor_data " << idx << " " << data << std::endl;
	}

	// task2:使用find查询sensor 310，并输出结果
	auto it = sensor_data.find(310);
	if (it != sensor_data.end())
		std::cout << "sensor_data " << it->first << " " << it->second << std::endl;
	else
		std::cout << "not exist" << std::endl;

	//task3：查询sensor 999,如果不存在输出信息
	auto res = sensor_data.find(999);
	if (res == sensor_data.end())
		std::cout << "Sensor 999 does not exist." << std::endl;
	else
		std::cout << "sensor_data " << res->first << " " << res->second << std::endl;
}
