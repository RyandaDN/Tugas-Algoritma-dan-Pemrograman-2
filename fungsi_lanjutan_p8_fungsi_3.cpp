#include<iostream>
void tukar(int,int);
void main(void)
{
	int A, B;
	cout<<"A = "; cin>>A;
	cout<<"B = "; cin>>B; cout<<endl;
	cout<<"Sebelum ditukar"<<endl;
	cout<<"A = "; cin>>A;
	cout<<"B = "; cin>>B; cout<<endl;
	tukar(A,B);
	cout<<"Setelah ditukar"<<endl;
	cout<<"A = "; cin>>A;
	cout<<"B = "; cin>>B;
}

void tukar(int A, int B)
{
	int C;
	C=B;
	B=A;
	A=C;
}
