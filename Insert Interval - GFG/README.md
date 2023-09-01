# Insert Interval
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek has&nbsp;an array of <strong>N </strong>non-overlapping intervals&nbsp;<strong><code>intervals</code>&nbsp;</strong>where&nbsp;<code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code>&nbsp;represent the start and the end of the&nbsp;<code>i<sup>th</sup></code>&nbsp;event and&nbsp;<strong><code>intervals</code>&nbsp;</strong>is sorted in ascending order by&nbsp;<strong><code>start<sub>i</sub></code></strong>. He wants to add a new interval <strong>newEvent </strong>=&nbsp;<strong><code>[newStart, newEnd]</code>&nbsp;</strong>where newStart and newEnd represent the start and end of this interval.</span></p>

<p><span style="font-size:18px">Help Geek to insert&nbsp;<strong>newEvent </strong>into&nbsp;<strong><code>intervals</code>&nbsp;</strong>such that&nbsp;<strong><code>intervals</code>&nbsp;</strong>is still sorted in ascending order by&nbsp;<code>start<sub>i</sub></code>&nbsp;and&nbsp;<strong><code>intervals</code>&nbsp;</strong>still does not have any overlapping intervals (merge overlapping intervals if necessary).</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
intervals = [[1,3], [10,15], [20,30]]
newEvent  = [5,6]
<strong>Output: </strong>[[1,3], [5,6], [10,15], [20,30]]
<strong>Explanation: </strong>The newEvent (5, 6) does not overlap with any of the existing ranges, hence it is added </span>
<span style="font-size:18px">to the intervals list maintaining the sorted order of start times.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]]
newEvent  = [5,10]
<strong>Output: </strong>[[1,2], [3,10], [12,16]]
<strong>Explanation: </strong>Because the new interval [5,10] overlaps with [3,5],[6,7],[8,10].</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>insertNewEvent()</strong>&nbsp;which takes <strong>N</strong>, the list of <strong>intervals </strong>and <strong>newEvent </strong>as input and returns the final list of intervals after inserting the newEvent in the original list.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤&nbsp; 10<sup>4</sup><br>
0 ≤ start[i], end[i]&nbsp;≤ 10<sup>9</sup></span></p>
</div>