# Prerequisite Tasks
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There are a total of N tasks, labeled from 0 to N-1. Some tasks may have prerequisites, for example to do task 0 you have to first complete task 1, which is expressed as a pair: [0, 1]<br>
Given the total number of <strong>tasks N</strong> and a list of <strong>prerequisite pairs P</strong>, find if it is possible to finish all tasks.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>N = 4, P = 3
prerequisites = {{1,0},{2,1},{3,2}}
<strong>Output:</strong>
Yes
<strong>Explanation</strong>:
To do task 1 you should have completed
task 0, and to do task 2 you should 
have finished task 1, and to do task 3 you 
should have finished task 2. So it is possible.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 2, P = 2
prerequisites = {{1,0},{0,1}}
<strong>Output:</strong>
No
<strong>Explanation</strong>:
To do task 1 you should have completed
task 0, and to do task 0 you should
have finished task 1. So it is impossible.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your task:</strong><br>
You don’t need to read input or print anything. Your task is to complete the function&nbsp;<strong>isPossible()</strong>&nbsp;which takes the integer N denoting the number of tasks, P denoting the number of&nbsp;prerequisite pairs and&nbsp;prerequisite as input parameters and returns true</span>&nbsp;<span style="font-size:18px">if it is possible to finish all tasks otherwise returns false.</span><span style="font-size:18px">&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N + P)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N + P)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>4</sup><br>
1 ≤ P ≤ 10<sup>5</sup></span></p>
</div>