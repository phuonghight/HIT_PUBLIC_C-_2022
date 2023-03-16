#include<iostream>
#include<math.h>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		
	}
	
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	
	void setX(int x)
	{
		this->x = x;
	}
	
	void setY(int y)
	{
		this->y = y;
	}
	
	int getX()
	{
		return this->x;
	}
	
	int getY()
	{
		return this->y;
	}
	
	void input()
	{
		cout << "Hoanh do: ";
		cin >> x;
		cout << "Tung do: ";
		cin >> y;
	}
	
	void output()
	{
		// Toa do: (x, y)
		cout << "Toa do: (" << x << ", " << y << ")" << endl;
	}
};

class Line
{
private:
	Point begin;
	Point end;
public:
	Line()
	{
			
	}
	
	Line(Point begin, Point end)
	{
		this->begin = begin;
		this->end = end;	
	}
	
	void setBegin(Point begin)	
	{
		this->begin = begin;
	}
	
	void setEnd(Point end)	
	{
		this->end = end;
	}
	
	Point getBegin()
	{
		return this->begin;
	}
	
	Point getEnd()
	{
		return this->end;
	}
	
	void input()
	{
		cout << "Diem dau: " << endl;
		begin.input();
		cout << "Diem cuoi: " << endl;
		end.input();
	}
	
	void output()
	{
		cout << "Diem dau: " << endl;
		begin.output();
		cout << "Diem cuoi: " << endl;
		end.output();
	}
	
	double getLength()
	{
		int x1 = begin.getX();
		int x2 = end.getX();
		int y1 = begin.getY();
		int y2 = end.getY();
		// return sqrt(pow(begin.getX() - end.getX(),2) + pow(begin.getY() - end.getY(),2));
		return sqrt((pow(x1 - x2, 2) + (pow(y1 - y2, 2))));
	}
};

int main()
{
	Point a;
	Point b;
//	a.input();
//	b.input();
	Line d;
	d.input();
	cout << d.getLength();
}
