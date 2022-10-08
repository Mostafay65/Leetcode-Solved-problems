<h2><a href="https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/">1828. Queries on Number of Points Inside a Circle</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">points</code> where <code style="user-select: auto;">points[i] = [x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>]</code> is the coordinates of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> point on a 2D plane. Multiple points can have the <strong style="user-select: auto;">same</strong> coordinates.</p>

<p style="user-select: auto;">You are also given an array <code style="user-select: auto;">queries</code> where <code style="user-select: auto;">queries[j] = [x<sub style="user-select: auto;">j</sub>, y<sub style="user-select: auto;">j</sub>, r<sub style="user-select: auto;">j</sub>]</code> describes a circle centered at <code style="user-select: auto;">(x<sub style="user-select: auto;">j</sub>, y<sub style="user-select: auto;">j</sub>)</code> with a radius of <code style="user-select: auto;">r<sub style="user-select: auto;">j</sub></code>.</p>

<p style="user-select: auto;">For each query <code style="user-select: auto;">queries[j]</code>, compute the number of points <strong style="user-select: auto;">inside</strong> the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> circle. Points <strong style="user-select: auto;">on the border</strong> of the circle are considered <strong style="user-select: auto;">inside</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">an array </em><code style="user-select: auto;">answer</code><em style="user-select: auto;">, where </em><code style="user-select: auto;">answer[j]</code><em style="user-select: auto;"> is the answer to the </em><code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code><em style="user-select: auto;"> query</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/25/chrome_2021-03-25_22-34-16.png" style="width: 500px; height: 418px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[1,3],[3,3],[5,3],[2,2]], queries = [[2,3,1],[4,3,1],[1,1,2]]
<strong style="user-select: auto;">Output:</strong> [3,2,2]
<b style="user-select: auto;">Explanation: </b>The points and circles are shown above.
queries[0] is the green circle, queries[1] is the red circle, and queries[2] is the blue circle.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/25/chrome_2021-03-25_22-42-07.png" style="width: 500px; height: 390px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[1,1],[2,2],[3,3],[4,4],[5,5]], queries = [[1,2,2],[2,2,2],[4,3,2],[4,3,3]]
<strong style="user-select: auto;">Output:</strong> [2,3,2,4]
<b style="user-select: auto;">Explanation: </b>The points and circles are shown above.
queries[0] is green, queries[1] is red, queries[2] is blue, and queries[3] is purple.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= points.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">points[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= x<sub style="user-select: auto;">​​​​​​i</sub>, y<sub style="user-select: auto;">​​​​​​i</sub> &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= queries.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">queries[j].length == 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= x<sub style="user-select: auto;">j</sub>, y<sub style="user-select: auto;">j</sub> &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= r<sub style="user-select: auto;">j</sub> &lt;= 500</code></li>
	<li style="user-select: auto;">All coordinates are integers.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up:</strong> Could you find the answer for each query in better complexity than <code style="user-select: auto;">O(n)</code>?</p>
</div>