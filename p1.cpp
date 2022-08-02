#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(int argc, char *argb[])
{
	int n = 5;
	char c = 'a';
	char buf[20];
	
	cout << "Hello World" << endl;
	cout << n << endl;
	cout << c << endl;
	
	printf("Hello %d, - %c\n", n, c);
	
	cin >> n;
	cout << "Value of n : " << n << endl;
	
	cout << "Type Your String : ";
	cin >> buf;
	cout << "Your String was " << buf << endl;
	
	//////////////////////////////////////////////////////
	
	int *p;
	
	p = (int*)malloc(sizeof(int)*1);
	*p=10;
	free(p);
	
	p = new int(10);
	cout<<*p<<endl;
	delete p;
	
	p = (int*)malloc(sizeof(int)*5);
	free(p);
	
	p = new int[5];
	delete [] p;
	
	return 0;
}
