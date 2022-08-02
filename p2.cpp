#include <iostream>

using namespace std;

class point{			// �׼��� ������ : public, private, protected 
	private:
		int x,y;		// ������� --> �Ӽ�, property 
	public:	
		void set(int a, int b){		// �Լ� --> method 
			if(a < 0) a *= -1;
			if(b < 0) b *= -1;
			x = a;
			y = b;
		}
		void print(){
			cout<<"X : "<<x<<endl;
			cout<<"Y : "<<y<<endl<<endl;
		}
};

int main(int argc, char *argv[])
{
	point mypoint, p2, p3;		// point --> class, mypoint --> instance
	
	//mypoint.x = 100;	// property access denied (if private)
	//mypoint.y = 200;
	mypoint.print();	// method call
	
	mypoint.set(150,250);		// Only method can access to private
	mypoint.print();
	
	p2.set(-5,-15);
	p2.print();

	return 0;
}
