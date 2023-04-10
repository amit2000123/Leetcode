# Check if two arrays are equal or not
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two arrays <strong>A</strong> and <strong>B</strong> of equal size <strong>N</strong>, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.<br>
<strong>Note :</strong>&nbsp;If there are repetitions, then counts of repeated elements must also be same for two array to be equal.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
A[] = {1,2,5,4,0}
B[] = {2,4,5,0,1}
<strong>Output: </strong>1<strong>
Explanation: </strong>Both the array can be 
rearranged to {0,1,2,4,5}</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
A[] = {1,2,5}
B[] = {2,4,15}
<strong>Output: </strong>0<strong>
Explanation: </strong>A[] and B[] have only 
one common value.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete&nbsp;<strong>check() </strong>function which takes both the given array and their size as function arguments and returns <strong>true</strong> if the arrays are equal else <strong>returns false</strong>.The 0 and 1 printing is done by the driver code.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity </strong>: O(N)<br>
<strong>Expected Auxilliary Space</strong> : O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=10<sup>7</sup><br>
1&lt;=A[],B[]&lt;=10<sup>18</sup></span></p>

<p>&nbsp;</p>
</div>