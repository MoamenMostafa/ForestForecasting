#include "Node.h"
#include <stdlib.h>
#include <windows.h>
#include <vector>
#include <iostream>
#include "Client.h"


double Node::generateTemprature()
{
	return rand() % 50;
}

void Node::SendTemprature()
{
	double grade , *results ;
	std::vector<double> grades;
	Client * client;
	while (1)
	{
		grade = generateTemprature();
		std::cout << "Temprature : " << grade << " C" << std::endl;
		grades.push_back(grade);
		Sleep(1000);
		
		if (grades.size() == 5)
		{
			client = new Client(grades);
			results = client->TempratureCalculation();
			std::cout << "Temprature Average : " << results[0] << " C" << std::endl;
			std::cout << "Temprature Accumlation : " << results [1] << " C" << std::endl;
			grades.clear();

		}
		
	}
}

