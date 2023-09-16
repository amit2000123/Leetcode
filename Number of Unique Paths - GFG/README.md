# Number of Unique Paths
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a <strong>A&nbsp;X B</strong> matrix with your initial position at the top-left cell, find the number of possible unique paths to reach the bottom-right cell of the matrix from the initial position.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> Possible moves can be either <strong>down </strong>or <strong>right </strong>at any point in time, i.e., we can move to matrix[i+1][j] or matrix[i][j+1] from matrix[i][j].</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>A = 2, B = 2
<strong>Output: </strong>2<strong>
Explanation:</strong> There are only two unique
paths to reach the end of the matrix of
size two from the starting cell of the
matrix.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>A = 3, B = 4
<strong>Output: </strong>10<strong>
Explanation:</strong> There are only 10 unique
paths to reach the end of the matrix of
size two from the starting cell of the
matrix.</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">Complete <strong>NumberOfPath()&nbsp;</strong>function which takes 2 arguments(A and B) and returns the number of unique paths from top-left to the bottom-right cell.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(A*B).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(A*B).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ A ≤ 16<br>
1 ≤ B ≤ 16</span></p>
</div>