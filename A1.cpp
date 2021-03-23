#include <iostream>

using namespace std;

char *concat(const char*s, const char *a)
{
	string l;
	l=s;
	string h;
	h=a;

	char *k=new char[20];
	for(int i=0;i<l.length();i++)
	{
		k[i] = l[i];
	}
	for(int j=0;j<h.length();j++)
	{
		k[l.length()+j] = h[j];
	}
	return k;
	
}

int main()
{
	char*s="Hello";
	char *a="Words";
	cout<<concat(s,a);

	system("pause");
	return 0;
}