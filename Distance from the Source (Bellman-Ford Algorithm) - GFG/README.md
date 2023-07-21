# Distance from the Source (Bellman-Ford Algorithm)
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a weighted, directed and connected graph of V vertices and E edges, Find the shortest distance of all the vertex's from the source vertex S.<br><strong>Note: </strong>If the Graph contains a negative cycle then return an array consisting of only -1.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/706218/Web/Other/c8d8b64c-f87e-4b44-ad81-5069e9698985_1685087173.png" alt="">
<strong>E </strong>= [[0,1,9]]
<strong>S </strong>= 0
<strong>Output:</strong>
0 9
<strong>Explanation</strong>:
Shortest distance of all nodes from
source is printed.
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/706218/Web/Other/46db67e8-b4da-46d6-a9ab-604249bea60a_1685087173.png" alt="">
<strong>E</strong> = [[0,1,5],[1,0,3],[1,2,-1],[2,0,1]]
<strong>S </strong>= 2
<strong>Output:</strong>
1 6 0
<strong>Explanation</strong>:
For nodes 2 to 0, we can follow the path-
2-0. This has a distance of 1.
For nodes 2 to 1, we cam follow the path-
2-0-1, which has a distance of 1+5 = 6,
</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>bellman_ford( )</strong>&nbsp;which takes a number of vertices <strong>V</strong><strong> </strong>and<strong> </strong>an<strong> E</strong>-sized list of lists of three integers where the three integers are<strong> u,v</strong>, and <strong>w</strong>; denoting there's an edge from<strong> u to v</strong>, which has a weight of <strong>w</strong> and source node <strong>S</strong>&nbsp;as input parameters and returns a list of integers where the ith integer denotes the distance of an ith node from the source node. </span></p>
<p><span style="font-size: 18px;">If some node isn't possible to visit, then its distance should be 100000000(1e8). Also, If the Graph contains a negative cycle then return an array consisting of only -1.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(V*E).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(V).</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ V ≤ 500<br>1 ≤ E ≤ V*(V-1)<br>-1000 ≤ adj[i][j] ≤ 1000<br>0 ≤ S &lt; V</span></p></div>