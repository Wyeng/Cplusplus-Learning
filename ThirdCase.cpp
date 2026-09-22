#include<iostream>
#include<vector>
#include<algorithm>

// task1：编写一个函数，使传入的单个关节角增加 0.2。
void IncreaseJoint(double &angle)
{
    angle += 0.2;
}

// task2:编写一个函数，使用 const vector& 接收关节角并打印所有关节角
void PrintJoint(const std::vector<double>& q)
{
    for (const auto& tmp : q)
    {
        std::cout << tmp << " ";
    }
    std::cout << std::endl;
}

// task3:编写一个函数，使用 vector& 接收关节角，并将所有关节角限制在：[-1.0, 1.0]
void LimitJoint(std::vector<double>& q, double upper_limit, double lower_limit)
{
    std::transform(q.begin(), q.end(), q.begin(),
        [upper_limit, lower_limit](double angle)
        {
            if (angle < lower_limit)
                return lower_limit;
            else if (angle > upper_limit)
                return upper_limit;
            else
                return angle;
        });
}

void ThirdCase()
{
    const double upper_limit = 1.0;
    const double lower_limit = -1.0;
    std::vector<double> q = {0.2, -1.5, 1.8, -0.3, 2.0, 0.5};
    
    PrintJoint(q);

    IncreaseJoint(q[0]);
    
    LimitJoint(q, upper_limit, lower_limit);

    PrintJoint(q);
}