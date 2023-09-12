# Majority Vote
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given a list of integers nums&nbsp;where each number represents a vote to a candidate. Return the ids of the candidates that have greater than <strong>n/3</strong> votes,&nbsp;If there's not a majority vote, return -1.&nbsp;</span></p>

<pre><span style="font-size:18px"><strong>Example 1:
Input:
</strong>n =<strong> </strong>11<strong>
</strong>nums = [</span><span style="font-size:18px">2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6]
<strong>Output:
</strong>[5,6]
<strong>Explanation:</strong>
5 and 6 occur more n/3 times.</span></pre>

<p>&nbsp;</p>

<pre><span style="font-size:18px"><strong>Example 2:
Input:
</strong>n=5
nums = [1,2,3,4,5]
<strong>Output:</strong>
[-1]</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function <strong>Solve()&nbsp;</strong>which takes a integer n denoting a number of element and a list of numbers and return the list of number which occur more than n/3 time.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(n)<br>
<strong>Expected Space Complexity: </strong>O(1)</span></p>

<p><strong><span style="font-size:18px">Constraint:</span></strong><br>
<span style="font-size:18px">1 &lt;=&nbsp; n&nbsp; &lt;= 5 * 10<sup>4</sup><br>
-10<sup>9</sup>&nbsp;&lt;= nums[i] &lt;= 10<sup>9</sup></span></p>
</div>