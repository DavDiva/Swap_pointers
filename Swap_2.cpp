#include<iostream>
using namespace std;
void swap(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int a = 5, b = 9;
	cout <<"a = " << a << endl;
	cout <<"b = " << b << endl;
	swap(&a, &b);
	cout << "After swap: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}