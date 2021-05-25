#pragma once
class SwimmingPool
{
private:
	int length;
	int width;
	int deepth;
	int rate_for_filling;
	int rate_for_draining;
public:
	swimmingPool();
	void getinformationFillingAndDraining();
	void set_water(int, int, int);
	int get_water();
	int get_time_for_filling();
	double increasingWater(double time);
	double decreasingWater(double time);
};

