#include <iostream>
#include "matrix.hpp"

matrix::matrix(): matrix{nullptr}, row {0}, clm{0} {

}
matrix::matrix(int row, int clm): row {f}, clm{c} {
    matrix = new int*[row];
    for (int i= 0 ; i < row; i++)
    {
        matrix[i] = new int[clm];
    }
}

void matrix::transpose(const matrix& mx) {
    for (int i = 0; i < mx.row; ++i) {
        for (int j = 0; j < mx.clm; ++j) {
            matrix[i][j] = matrix[j][i];
        }
    }
}

void matrix::matrixf(const matrix& mx){
	cout<<“\n no of rows & columns& elements”;
	cin>>s[0].mx.row;
	cin>>s[0].mx.clm;
	cin>>s[0].mx.val;
	for(int i=1;i<=s[0].v;i++){
		cout<<“\n row & column & element”;
		cin>>s[i].mx.row;
		cin>>s[i].mx.clm;
		cin>>s[i].mx.val;
	}
}

bool matrix::verf(const matrix& m1, const matrix& m2) {
	if (m1.row.length === m2.row.length){
		if(m1.clm.length === m2.clm.length){
			return TRUE;
		}
	}else{
		return FALSE;
	}
}

void matrix::scalar(int n) {
    for (int i = 0; i<row; i++){
        for (int j = 0; j<clm;  j++){
            matrix[i][j]=matrix[i][j]*n;
        }
    }
}

void matrix::matrixp(){
    for(int i = 0 ;i<row;i++){
        for(int j = 0 ;j <clm;j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
}


void matrix::sum(const &matrix m1, const &matrix m2){
	assert(verf(m1, m2));
	for (int i=0; i<row; i++){
            for (int j=0; j<clm; j++){
                matrix[i][j]=m1[i][j]+m2[i][j];
            }
	}
}

void matrix::mult(const &matrix, const &matrix){
	assert(verf(m1, m2));
		for (int i=0; i<row; i++){
	            for (int j=0; j<clm; j++){
	                matrix[i][j]=m1[i][j]*m2[i][j];
	            }
		}
}