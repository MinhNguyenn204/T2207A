#include<iostream>
#include<math.h>


int main()
{
	int a,b,c;
	float p,dientich,chuvi;
	cout<<"nhap a"<<endl;
	cin>>a;
	cout<<"nhap b"<<endl;
	cin>>b;
	cout<<"nhap c"<<endl;
	cin>>c;
	p=(a+b+c)/2;
	if((a+b>c)&&(a+c>b)&&(b+c>a)&&(a>0)&&(b>0)&&(c>0))
	{
          cout<<"dien tich tan giac= "<<sqrt(p*(p-a)*(p-b)*(p-c))<<"\n";
	  cout<<"chu vi tam giac= "<<a+b+c<<"\n";
	}
	return 0;
}
