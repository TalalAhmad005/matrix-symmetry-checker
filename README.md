# matrix-symmetry-checker

Here's a suggestion for a comprehensive README for your matrix symmetry checker project:

Matrix Symmetry Checker
Overview
This C++ program checks whether a given square matrix is symmetric or skew-symmetric. A matrix is symmetric if it is equal to its transpose, and skew-symmetric if the matrix is the negative of its transpose. The program takes a square matrix as input, processes its elements, and outputs whether the matrix is symmetric, skew-symmetric, or neither.

Features
Symmetry Check: Determines if the matrix is symmetric (i.e., 
𝐴
=
𝐴
𝑇
A=A 
T
 ).
Skew-Symmetry Check: Determines if the matrix is skew-symmetric (i.e., 
𝐴
=
−
𝐴
𝑇
A=−A 
T
 ).
Handles any size of square matrices (n x n).
Provides error handling for non-square matrices.
How It Works
The program prompts the user to input the matrix size.
It then requests the user to input the matrix elements.
The program computes the transpose of the matrix and compares it with the original matrix.
Based on the comparison, the program outputs whether the matrix is:
Symmetric,
Skew-symmetric, or
Neither.
