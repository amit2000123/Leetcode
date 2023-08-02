# Maximum Stone Removal
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There are&nbsp;<strong>n</strong>&nbsp;stones at some integer coordinate points on a 2D plane. Each coordinate point may have at most one stone.</span></p>

<p><span style="font-size:18px">You need to remove some stones.&nbsp;</span></p>

<p><span style="font-size:18px">A stone can be removed if it shares either&nbsp;the same row or the same column&nbsp;as another stone that has not been removed.</span></p>

<p><span style="font-size:18px">Given an array&nbsp;stones&nbsp;of length&nbsp;<strong>n</strong>&nbsp;where&nbsp;<strong>stones[i] = [xi, yi]</strong>&nbsp;represents the location of the<strong>&nbsp;ith</strong>&nbsp;stone, return&nbsp;the <strong>maximum</strong> possible number of stones that you can remove.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<div style="background:#eee;border:1px solid #ccc;padding:5px 10px;"><span style="font-size:18px"><strong>Input:</strong><br>
n=6<br>
[[0 0] ,[ 0 1], [1 0] ,[1 2] ,[2 1] ,[2 2]]<br>
<br>
<strong>Output:</strong><br>
5<br>
<br>
<strong>Example:</strong><br>
One way to remove 5 stones are<br>
1--[0,0]<br>
2--[1,0]<br>
3--[0,1]<br>
4--[2,1]<br>
5--[1,2]</span></div>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong></span></p>

<p><span style="font-size:18px">You don't need to print or input anything. Complete the function <strong>maxRemove()&nbsp;</strong>which takes an integer array&nbsp;arr, an integer&nbsp;n&nbsp;as the input parameters and returns an integer, denoting the maximum number of stones that can be removed.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N+K)</span></p>

<p><span style="font-size:18px"><strong>Expected Space Complexity:&nbsp;</strong>O(K)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1 &lt;= n &lt;=1000<br>
0 &lt;= x[i], y[i]&lt;= 10<sup>4</sup><br>
No two stones are at same position.</span></p>
</div>