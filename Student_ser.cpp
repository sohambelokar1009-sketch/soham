#include <iostream>
using namespace std;
int main()
{
	int rollno[2];
	int searchroll;

	cout<<"Enter Roll no of Student";

	for (int i = 0; i < 5; i++)
	{
		cin>>rollno[i];
	}
	cout<<"\n Emter Roll no to search:";
	cin>>searchroll;

	for (int i = 0; i < 5; i++)
	{
		if (rollno[i] == searchroll)
		{
			cout<<"Student Found!";
			return 0;
		}
	}
	cout<<"Student Not Found!";
	return 0;
}
