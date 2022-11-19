#include<iostream>
float F(float x, float y);
void main()
{
	float x, y, Hasil;
	cout<<"x = "; cin>>x; cout<<"y = "; cin>>y;
	Hasil=F(x,y);
	cout<<x<<endl; cout<<y<<endl; cout<<Hasil<<endl;
}

float F(float A, float B)
{
	float H;
	H=9*A+2*B; //3+6
	return H;
}
