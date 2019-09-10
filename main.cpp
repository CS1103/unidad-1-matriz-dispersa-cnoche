#include<iostream>

#include <cmath>
#include <cstdio>
#include <iostream>
#include "matriz.h"
using namespace std;
int main(){
	matrix()
	cout<<"Ingrese cantidad de datos;"endl;
	cin>>n;
	matrixf();
	matrixp();

	m2=[0,0,0,3,0,0,0,0,0,0;
		0,2,5,3,0,0,0,0,0,0;
		0,0,0,3,0,0,5,0,0,0;
		0,1,0,0,0,7,0,0,0,0;
		0,0,5,0,0,0,0,6,0,0;
		0,0,0,0,0,3,0,2,0,0;
		0,0,0,3,0,0,8,0,0,0;
		0,0,0,0,0,0,0,0,0,0;
		0,0,0,0,0,0,0,7,0,0;
		0,0,0,3,1,0,0,0,0,0;];

	sum(m2);
	multp(m2);
	transpose();
	scalar(3);	

}
