#include "Client.h"
#include<iostream>
double * Client::TempratureCalculation()
{
	double total = 0,average=0;

	for (int i = 0; i < tempratures.size(); i++)
		total += tempratures[i];

	average = total / tempratures.size();

	double* result = new double[2];
	result[0] = average; result[1] = total;
	return result;
}
