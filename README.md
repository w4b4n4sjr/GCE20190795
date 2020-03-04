# GCE20190795
This repository contains the code for the task 3 of GCE June 2019 as written by my Student <b>ENEMBE Verine ICHUMBEI</b> and Supervised by me, <b>Theophilus WABA NASALI</b>
<h2>Stating the problem</h2>
The student is expected to implement in a Programming Language(PL), a program to fill an NxN two-dimensional array in spiral pattern. The student is expected to show proof of modularity by implementing four procedures:
<ul>
  <li>FillRowForward(A, top, left, right, z)</li>
  <li>FillRowBackward(A, bottom, left, right, z)</li>
  <li>FillColumnDownward(A, top, bottom, right, z)</li>
  <li>FillColumnUpward(A, top, bottom, left, z)</li>
</ul>
That respectively:
<ol>
  <li>
    take the array A, the top, left and right as parameters and iterates through top row from left to right to fill the row. z is a number     between 1 and N*N as stated in the algorithm
  </li>
  <li>
    take the array A, the bottom, left and right as parameters and iterates through bottom row from right to left to fill the row. z is a number between 1 and N*N as stated in the algorithm
  </li>
  <li>
    take the array A, the top, bottom and right as parameters and iterates through right column from top to bottom to fill the column. z is a number     between 1 and N*N as stated in the algorithm
  </li>
  <li>
    take the array A, the top, bottom and left as parameters and iterates through left column from bottom to top to fill the column. z is a number     between 1 and N*N as stated in the algorithm
  </li>
</ol>
<h2>How to run the code in Pelles C</h2>
