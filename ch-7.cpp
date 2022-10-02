//#include <iostream>
//using namespace std;
//int main()
//{
//	int a,b,t;
//	a=10;
//	b=20;
//	cout << "a="<<a<<"b="<<b<<endl;
//	t=a;
//	a=b;
//	b=t;
//	cout <<"a="<<a<<"b="<<b<<endl;
//	return 0;
// }

#include <iostream>
using namespace std;
int main()
{
	int a,b;
	a=100;
	b=200;
	a=b-a;
	b-=a;
	a+=b;
	cout <<"a="<<a<<"b="<<b<<endl;
	return 0;
 }
