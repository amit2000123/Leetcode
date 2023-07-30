# Maximum Connected group
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an <strong>n x n</strong> binary grid. A grid is said to be binary if every value in grid is either <strong>1 or 0.</strong></span></p>

<p><span style="font-size:18px">You can change a<strong>t most one</strong> cell in grid from <strong>0 to 1</strong>.</span></p>

<p><span style="font-size:18px">You need to find the largest group of connected&nbsp; <strong>1's</strong>.</span></p>

<p><span style="font-size:18px">Two cells are said to be connected if both are <strong>adjacent</strong> to each other and both have same value.</span></p>

<p><span style="font-size:18px"><strong>Example 1</strong></span></p>

<div style="background:#eee;border:1px solid #ccc;padding:5px 10px;"><span style="font-size:18px"><strong>Input:</strong><br>
2<br>
1 1<br>
0 1<br>
<br>
<strong>Output:</strong><br>
4<br>
<br>
<strong>Explanation:</strong><br>
By changing cell (2,1) ,we can obtain a connected group of 4&nbsp;1's<br>
1 1<br>
<strong>1</strong> 1</span></div>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2</strong></span></p>

<div style="background:#eee;border:1px solid #ccc;padding:5px 10px;"><span style="font-size:18px"><strong>Input:</strong><br>
3<br>
1 0 1<br>
1 0 1<br>
1 0 1<br>
<br>
<strong>Output:</strong><br>
7<br>
<br>
<strong>Explanation:</strong><br>
By changing cell (3,2) ,we can obtain a connected group of 7 1's<br>
1 0 1<br>
1 0 1<br>
1 <strong>1</strong> 1</span></div>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function <strong>MaxConnection()</strong> which takes a matrix grid[][] denoting the grid and return the maximum group of connected group of 1s.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1 &lt;= n&lt;= 500<br>
0 &lt;= grid[i][j]&nbsp;&lt;= 1</span><br>
&nbsp;</p>
</div>