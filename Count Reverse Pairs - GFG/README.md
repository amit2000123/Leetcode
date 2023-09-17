# Count Reverse Pairs
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array of <strong>N </strong>integers <strong>arr</strong>, find&nbsp;the count of reverse pairs.&nbsp;</span></p>

<p><span style="font-size:18px">A pair of indices (i, j) is said to be a&nbsp;<strong>reverse pair</strong>&nbsp;if both the following conditions are met:</span></p>

<ul>
	<li><span style="font-size:18px"><code>0 &lt;= i &lt; j &lt; N</code>&nbsp;</span></li>
	<li><span style="font-size:18px"><code>arr[i] &gt; 2 * arr[j]</code></span></li>
</ul>

<h4><span style="font-size:18px"><strong>Example 1</strong>:</span></h4>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 6
arr = [3, 2, 4, 5, 1, 20]
<strong>Output</strong>:
3
<strong>Explanation</strong>:
The Reverse pairs are 
(i)  (0, 4), arr[0] = 3, arr[4] = 1, 3 &gt; 2(1) 
(ii) (2, 4), arr[2] = 4, arr[4] = 1, 4 &gt; 2(1) 
(iii)(3, 4), arr[3] = 5, arr[4] = 1, 5 &gt; 2(1) </span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2</strong>:</span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
N = 5
arr= [2, 4, 3, 5, 1]
<strong>Output</strong>: 
3
<strong>Explanation</strong>: </span>
<span style="font-size:18px">(i)   (1, 4), arr[1] = 4, arr[4] = 1, 4 &gt; 2 * 1
(ii)  (2, 4), arr[2] = 3, arr[4] = 1, 3 &gt; 2 * 1
(iii) (3, 4), arr[3] = 5, arr[4] = 1, 5 &gt; 2 * 1</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>countRevPairs</strong>(), which takes integer a list of N integers as input and returns the<em>&nbsp;</em>count of Reverse Pairs.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(N logN)<br>
<strong>Expected Auxiliary Space</strong>: O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1 &lt;= N &lt;= 50000<br>
1 &lt;= arr[i] &lt;= 10<sup>9</sup></span></p>
</div>