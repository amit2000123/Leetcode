# Articulation Point - I
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an undirected connected graph&nbsp;with&nbsp;<strong>V&nbsp;</strong>vertices and adjacency list&nbsp;<strong>adj</strong>. You are required to find all the vertices removing which&nbsp;(and edges through it) disconnects the graph into 2 or more components.<br><strong>Note:&nbsp;</strong>Indexing is zero-based i.e nodes numbering from (0 to V-1). There might be loops present in the graph.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/708502/Web/Other/a27f9040-9783-4386-92f9-b8684c75db07_1685087852.png" alt="">
<strong>Output:</strong>{1,4}
<strong>Explanation: </strong>Removing the vertex 1 will
discconect the graph as-
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/708502/Web/Other/7e12629a-ba31-411e-b6ac-ccf5a8baa6a3_1685087852.png" alt="">
Removing the vertex 4 will disconnect the
graph as-
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/708502/Web/Other/fb781bda-91d6-4920-96a8-c976412c3ada_1685087852.png" alt="">
</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>articulationPoints</strong><strong>()&nbsp;</strong>which takes V and adj as input parameters and returns a list containing all the vertices removing which turn the graph into two or more disconnected components in sorted order. If there are no such vertices then returns a list containing -1.</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(V + E)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(V)</span><br>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ V ≤ 10<sup>5</sup></span></p></div>