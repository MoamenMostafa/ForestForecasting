#pragma once
#include "Node.h"
#include<vector>

class Client
{
private:
	Node node;
	std::vector<double> tempratures;
public:
	Client(std::vector<double>& _tempratures)
	{
		tempratures = _tempratures;
	}
	double * TempratureCalculation();
};

