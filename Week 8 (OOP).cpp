 #include <iostream>
#include <string>
#include <vector>
using namespace std;


class abcd
{
public :
	//static int x,y;
	int x,y;
	
	abcd() : x(0),y(0) {}
	static void print() 
	{
		printf("I am in static %s\n ",__FUNCTION__);
	}
};

//class ka variable hai
//int abcd::x;
//int abcd::y;



#define PI 3.14159465
#define MAX(x,y) (x>y ? x:y)
float circlearea(float r)
{
	return PI*r*r;
}
float circlepere(float r)
{
	return 2*PI*r;
}
class abc
{
	mutable int x;
	int *y;
	int z;

public:
	//ctor ::old style
	//abc(int _x,int _y,int _z=0)
	//{
	//	x=_x;
	//	y=new int(_y);
	//	z=_z;
	//}
	
	//intilaization  list
	abc(int _x,int _y,int _z=0) :x(_x),y(new int (_y)),z(_z) {
	cout<<"in list list"<<endl;
	*y=*y*10;
	//we can not cont variable re assingn
	}
	
	 int getx() const
	{
		x=10;
		return x;
	}
	int setx(int _val)
	{
		x=_val;
	}
	int gety() const
	{
		int f=20;
		return *y;
	}
	int sety(int _val)
	{
		*y=_val;
	}
	int getz() const
	{
		return z;
	}
};
class Student
{
private:
    string gf;

public:
    int id;
    int age;
    bool present;
    string name;
    int nos;
    int *v;

    // ctor: Default ctor: assigns garbage value
    // no khokhla student
    Student()
    {
        cout << "Student ctor called" << endl;
    }

    // paremeterized ctor
    //same name variable kai laye this opeartor use karo
    //nahi nam differnt doo
    Student(int id, int age, bool present, string name, int nos, string gf)
    {
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        this->gf = gf;
        this->v = new int(10);
        cout << "Student paremeterized ctor called" << endl;
    }

    Student(int id, int age, bool present, string name, int nos)
    {
        this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        cout << "Student paremeterized ctor w/o gf called" << endl;
    }

	//copy constructor
	
	//Student(const Student &srcobj)
	//{
	//	cout<<"Student copy constuctor called"<<endl;
	//	this->name=srcobj.name;
	//	this->age =srcobj.age;
	//	this->present =srcobj.present;
	//	this->id =srcobj.id;
	//}

	//dtor 
	~Student()
	{
		cout<<"Destructor is called";
		delete v;
	}
	
	//getter setter method
	string getName()
	{
		return gf;
		//return this->gf;
	}

    void setGfName(string gf)
    {
        this->gf = gf;
    }

    void study()
    {
        cout << "studying" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }
    void bunk()
    {
        cout << "bunking" << endl;
    }

    //~Student()
    //{
   //     cout << "Student dtor called" << endl;
   //     delete v;
  //  }

private:
    void gfchatting()
    {
        cout << "Chatting" << endl;
    }

    void cheating()
    {
        cout << "Cheating" << endl;
    }
};


//int x=2;//Global variable
//void fun()
//{
//	int x=60;
//	cout<<x<<endl;
//	::x=40;
//	cout<<::x<<endl;
//}

void printABC(const abc&a)
{
	cout<<a.getx()<<" "<<a.gety()<<" "<<a.getz()<<endl;
}
void fun()
{
	int x=6;
	int y=17;
	int c=MAX(x,y);
}
int main2()
{
//	::x=4;//global x
//	int x=20;//local to main() fn.
//	cout<<x<<endl;
//	cout<<::x<<endl;
//	{
//		int x=50;
//		{
//			int x=44;
//			cout<<x<<endl;
//		}
//		cout<<x<<endl;
//		cout<<::x<<endl;
//	}
//	fun();
	
    // cout << sizeof(Student) << endl;
    // Student s1;
    
    //Boaring kam hai so ue constructor
    // s1.name = "Goli";
    // s1.age = 12;
    // s1.id = 1;
    // s1.nos = 5;
    // s1.present = 1;

    // Student s2;
    // s2.name = "Chota Bheem";
    // s2.age = 11;
    // s2.id = 2;
    // s2.nos = 1;
    // s2.present = 0;


    // Student s2(1, 12, 1, "Chota Bheem", 1, "Chutki");
    // cout << s2.name << endl;
    // cout << s2.id << endl;

    // Student s3(2, 15, 0, "Lokesh", 5);
    // cout << s3.name << endl;

    // // alocating on heap
    // Student *s4 = new Student(3, 34, 1, "Chintu", 6);
    // cout << s4->name << endl;
    // cout << (*s4).name << endl;

    // delete s4; // no LEAK
    
    
    //constant keyword
    
    //const int x=10;
    //cout<<x<<endl;
    
    //cont with pointer
    
    //const int *a=new int(2); //int const *a=new int(2); //same also
    //cout<<*a<<endl;
    //*a=20;
    //cout<<*a<<endl;
    
    
    //int b=20;
    //a=&b;
    //cout<<*a<<endl;
    
    //cont pointer ,but NON-CONST data
    
    //int *const a=new int(2);
    //*a=20;//chal gaya
    //cout<<*a<<endl;
   // int b =50;
   // a=&b;//nhi chelga pointer const hai
    
    ////cont pointer ,const data
    //const int *const a=new int(10);
    //cout<<*a<<endl;
    //*a=50;
    //int b=100;
    //a=&b;
    

    return 0;
}

//Inheritance 
class Bird
{
	public :
	int age;
	int weight;
	int no_legs;
	string color;
	void eat()
	{
		cout<<"Bird eating"<<endl;
	}
	void fly()
	{
		cout<<"Bird flying"<<endl;
	}
};
class Sparrow : public Bird
{
public:
	Sparrow(int age,int weight,string color,int no_legs)
	{
		this->age=age;
		this->weight=weight;
		this->color=color;
		this->no_legs=no_legs;
		
	}
		void grassing()
		{
			cout<<"Sparrow is grassing"<<endl;
		}
};

class Pegion : public Bird
{
	public:
		void guttering()
		{
			cout<<"Pegion is guttering"<<endl;
		}
};

class Parrot : public Bird
{
	public:
		void speaking()
		{
			cout<<"Parrot  is speaking"<<endl;
		}
};

//Multiple Inheritance

class Person{
	public:
	void walk()
	{
		cout<<"Wlaking"<<endl;
	}
};
class Teacher : virtual public Person{
	public:
		void teach()
		{
			cout<<"Teacher Teaching"<<endl;
		}
};
class Reserchr : virtual public Person{
	public:
		void research()
		{
			cout<<"Reserchr...."<<endl;
		}
};

class Professor :public Teacher,public Reserchr{
	public:
		void bore()
		{
			cout<<"Boring"<<endl;
		}
};


//Polymorphism

//function overloing 
int add(int a,int b)
{
	return a+b;
}
double add(double a,double b)
{
	return a+b;
}
int add(int a,int b,int c)
{
	return a+b+c;
}

//Operator Overloading
//+ * - = () ++ -- ........opeartors 
class Vector{
	int x;
	int y;
public :
	//Vector(int x,int y)
	//{
	//	this->x;
	//	this->y;
	//}
	//init list
	Vector(int x,int y) :x(x),y(y){}
	
	//op overloading 
	//void operator+(const Vector &src)
	//{
	//	//this->x=this->x+src->x;
	//	//this->y=this->y+src->y;
	//	this->x+=src.x;
	//	this->y+=src.y;
	//}
	//	void operator-(const Vector &src)
	//{
		//this->x=this->x+src->x;
		//this->y=this->y+src->y;
	//	this->x-=src.x;
	//	this->y-=src.y;
	//}
		void operator++()
	{
		//this->x=this->x+src->x;
		//this->y=this->y+src->y;
		this->x++;
		this->y++;
	}
	void display()
	{
		cout<<"X:"<<x<<endl;
		cout<<"Y:"<<y<<endl;	
	}
		
};


//Shallow and Deep copy

//Shallow copy 
class ab{
	public :
		int x;
		int *y;
		
		ab(int _x,int _y) : x(_x),y(new int(_y)) {}
		
		//defult constructor shallow copy
		//ab(const ab &obj)
		//{
		//	x=obj.x;
		//	y=obj.y;
		//}
		
		//Deep copy
		ab(const ab &obj)
		{
			x=obj.x;
			y=new int(*obj.y);
		}
		
		void print() const{
		printf("X:%d\nPTR Y:%p\nContent of Y(*y):%d\n\n",x,y,*y);
		}
		
		~ab()
		{
			delete y;
		}
		
};

class Box{
	int width;
	//ctor
	Box(int _w):width(_w){};
	public:

		int getwidth() const{
		return width;
		}
		void setwifth(int _val)
		{
			width=_val;
		}
		friend class BoxFactory;
};

class BoxFactory{
	int count;
	public :
		Box getBox(int _w)
		{
			++count;
			return Box(_w);
		}
};
//Friend Function

class A{
	private:
		int x;
		
		public :
			//ctor
		A(int _val):x(_val){};
		
		int getX() const
		{
			return x;
		}	
		void setX(int _val)
		{
			x=_val;
		}
		//friend class
		friend class B;
		//friend Function 
		friend void print(const A &a);
};
class B{
	public:
		void  print(const A &a)
		{
			//cout<<a.getX()<<endl;
			cout<<a.x<<endl;
		}
};
void print(const A &a)
{
	cout<<a.x<<endl;
}

//Function Overrideing

class Animal{
	public:
		virtual void sound()
		{
			cout<<"Animal making sound"<<endl;
		}
		
	   virtual ~Animal()
		{
			cout<<"Animal dtor"<<endl;
		}
};

class Dog:public Animal{
	public :
		void sound() override //nahi lihile tar chalte 
		{
			cout<<"Dog Barking"<<endl;
		}
		~Dog()
		{
			cout<<"Dog dtor"<<endl;
		}
};
class Cat:public Animal{
	public :
		void sound() override
		{
			cout<<"Cat Mowing"<<endl;
		}
		~Cat()
		{
			cout<<"Cat dtor"<<endl;
		}
};
class Parrote:public Animal{
	public :
		void sound() override
		{
			cout<<"Parrot Metutu"<<endl;
		}
		~Parrote()
		{
			cout<<"Parrote dtor"<<endl;
		}
};
void sound(Animal *animal)
{
	animal->sound();//ploymorfic
	//animal sound is behaving as per requred object allocated at runtime
}

//Inline Function

inline void num(int no)
{
	cout<<no<<endl;
}
int main()
{
	//abc a(1,2,4);
	//cout<<a.getx()<<endl;
	//cout<<a.gety()<<endl;
	//printABC(a);
	
	//cout<<circlearea(65.4)<<endl;
	//cout<<circlepere(65.4)<<endl;
	
	//Static data member 
	//abcd obj1;
	//obj1.x=1;
	//obj1.y=2;
	//obj1.print();
	//abcd obj2;
	//obj2.x=3;
	//obj2.y=4;
	//obj2.print();
	//obj1.print();
	//obj2.print();
	
	//static member function
	//abcd obj1;
	//abcd::print();
	//abcd obj2;	
	//abcd::print();
	//abcd::print();
	
	
	//copy constructor
	
	//Student s1(1, 12, 1, "Chota Bheem", 1, "Chutki");
	//copy through call
	//Student s2;
	//Student s2(s1);
	//normal intialize
	//s2=s1;
	
	//cout<<s1.name<<endl;
	//cout<<s2.name<<endl;
	
	//getter and setter method
	//Student s1(1,12,1,"Saoprasad",1,"Patil");
	//cout<<s1.name<<endl;
	//cout<<s1.getName()<<endl;
	//s1.setGfName("RajLaxshami");
	//cout<<s1.getName()<<endl;
	
	//Inheritance
	//Sparrow s(1,1,"Red",2);
	//cout<<s.color<<endl;
	//s.eat();
	//s.fly();
	//s.grassing();
	
	//Multiple Inhiratnce
	//Professor p;
	//Diamond Problem
	
	//1.soln
	//p.Teacher::walk();
	//p.Reserchr::walk();
	//2.soln virtual 
	//p.walk();
	
	//Function Overoading
	//cout<<add(1,5)<<endl;
	//cout<<add(5.6,6.2)<<endl;
	//cout<<add(1,2,3)<<endl;
	
	//operator overloading
	//Vector v1(2,3);
	//Vector v2(4,5);
	
	//v1+v2;
	//v1-v2;
	//++v1;
	//addition answer should be stored in v1;
	//v1.display();
	
	
//	cout<<"Printing A"<<endl;
//	ab a(1,2);
//	a.print();
	
//	cout<<"Printing B"<<endl;
//	ab b=a;
//	b.print();	
//	*b.y=20;
//	b.print();
	
//	cout<<"Printing A"<<endl;
	//a.print();
	//return 0;
	
//	ab *a=new ab(1,2);
//	ab b=*a;
//	delete a;
//	b.print();

	//Box b(5);
	//cout<<b.getwidth()<<endl;
	//BoxFactory bfact;
//	Box b=bfact.getBox(5);
	//cout<<b.getwidth()<<endl;
	
	//Friend Function
	
	//A a(5);
	//B b;
	//b.print(a);
	//print(5);
	
	
	//Function Overriding
	//heap allocation
	//Dog *dog=new Dog();
	//dog->sound();
	//Animal *animal=new Dog();
	//sound(animal);
	
	//animal=new Cat();
	//sound(animal);
	
	//animal=new Parrote();
	//sound(animal);
	

	
	num(5);
	num(5);
	num(5);
	num(5);
	num(5);
	num(5);
	num(5);
	//function calling nahi ho raha hai for inline function 
	
	delete animal;
	return 0;
}

