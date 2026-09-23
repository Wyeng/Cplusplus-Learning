#include<iostream>

class Joint {
private:
	int id;
	double angle;
	double velocity;
	double torque;
	const double angle_upper_limit = 1.0;
	const double angle_lower_limit = -1.0;

public:
	Joint(int id, double angle, double velocity, double torque):id(id),angle(angle),velocity(velocity),torque(torque)
	{
		if (this->angle<this->angle_lower_limit || this->angle>this->angle_upper_limit)
		{
			std::cout << "angle out of range ,already initalize" << std::endl;
			if (this->angle > 0)
				this->angle = 1.0;
			else
				this->angle = -1.0;
		}
	}

	// Getter接口
	int GetId()
	{
		return this->id;
	}
	double GetAngle()
	{
		return this->angle;
	}
	double GetVelocity()
	{
		return this->velocity;
	}
	double GetTorque()
	{
		return this->torque;
	}

	//Setter接口
	void SetAngle(double angle)
	{
		if (angle<this->angle_lower_limit || angle>this->angle_upper_limit)
		{
			std::cout << "data out of range" << std::endl;
		}
		else
			this->angle = angle;
	}

	//打印状态的接口
	void PrintState()
	{
		std::cout << "id:" << this->id << " angle:" << this->angle
			<< " velocity:" << this->velocity << " torque:" << this->torque << std::endl;
	}
};
void SecondCase()
{
	Joint Joint1(1, 0.5, 0.2, 1.5);
	Joint Joint2(2, -1.8, -0.1, 2.0);

	Joint1.PrintState();
	Joint1.SetAngle(1.0);
	Joint1.PrintState();
	Joint1.SetAngle(5.0);
	double tmp = Joint1.GetAngle();
	std::cout << "angle:" << tmp << std::endl;

	Joint2.PrintState();

}