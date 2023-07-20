# Number of Ways to Arrive at Destination
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are in a city that consists of&nbsp;<code>n</code>&nbsp;intersections numbered from&nbsp;<code>0</code>&nbsp;to&nbsp;<code>n - 1</code>&nbsp;with&nbsp;<strong>bi-directional</strong>&nbsp;roads between some intersections. The inputs are generated such that you can reach any intersection from any other intersection and that there is at most one road between any two intersections.</span></p>

<p><span style="font-size:18px">You are given an integer&nbsp;<code>n</code>&nbsp;and a 2D integer array&nbsp;<code>roads</code>&nbsp;where&nbsp;<code>roads[i] = [u<sub>i</sub>, v<sub>i</sub>, time<sub>i</sub>]</code>&nbsp;means that there is a road between intersections&nbsp;<code>u<sub>i</sub></code>&nbsp;and&nbsp;<code>v<sub>i</sub></code>&nbsp;that takes&nbsp;<code>time<sub>i</sub></code>&nbsp;minutes to travel. You want to know in how many ways you can travel from intersection&nbsp;<code>0</code>&nbsp;to intersection&nbsp;<code>n - 1</code>&nbsp;in the&nbsp;<strong>shortest amount of time</strong>.</span></p>

<p><span style="font-size:18px">Return&nbsp;<em>the&nbsp;<strong>number of ways</strong>&nbsp;you can arrive at your destination in the&nbsp;<strong>shortest amount of time</strong></em>. Since the answer may be large, return it&nbsp;<strong>modulo</strong>&nbsp;<code>10<sup>9</sup>&nbsp;+ 7</code>.</span></p>

<p><span style="font-size:18px">Example 1:</span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n=7, m=10
edges= [[0,6,7],[0,1,2],[1,2,3],[1,3,3],[6,3,3],[3,5,1],[6,5,1],[2,5,1],[0,4,5],[4,6,2]]</span>

<span style="font-size:18px"><strong>Output:</strong>
4
Explaination:</span>

<span style="font-size:18px">The four ways to get there in 7 minutes are:
- 0  6
- 0  4  6
- 0  1  2  5  6
- 0  1  3  5  6</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px">Example 2:</span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n=6, m=8
edges= [[0,5,8],[0,2,2],[0,1,1],[1,3,3],[1,2,3],[2,5,6],[3,4,2],[4,5,2]]</span>

<span style="font-size:18px"><strong>Output:</strong>
3
Explaination:</span>

<span style="font-size:18px">The three ways to get there in 8 minutes are:
- 0  5
- 0  2  5
- 0  1  3  4  5
</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
<code>1 &lt;= n &lt;= 200<br>
n - 1 &lt;= roads.length &lt;= n * (n - 1) / 2<br>
roads[i].length == 3<br>
0 &lt;= u<sub>i</sub>, v<sub>i</sub>&nbsp;&lt;= n - 1<br>
1 &lt;= time<sub>i</sub>&nbsp;&lt;= 10<sup>9</sup><br>
u<sub>i&nbsp;</sub>!= v<sub>i</sub></code><br>
There is at most one road connecting any two intersections.<br>
You can reach any intersection from any other intersection.<br>
<br>
Expected Time Complexity:&nbsp;O(M * logN + N)<br>
Expected Space Complexity: O(M+N)</span></p>
</div>