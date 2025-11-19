#include <iostream>
using namespace std;
int main()
{
	int data[10]= {3,1,2,3,1,0,5,2,0};
	int elemen, min;
	min = data[0];
	for(elemen=0;elemen<=9;elemen++)
{
	if (data[elemen]<min) min = data[elemen];
	else min =min;
}
	cout << "Nilai Terkecil Pada NIM 312310520 : " << min;
	return 0;
}
