# Cheapest Flights Within K Stops
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">There are&nbsp;<code>n</code>&nbsp;cities and m edges connected by some number of flights. You are given an array&nbsp;<code>flights</code>&nbsp;where&nbsp;<code>flights[i] = [from<sub>i</sub>, to<sub>i</sub>, price<sub>i</sub>]</code>&nbsp;indicates that there is a flight from the city&nbsp;<code>from<sub>i</sub></code>&nbsp;to city&nbsp;<code>to<sub>i</sub></code>&nbsp;with cost&nbsp;<code>price<sub>i</sub></code>.</span></p>
<p><span style="font-size: 18px;">You are also given three integers&nbsp;<code>src</code>,&nbsp;<code>dst</code>, and&nbsp;<code>k</code>, return&nbsp;<em><strong>the cheapest price</strong>&nbsp;from&nbsp;</em><code>src</code><em>&nbsp;to&nbsp;</em><code>dst</code><em>&nbsp;with at most&nbsp;</em><code>k</code><em>&nbsp;stops.&nbsp;</em>If there is no such route, return<em>&nbsp;</em><code>-1</code>.</span></p>
<p>&nbsp;</p>
<pre class="reportedIssues_issueDesc__CxR6S" style="box-sizing: inherit; font-family: inherit; font-size: 14px; min-height: 50%; word-break: break-all; white-space: break-spaces; color: rgba(0, 0, 0, 0.87); background-color: #ffffff;"><span style="font-size: 14pt;"><strong>Note</strong>: The price from city A to B may be different From price from city B to A. </span></pre>
<pre><span style="font-size: 18px;"><strong>Example 1:</strong>
Input:
n = 4
flights = [[0,1,100],[1,2,100],[2,0,100],[1,3,600],[2,3,200]]
src = 0
dst = 3
k = 1
Output:
700
Explanation:
</span><span style="font-size: 18px;">The optimal path with at most 1 stop from city 0 to 3 is marked in red and has cost 100 + 600 = 700.
Note that the path through cities [0,1,2,3] is cheaper but is invalid because it uses 2 stops.
</span>
</pre>
<p><span style="font-size: 18px;"><strong>Constraint:</strong><br><code>1 &lt;= n &lt;= 100<br>
0 &lt;= flights.length &lt;= (n * (n - 1) / 2)<br>
flights[i].length == 3<br>
0 &lt;= from<sub>i</sub>, to<sub>i</sub>&nbsp;&lt; n<br>
from<sub>i</sub>&nbsp;!= to<sub>i</sub><br>
1 &lt;= price<sub>i</sub>&nbsp;&lt;= 10<sup>4</sup></code><br>There will not be any multiple flights between the two cities.<br><code>0 &lt;= src, dst, k &lt; n<br>
src != dst</code></span></p></div>