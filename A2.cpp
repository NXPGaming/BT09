#include <iostream>

using namespace std;

int main()
{
	int* p = new int;
	int* p2 = p;
	*p = 10;
	delete p; 
	*p2 = 100;//do xóa con trỏ p rồi nên p2 k có vùng nhớ xác định
	cout << *p2;
	delete p2;

}