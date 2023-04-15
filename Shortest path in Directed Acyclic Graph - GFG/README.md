# Shortest path in Directed Acyclic Graph
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a Directed Acyclic Graph of N vertices from 0 to N-1 and a 2D Integer array(or vector) edges[ ][ ] of length M, where there is a directed edge from edge[i][0] to edge[i][1] with a distance of edge[i][2] for all i, 0&lt;=i</span></p>

<p><span style="font-size:18px">Find the <strong>shortest</strong> path from <strong>src(0) </strong>vertex&nbsp;to all the vertices&nbsp;and if it is impossible to reach any vertex, then return&nbsp;<strong>-1</strong> for that vertex.</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 6, m= 7
edge=[[0,1,2],[0,4,1],[4,5,4]
,[4,2,2],[1,2,3],[2,3,6],[5,3,1]]

<strong>Output:</strong>
0 2 3 6 1 5</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong></span></p>

<p><span style="font-size:18px">You don't need to print or input anything. Complete the function <strong>shortest path()</strong>&nbsp;which takes an integer N as number of vertices, an integer M as number of edges and a&nbsp;2D Integer array(or vector)&nbsp;edges as the input parameters and returns an <strong>integer array(or vector)</strong>, denoting&nbsp;the list&nbsp;of distance from src to all nodes.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraint:</strong></span></p>

<ul>
	<li><span style="font-size:18px">1 &lt;= n,m &lt;= 100</span></li>
	<li><span style="font-size:18px">0 &lt;= edge<sub>i,0</sub>,edge<sub>i,1</sub>&nbsp;&lt;&nbsp;n</span><br>
	&nbsp;</li>
</ul>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N+E), where N is the number of nodes and E is edges</span></p>

<p><span style="font-size:18px"><strong>Expected Space Complexity:&nbsp;</strong>O(N)</span></p>

<p>&nbsp;</p>
</div>