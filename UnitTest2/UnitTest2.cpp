#include "pch.h"
#include "CppUnitTest.h"
#include<vector>
#include "../Forecasting/Client.h"
#include "../Forecasting/Client.cpp"


using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		vector<double> tempratures = { 40,29,30,34,26 }; // total = 159 , avg = 31.8
		Client * client = new Client(tempratures);
		double * results = client->TempratureCalculation();
		TEST_METHOD(AccumlationTest)
		{			
			Assert::AreEqual(159.0,results[1]);
		}

		TEST_METHOD(AverageTest)
		{
			Assert::AreEqual(31.8, results[0]);

		}

	};
}
