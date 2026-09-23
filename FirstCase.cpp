#include<iostream>

struct Joint
{
	int id;
	double angle;
	double velocity;
	double torque;

	void PrintState()
	{
		std::cout << "id:" << this->id << " angle:" << this->angle << " velocity:"
			<< this->velocity << " torque:" << this->torque << std::endl;
	}
};

void FirstCase()
{
	Joint joint1{ 1,0.5,0.2,1.5 };
	Joint joint2{ 2,-0.8,-0.1,2.0 };

	joint1.angle = 1.0;

	joint1.PrintState();
	joint2.PrintState();

}