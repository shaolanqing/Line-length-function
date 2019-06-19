/*#include<iostream>
using namespace std;
struct Student
{
	string name;
	string num;
	int age;
};
void swap_student(struct Student &s1,struct Student &s2)
{
	struct Student t;
	t=s1;
	s1=s2;
	s2=t;
}
int main()
{
	struct Student st[2];
	int i;*/
	/*st[0].name="shao";
	st[0].num="123";
	st[0].age=18;
	st[1].name="qing";
	st[1].num="145";
	st[1].age=15;*/
/*	for(i=0;i<2;i++)
	cin>>st[i].name>>st[i].num>>st[i].age; 

	for(i=0;i<2;i++)
		cout<<st[i].name<<" "<<st[i].num<<" "<<st[i].age<<endl;
	cout<<endl;
	swap_student(st[0],st[1]);
	for(i=0;i<2;i++)
		cout<<st[i].name<<" "<<st[i].num<<" "<<st[i].age<<endl;;
	return 0;
}*/
/*#include<iostream>
using namespace std;
class Point
{
private:
	int x,y;
public:
	Point()
	{
		x=0;
		y=0;
	}
	Point(int xx,int yy)
	{
		x=xx;
		y=yy;
	}
	Point(Point &p)
	{
		x=p.x+1;
		y=p.y;
	}
	~Point()
	{
		cout<<"is construction!"<<endl;
	}
    void increase()
	{
		x++;
	}
	void printinfo()
	{
		cout<<"(x,y)="<<"("<<x<<","<<y<<")"<<endl;
	}
};
class Circle
{
private:
	int centre;
	Point p;
	int *arr;
public:
	Circle()
	{
	arr=new int[3];
		for(int i=0;i<3;i++)
			arr[i]=0;
	
		centre=0;
	}
	Circle(int x,int y,int c):p(x,y)
	{
        arr=new int[3];
		for(int i=0;i<3;i++)
			arr[i]=i;
		for(int i=0;i<3;i++)
			cout<<arr[i];
			cout<<endl;
		centre=c;
		
	}
	Circle(Circle &c)
	{
		p=c.p;
		//p.increase();
		centre=c.centre;
		 arr=new int[3];
		for(int i=0;i<3;i++)
			arr[i]=c.arr[i];

	}

	void printifo()
	{
		p.printinfo();
		cout<<"centre:"<<centre<<endl;
	}
		void copy(Circle &c)
	{
		c.printifo();
	}

     ~Circle()
	 {
		 delete []arr;
		 cout<<"------------"<<endl;
	 }
	~Circle()
	{
		delete p;
	}
};
int main()
{
	Circle c1,c2(2,4,6),c3(c2);//c3拷贝c2
	c1.printifo();
	c2.printifo();
	c3.copy(c2);//与拷贝构造函数功能相同
	
	return 0;
}*/
#include<iostream>
#include<cmath>       //sqrt函数的头文件 
using namespace std;
class Point 
{
private:
	float x,y;
public:
	Point()
	{
		x=0;
		y=0;
	}
	Point(float xx,float yy)
	{
		x=xx;
		y=yy;
	}
	Point(Point &p)    //拷贝构造函数 
	{
		x=p.x;
		y=p.y;
	}
	void setx(float xx)     //利用setx（）函数来修改x的值 
	{
		x=xx;
	}
	void sety(float yy)
	{
		y=yy;
	}
	float getx()         //利用getx()函数来获取x的值 
	{
		return x;
	}
	float gety()
	{
		return y;
	}
	~Point()
	{
		cout<<"is construction!"<<endl;
	}
   
	void printinfo()           //输出函数 
	{
		cout<<"(x,y)="<<"("<<x<<","<<y<<")"<<endl;
	}
};
class Line
{
private:
	Point p1,p2;    //定义两个对象成员 
public:
	Line()
	{
	}
	Line(float x1,float y1,float x2,float y2):p1(x1,y1),p2(x2,y2)  //对象成员在构造函数中实现初始化 
	{
	}
	~Line()
	{
		cout<<"is construction!"<<endl;
	}
	void getlength()       //获取线段长度的函数     
	{
		double length;
		length=sqrt ( (p1.getx()-p2.getx())*(p1.getx()-p2.getx())+(p1.gety()-p2.gety())*(p1.gety()-p2.gety()) ) ;
		cout<<length<<endl;
	}
};
int main()
{
	Point p1(2,4),p2(5,6);
	p1.printinfo();
	p2.printinfo();
	
	Line l1(2,4,5,6);
	l1.getlength();
	return 0;
}


	
	

	





	






