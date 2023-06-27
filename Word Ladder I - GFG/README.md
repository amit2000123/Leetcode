# Word Ladder I
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two distinct words <strong>startWord</strong> and <strong>targetWord</strong>, and a list&nbsp;denoting <strong>wordList</strong>&nbsp;of unique words of equal lengths. Find the length of the shortest transformation sequence from startWord to targetWord.<br>
Keep&nbsp;the following conditions in mind:</span></p>

<ul>
	<li><span style="font-size:18px">A word can only consist of lowercase characters.</span></li>
	<li><span style="font-size:18px">Only one letter can be changed in each transformation.</span></li>
	<li><span style="font-size:18px">Each transformed word must exist in the wordList including the targetWord.</span></li>
	<li><span style="font-size:18px">startWord may or may not be part of the&nbsp;wordList</span></li>
</ul>

<p><span style="font-size:18px">The second part of this problem can be found <a href="https://practice.geeksforgeeks.org/problems/word-ladder-ii/1/">here</a>.</span></p>

<p><span style="font-size:18px"><strong>Note</strong>: If no possible way to&nbsp;transform&nbsp;sequence from startWord to targetWord <strong>return 0</strong></span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
wordList = {"des","der","dfr","dgt","dfs"}
startWord = "der", targetWord= "dfs",
<strong>Output:
</strong>3
<strong>Explanation:
</strong>The length of the smallest transformation
sequence from "der" to "dfs" is 3
i,e "der" -&gt; "dfr" -&gt; "dfs".
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
wordList = {"geek", "gefk"}
startWord = "gedk", targetWord= "geek", 
<strong>Output:
</strong>2
<strong>Explanation:
</strong>gedk -&gt; geek</span></pre>

<p><strong><span style="font-size:18px">Example 3:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
wordList = {"poon", "plee", "same", "poie","plea","plie","poin"}
startWord = "toon", targetWord= "plea",
<strong>Output: </strong>7 
<strong>Explanation:
</strong>toon -&gt; poon -&gt; poin -&gt; poie -&gt; plie -&gt; plee -&gt; plea </span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything, Your task is to complete the function&nbsp;<strong>wordLadderLength()&nbsp;</strong>which takes startWord, targetWord and wordList as input parameter and returns the&nbsp;length of the shortest transformation sequence from startWord to targetWord. If not possible return&nbsp;0.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Compelxity:&nbsp;</strong>O(N<sup>2</sup>&nbsp;* M)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N * M) where N = length of wordList and M = |wordList<sub>i</sub>|</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 100<br>
1 ≤ M ≤ 10</span></p>
</div>