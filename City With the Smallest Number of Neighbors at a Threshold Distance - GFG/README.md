# City With the Smallest Number of Neighbors at a Threshold Distance
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">There are n&nbsp;cities numbered from 0&nbsp;to n-1. Given the array edges&nbsp;where <strong>edges[i] = [from<sub>i&nbsp;</sub>, to<sub>i ,</sub>weight<sub>i</sub>]<sub>&nbsp;</sub></strong>&nbsp;represents a bidirectional and weighted edge between cities from<sub>i</sub>&nbsp;and to<sub>i</sub>, and given the integer distance Threshold. You need to find out a city&nbsp;with the smallest number of cities that are reachable through some path and whose distance is&nbsp;<strong>at most</strong>&nbsp;Threshold Distance, If there are multiple such cities, our answer will&nbsp;be the city with the greatest number.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> that the distance of a path connecting cities&nbsp;<em><strong>i</strong></em>&nbsp;and&nbsp;<em><strong>j</strong></em>&nbsp;is equal to the sum of the edges' weights along that path.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong>
<span style="font-size: 18px;">N=4,M=4</span>
<span style="font-size: 18px;">edges = [[0,1,3],[1,2,1],[1,3,4],[2,3,1]]</span>
<span style="font-size: 18px;">distanceThreshold = 4</span>
<strong><span style="font-size: 18px;">Output:</span></strong><span style="font-size: 18px;">3</span>
<strong><span style="font-size: 18px;">Explaination:<br><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/711146/Web/Other/db9aa4c2-8a65-4b18-b6ad-7034096be600_1684840736.png" width="305" height="296"><br></span></strong><span style="font-size: 18px;">The neighboring cities at a distanceThreshold = 4 for each city are:
City 0 -&gt; [City 1, City 2]&nbsp;
City 1 -&gt; [City 0, City 2, City 3]&nbsp;
City 2 -&gt; [City 0, City 1, City 3]&nbsp;
City 3 -&gt; [City 1, City 2]&nbsp;
Cities 0 and 3 have 2 neighboring cities at a distanceThreshold = 4, but we have to return city 3 since it has the greatest number.</span>
</pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong><br><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>findCity( )&nbsp;</strong>which takes a No of nodes N and vector of edges and ThresHold Distance. and Return the city with the smallest number of cities that are reachable through some path and whose distance is&nbsp;<strong>at most</strong>&nbsp;Threshold Distance, If there are multiple such cities, return the city with the greatest number.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(V^2 + EVlogV)</span><br><span style="font-size: 18px;"><strong>Expected Auxiliary Space:&nbsp;&nbsp;</strong>O(N^3)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N≤ 100<br>1 &lt;= edges.length &lt;= n*(n-1)/2<br>edges[i].length == 3<br>0 &lt;= from<sub>i&nbsp;</sub>&lt; to<sub>i</sub>&nbsp;&lt; n<br>1 &lt;= weight<sub>,&nbsp;</sub>distanceThreshold &lt;= 10^4<br>All pairs (from<sub>i</sub>, to<sub>i</sub>) are distinct</span></p></div>