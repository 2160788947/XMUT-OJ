#include<iostream>
#include<queue>
using namespace std;

struct people {
	int gTime;
	int sTime;
	int cur_Time;
	people(int sTime, int gTime, int cur_Time)
	{
		this->gTime = gTime + sTime;
		this->sTime = sTime;
		this->cur_Time = cur_Time;
	}
	people() {}
	void update()
	{
		cur_Time++;
		if (cur_Time > gTime)
			cur_Time = 1;
	}
};
queue<people>game;
queue<people>study;
bool update()
{
	int i;
	int gplayer = game.size();
	int splayer = study.size();
	queue<people>t;

	for (i = 0; i < gplayer; i++)
	{
		people p = game.front();
		game.pop();
		p.update();
		if (p.cur_Time <= p.sTime)
			study.push(p);
		else if (p.cur_Time <= p.gTime)
			game.push(p);
	}
	for (i = 0; i < splayer; i++)
	{
		people p = study.front();
		study.pop();
		p.update();
		if (p.cur_Time <= p.sTime)
			study.push(p);
		else if (p.cur_Time <= p.gTime)
			t.push(p);
	}

	if (splayer >= gplayer)
	{
		while (t.size())
		{
			study.push(t.front());
			t.pop();
		}
	}
	else
	{
		while (t.size())
		{
			game.push(t.front());
			t.pop();
		}
	}
	if (game.empty())
		return true;
	return false;
}
int main()
{
	int N;
	int cnt;
	cin >> N;
	while (N--)
	{
		int gTime, sTime, cur_Time;
		cin >> sTime >> gTime >> cur_Time;
		people* p = new people(sTime, gTime, cur_Time);
		if (cur_Time <= sTime)
		{
			study.push(*p);
		}
		else if (cur_Time <= gTime + sTime)
		{
			game.push(*p);
		}
	}
	for (cnt = 1; cnt <= 5; cnt++)
	{
		if (cnt == 1)
		{
			if (game.empty())
				break;
			else
				continue;
		}
		if (update())
		{
			break;
		}
	}
	if (cnt <= 5)
		cout << cnt;
	else
		cout << "NO";
	return 0;
}