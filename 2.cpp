#include<iostream>
using namespace std;
string checkMatrixSymmetry(int** matrix, const int rows, const int cols);
string checkMatrixSkewSymmetry(int** matrix, const int rows, const int cols);
int main()
{
	int rows = 0, cols = 0;
	cout << "Enter the number of rows:";
	cin >> rows;
	cout << "Enter the number of columns:";
	cin >> cols;
	while (cols != rows)
	{
		cout << "In square matrix number of columns should be equal to number of rows. Please enter number of column again:";
		cin >> cols;
	}
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}
	cout << "Enter Elements of matrix:\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}
	cout << "The matrix is:\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << checkMatrixSymmetry(matrix, rows, cols)<<"\n";
	cout << checkMatrixSkewSymmetry(matrix, rows, cols);
	for (int i = 0; i < rows; i++)
	{
		delete[]matrix[i];
	}
	delete[]matrix;
	matrix = NULL;
}
string checkMatrixSymmetry(int** matrix, const int rows, const int cols)
{
	string ans1 = "It is not symmetric";
	string ans2 = "It is symmetric";

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] == matrix[j][i])
			{
				continue;
			}
			else
			{
				return ans1;
			}
		}
	}
	return ans2;
}
string checkMatrixSkewSymmetry(int** matrix, const int rows, const int cols)
{
	string ans1 = "It is not skew symmetric";
	string ans2 = "It is skew symmetric";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] == -matrix[j][i])
			{
				continue;
			}
			else
			{
				return ans1;
			}
		}
	}
	return ans2;
}