#include<iostream>
#include<vector>
using namespace std;

class Matrix
{
	int rows;
	int columns;
	vector<vector<int> >matrix;
    public:
	Matrix(int _rows, int _columns) :rows(_rows), columns(_columns),
		matrix(rows, vector<int>(columns)){}
	int getRows() {return rows;}
	int getColumns() {return columns;}
	void setElemnt(int i, int j){
		cout << "Enter a value for position ["<<i<<"]["<<j<<"]: ";
		cin >> matrix[i][j];
	}
	friend Matrix operator+(Matrix& x, Matrix& y);
	friend Matrix operator*(Matrix& x, Matrix& y);
	void Display(){
		for (int i = 0; i < rows; i++){
			for (int j = 0; j <columns; j++) cout<<matrix[i][j]<<" ";
			cout << endl;
		}
	}
};

Matrix operator+(Matrix& x, Matrix& y){
	Matrix temp(x.rows,x.columns);
	for (int i = 0; i < x.rows; i++){
		for (int j = 0; j < x.columns; j++){
			temp.matrix[i][j] = x.matrix[i][j] + y.matrix[i][j];
		}
	}
	return temp;
}
Matrix operator*(Matrix& x, Matrix& y)
{
	Matrix temp(x.rows, x.columns);
	for (int i = 0; i < x.rows; i++){
		for (int j = 0; j < x.columns; j++){
			temp.matrix[i][j] = x.matrix[i][j] * y.matrix[i][j];
		}
	}
	return temp;
}

int main()
{
	int r, c;
	cout << "Enter the number of rows: ";
	cin >> r;
	cout << "Enter the number of columns: ";
	cin >> c;
	Matrix a(r,c);
	cout << "Enter elements for the first matrix:\n";
	for (int i = 0; i < a.getRows(); i++) for (int j = 0; j < a.getColumns(); j++) a.setElemnt(i, j);
	a.Display();

	Matrix b(r, c);
	cout << "Enter elements for the second matrix:\n";
	for (int i = 0; i < b.getRows(); i++) for (int j = 0; j < b.getColumns(); j++) b.setElemnt(i, j);
	b.Display();
	cout << "\nAddition:\n";
	Matrix add = a + b;
	add.Display();
	Matrix mul = a*b;
	cout << "\nMultiplication:\n";
	mul.Display();
}
