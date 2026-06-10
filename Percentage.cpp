#include<iostream>
using namespace std;
int main()
{
	float percent;
	int x;
	cout<<"Enter your percentage:";
	cin>>percent;
	cout<<"You scored "<<percent<<"%"<<endl;
	 x=percent/10;
switch(x)
{
	case 10:
	case 9:
	case 8:
		cout<<"You have passed with Distinction"<<endl;
		break;
	case 7:
	case 6:
		cout<<"You have passed with First division"<<endl;
		break;
	case 5:
		cout<<"You have passed with Second division"<<endl;
		break;
	case 4:
		cout<<"You have passed with Third division"<<endl;
		break;
	default :
		cout<<"Sorry: You have Failed"<<endl;
}
return 0;
}
