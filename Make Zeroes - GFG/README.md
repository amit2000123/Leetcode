# Make Zeroes
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a matrix&nbsp;of&nbsp; size n x&nbsp;m. Your task is to make Zeroes, that means in whole matrix when you find a zero,&nbsp;convert its upper, lower, left, and right value to zero and make that element the sum of the upper, lower, left and right value. Do the following tasks according to the initial matrix.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>matrix = {{1, 2, 3, 4},
                 {5, 6, 0, 7}, 
&nbsp;                {8, 9, 4, 6},
                 {8, 4, 5, 2}}
<strong>Output:</strong>&nbsp;{{1, 2, 0, 4}, 
&nbsp;        {5, 0, 20, 0},
         {8, 9, 0, 6}, 
&nbsp;        {8, 4, 5, 2}}
<strong>Explanation:</strong>&nbsp;As matrix[1][2] = 0, we will
perform the operation here. Then matrix[1][2]
= matrix[0][2] + matrix[2][2] + matrix[1][1] 
+ matrix[1][3] and matrix[0][2] = matrix[2][2] 
= matrix[1][1] = matrix[1][3] = 0.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>matrix = {{1, 2}, 
&nbsp;                {3, 4}}
<strong>output: </strong>{{1, 2}, 
&nbsp;        {3, 4}}</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>MakeZeros()</strong>&nbsp;which takes the matrix as input parameter and does the given task according to initial matrix. You don't need to return anything. The driver code prints the modified matrix itself in the output.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n * m)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(n * m)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n, m ≤ 100<br>
0 ≤ matrix[i][j] ≤ 100, where 0 ≤ i ≤ n and 0 ≤ j ≤ m</span></p>
</div>