#include <iostream>

using namespace std;

class class_one{
	protected:
		int private_n;
	public:
		void set_n(int x){
			private_n = x;
		}
		void print(){
			cout<<"CLASS_ONE : "<<private_n<<endl;
		}
	friend class class_three;
};

class class_two: public class_one{
	private:
		int private_m;
	public:
		void print2(){
			cout<<"CLASS_TWO-P2 : "<<private_n<<endl;
		}
};

class class_three{
	public:
		void test_fn(){
			class_one testx;
			
			testx.set_n(200);
			testx.private_n = 250;
			testx.print();
		}
};

int main(int argc, char *argv[])
{
	class_two myclass;
	
	myclass.set_n(10);
	// myclass.private_n = 200;
	myclass.print2();
	
	class_three test;
	test.test_fn();
	
	return 0;
}

/*
public 상속 
부모			자식
public			public
protected		protected
private			---(private)  

protected 상속 
부모			자식
public			protected
protected		protected
private			---(private) 

private 상속
부모			자식
public			private
protected		private
private			---(private)  
*/
