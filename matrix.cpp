#include <iostream>
#include "matrix.hpp"

matrix::matrix(): matrix{nullptr}, row {0}, clm{0} {

}
matrix::matrix(int row, int clm): row {row}, clm{clm} {
    matrix = new int*[row];
    for (int i= 0 ; i < row; i++)
    {
        matrix[i] = new int[clm];
    }
}

void matrix::transpose() {
    for (int i = 0; i < this.row; ++i) {
        for (int j = 0; j < this.clm; ++j) {
            this.matrix[i][j] = this.matrix[j][i];
        }
    }
}

void matrix::matrixf(int n){
	this.matrix():row(0),col(0){
		this.matrix.resize(row);
		for (int i=0; i<this.matrix.size(); i++){
			this.matrix[i].resize(col,0);
		}
	}
	for(int k = 0; k<n ;k++){
		int i,j;
		cin>>i;
		cin>>j;
		cin>>val;
		this.matrix[i][j]=val;
	}
}

bool matrix::verf(const matrix& m2) {
	if (this.row.length === m2.row.length && this.clm.length === m2.clm.length){
			return TRUE;
	}else{
		return FALSE;
	}
}

void matrix::scalar(int n) {
    for (int i = 0; i<this.row; i++){
        for (int j = 0; j<this.clm;  j++){
            this.matrix[i][j]=this.matrix[i][j]*n;
        }
    }
}

void matrix::matrixp(){
    for(int i = 0 ;i<this.row;i++){
        for(int j = 0 ;j <this.clm;j++){
            cout<<this.matrix[i][j]<<" ";
        }cout<<endl;
    }
}


void matrix::sum(const &matrix m2){
	assert(verf(m2));
	for (int i=0; i<this.row; i++){
            for (int j=0; j<this.clm; j++){
                this.matrix[i][j]=this.matrix[i][j]+m2[i][j];
            }
	}
}

void matrix::mult(const &matrix m2){
	assert(verf(m2));
		for (int i=0; i<this.row; i++){
	            for (int j=0; j<this.clm; j++){
	                this.matrix[i][j]=this.matrix[i][j]*m2[i][j];
	            }
		}
}
