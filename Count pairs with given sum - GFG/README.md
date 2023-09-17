# Count pairs with given sum
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array&nbsp;of <strong>N</strong> integers, and an integer&nbsp;<strong>K</strong>, find the number of pairs of elements&nbsp;in the array whose sum is equal to <strong>K</strong>.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4, K = 6
arr[] = {1,&nbsp;5,&nbsp;7, 1}
<strong>Output:</strong> 2
<strong>Explanation:</strong> 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4, K = 2
arr[] = {1, 1, 1, 1}
<strong>Output:</strong> 6
<strong>Explanation:</strong>&nbsp;
Each 1 will produce sum 2 with any 1.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>getPairsCount()</strong>&nbsp;which takes&nbsp;<strong>arr[],</strong>&nbsp;<strong>n</strong>&nbsp;and&nbsp;<strong>k&nbsp;</strong>as input parameters and returns the number of pairs that have sum K.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)<br>
<br>
<strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= K &lt;= 10<sup>8</sup><br>
1 &lt;= Arr[i] &lt;= 10<sup>6</sup></span></p>

<p>&nbsp;</p>
</div>