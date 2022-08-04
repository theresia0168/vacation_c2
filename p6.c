#include <stdio.h>
#define NAME_LEN 10
#define MIN(a, b) ((a)>(b)) ? (b): (a)
#define M1(a,b)	({printf("%d\n", a); printf("%d\n", b);})

int main(int argc, char *argv[])
{
	int n = 5, m = 3;
	
	printf("%d\n", MIN(5, 3));
	printf("%d\n", ((5)>(3)?(3):(5)));
	M1(n,m);
	
	n > m ? printf("n is bigger\n"): printf("m is bigger\n");
	
	if(n>m){
		printf("n is bigger\n");
	}
	else{
		printf("m is bigger\n");
	}
	
	printf("%d\n", NAME_LEN);
	
	return 0;
}
