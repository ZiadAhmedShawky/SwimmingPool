#include "SwimmingPool.h"
#include<iostream>
#include "../../q.12 chapter 10/swimmingPool.h"
using namespace std;
swimmingPool::swimmingPool()
{
	length = 0;
	width = 0;
	deepth = 0;
	rate_for_filling = 0;
	rate_for_draining = 0;
}

void swimmingPool::getinformationFillingAndDraining()
{
	cout << "the rate for filling is : " << endl;
	cin >> rate_for_filling;
	cout << "the rate for draining is :  " << endl;
	cin >> rate_for_draining;
}

void swimmingPool::set_water(int len, int wid, int deep)
{
	length = len;
	width = wid;
	deepth = deep;
}

int swimmingPool::get_water()
{
	return length * width * deepth;
}

int swimmingPool::get_time_for_filling()
{
	return (length * width * deepth) / rate_for_filling;

}

double swimmingPool::increasingWater(double time)
{
	return rate_for_filling * time;
}

double swimmingPool::decreasingWater(double time)
{
	return rate_for_draining * time;
}



