#include<iostream>

static int s_Speed = 1;
static int s_Level = 2;

int main()
{
	if(s_Level> 5)
		s_Speed= 10;
	else
		s_Speed= 5;
	// or
	s_Speed= s_Level > 5 ? 10 : 5;

	if (s_Level> 5 && s_Level< 15)
	{
		s_Speed= 10;
	}
	if (s_Level>15)
	{
		s_Speed=15
	}
	else
		s_Speed=20
	//or
	s_Speed= s_Level > 5&& s_Level<15 ? s_Level>15? 10 : 15 : 20; // dont use this 



 
	std:: string rank = s_Level > 10 ? "master" : "beginner";

}