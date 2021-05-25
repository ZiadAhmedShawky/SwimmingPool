#include<iostream>
#include"SwimmingPool.h"
using namespace std;
int main()
{
	SwimmingPool pool;
	pool.set_water(3, 5, 6);
	pool.getinformationFillingAndDraining();
	pool.get_time_for_filling();
	pool.decreasingWater(3.5);
	pool.decreasingWater(2.5);
}