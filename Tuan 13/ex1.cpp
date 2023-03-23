#include<iostream>

using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person()
	{
		
	}
	
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;	
	}
	
	string getName()
	{
		return name;	
	}	
	
	void setName(string name)
	{
		this->name = name;	
	}
	
	int getAge()
	{
		return age;
	}
	
	void setAge(int age)
	{
		this->age = age;
	}
	
	void output()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

class Student: public Person
{
private:
	float gpa;
public:
	Student()
	{
		
	}
	
	Student(string name, int age, float gpa) : Person(name, age)
	{
		this->gpa = gpa;
	}
	
	float getGpa()
	{
		return gpa;
	}
	
	void setGpa(float gpa)
	{
		this->gpa = gpa;
	}

	void output()
	{
//		cout << "Name: " << this->getName() << endl;
//		cout << "Age: " << this->getAge() << endl;
// 		toan tu pham vi ::  thuong dung de goi phuog thuc lop cha 
//		ghi de phuong thuc bang toan tu pham vi 
		Person::output();
		cout << "GPA: " << gpa << endl;
	}
};

class Teacher : public Person
{
private:
	int salary;
public:
	Teacher()
	{
		
	}
	
	Teacher(string name, int age, int salary) : Person(name, age)
	{
		this->salary = salary;
	}
	
	int getSalary()
	{
		return salary;
	}
	
	void setSalary(int salary)
	{
		this->salary = salary;
	}
	
	void output()
	{
		Person::output();
		cout << "Salary: " << salary << endl;
	}
};

int main()
{
	Student a("Kien", 20, 1.1);
	a.output();
	Teacher b("Tuan", 25, 10000000);
	b.output();
	return 0;
}
