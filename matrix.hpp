#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#endif //MATRIX_MATRIX_H
class matrix{
	private{
		int** matrix;
		int row;
		int clm;
		int val;
	}
	public{
		matrix();
		matrix(int*,int*);

		virtual ~matrix() = default; // destructor

		void matrixf(const &matrix); //llenar la matriz
		void matrixp(const &matrix); // print la mtriz

		void scalar(int); // mult por escalar	
		void sum(const &matrix, const &matrix); // suma de matrices
		void transpose(const &matrix); // transposicion
		void mult(const &matrix, const &matrix); // multiplicacion de matrices

		bool verf(const &matrix, const &matrix); // verificación para sumas y multiplicaciones

	}
}