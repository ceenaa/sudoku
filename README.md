# Sudoku
Program to solve 9*9 sudoku table with backtracking algorithm.

# Executing program

the input must include 9 lines, each lines must have 9 numbers between 0 and 9. <br/>
number j in line i is the (i, j) cell in the table. <br/>
**empty cell must be shown with 0**  and the other cell must be filled with 1 to 9. <br/>
if the table has any possible answer the output is just like the input with this diffrence that the empty cells has been replaced with numbers that matches the ansewr.
And if there is no possible answer the output would be "No solution exists".

# Sample input/output

input: <br/>
3 0 6 5 0 8 4 0 0 <br/>
5 2 0 0 0 0 0 0 0 <br/>
0 8 7 0 0 0 0 3 1 <br/>
0 0 3 0 1 0 0 8 0 <br/>
9 0 0 8 6 3 0 0 5 <br/>
0 5 0 0 9 0 6 0 0 <br/>
1 3 0 0 0 0 2 5 0 <br/>
0 0 0 0 0 0 0 7 4 <br/>
0 0 5 2 0 6 3 0 0 <br/>
<br/>
output: <br/>
3 1 6 5 7 8 4 9 2 <br/>
5 2 9 1 3 4 7 6 8 <br/>
4 8 7 6 2 9 5 3 1 <br/>
2 6 3 4 1 5 9 8 7 <br/>
9 7 4 8 6 3 1 2 5 <br/>
8 5 1 7 9 2 6 4 3 <br/>
1 3 8 9 4 7 2 5 6 <br/>
6 9 2 3 5 1 8 7 4 <br/>
7 4 5 2 8 6 3 1 9 <br/>
<br/>
input : <br/>
4 0 0 5 0 2 9 0 8 <br/>
9 0 1 0 8 7 0 0 0 <br/>
0 8 0 0 0 0 0 0 0 <br/>
0 0 4 2 0 9 8 0 0 <br/>
0 0 2 1 5 4 3 9 0 <br/>
0 0 9 0 6 3 0 5 2 <br/>
2 4 0 0 0 0 0 8 9 <br/>
1 0 0 3 7 0 0 2 0 <br/>
3 9 0 4 0 5 1 0 0 <br/>

output:
No solution exists

# Author
  Sina Moradi
