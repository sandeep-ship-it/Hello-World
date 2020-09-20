---


---

<blockquote>
<p>Written with <a href="https://stackedit.io/">StackEdit</a>.</p>
</blockquote>
<h1 id="working-with-strings">Working with strings</h1>
<p>Today I have decided for working with strings.  I learned the following syntaxes.</p>
<pre class=" language-cpp"><code class="prism  language-cpp">    <span class="token function">isalnum</span><span class="token punctuation">(</span>c<span class="token punctuation">)</span><span class="token punctuation">;</span> <span class="token function">tolower</span><span class="token punctuation">(</span>c<span class="token punctuation">)</span><span class="token punctuation">;</span> 
    unordered_set<span class="token operator">&lt;</span><span class="token keyword">int</span><span class="token operator">&gt;</span> <span class="token function">vowels</span><span class="token punctuation">(</span><span class="token string">'a'</span><span class="token punctuation">,</span> <span class="token string">'e'</span><span class="token punctuation">,</span> <span class="token string">'i'</span><span class="token punctuation">,</span> <span class="token string">'o'</span><span class="token punctuation">,</span> <span class="token string">'u'</span><span class="token punctuation">)</span><span class="token punctuation">;</span>
    <span class="token function">to_string</span><span class="token punctuation">(</span>num<span class="token punctuation">)</span><span class="token punctuation">;</span>
</code></pre>
<p>I am trying to figure out why  I am getting unreasonable answer for the following code</p>
<pre class=" language-cpp"><code class="prism  language-cpp">    <span class="token keyword">int</span> Solution<span class="token operator">::</span><span class="token function">strStr</span><span class="token punctuation">(</span><span class="token keyword">const</span> string A<span class="token punctuation">,</span> <span class="token keyword">const</span> string B<span class="token punctuation">)</span> <span class="token punctuation">{</span>
    <span class="token keyword">if</span><span class="token punctuation">(</span>A<span class="token punctuation">.</span><span class="token function">size</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token operator">==</span> <span class="token number">0</span> <span class="token operator">and</span> B<span class="token punctuation">.</span><span class="token function">size</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token operator">==</span> <span class="token number">0</span><span class="token punctuation">)</span> <span class="token keyword">return</span> <span class="token operator">-</span><span class="token number">1</span><span class="token punctuation">;</span>
    <span class="token keyword">if</span><span class="token punctuation">(</span>A<span class="token punctuation">.</span><span class="token function">size</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token operator">==</span> <span class="token number">0</span> <span class="token punctuation">)</span> <span class="token keyword">return</span> <span class="token operator">-</span><span class="token number">1</span><span class="token punctuation">;</span>
    <span class="token keyword">if</span><span class="token punctuation">(</span>B<span class="token punctuation">.</span><span class="token function">size</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token operator">==</span> <span class="token number">0</span><span class="token punctuation">)</span> <span class="token keyword">return</span> <span class="token operator">-</span><span class="token number">1</span><span class="token punctuation">;</span>
    <span class="token keyword">int</span> i<span class="token punctuation">;</span>
    <span class="token keyword">for</span><span class="token punctuation">(</span> i<span class="token operator">=</span><span class="token number">0</span><span class="token punctuation">;</span>i<span class="token operator">&lt;=</span><span class="token punctuation">(</span>A<span class="token punctuation">.</span><span class="token function">size</span><span class="token punctuation">(</span><span class="token punctuation">)</span> <span class="token operator">-</span> B<span class="token punctuation">.</span><span class="token function">size</span><span class="token punctuation">(</span><span class="token punctuation">)</span><span class="token punctuation">)</span><span class="token punctuation">;</span>i<span class="token operator">++</span><span class="token punctuation">)</span><span class="token punctuation">{</span>
        <span class="token keyword">int</span> flag <span class="token operator">=</span> <span class="token number">1</span><span class="token punctuation">;</span>
        <span class="token keyword">for</span><span class="token punctuation">(</span><span class="token keyword">int</span> j<span class="token operator">=</span><span class="token number">0</span><span class="token punctuation">;</span>j<span class="token operator">&lt;</span>B<span class="token punctuation">.</span><span class="token function">size</span><span class="token punctuation">(</span><span class="token punctuation">)</span><span class="token punctuation">;</span>j<span class="token operator">++</span><span class="token punctuation">)</span><span class="token punctuation">{</span>
            <span class="token keyword">if</span><span class="token punctuation">(</span>B<span class="token punctuation">[</span>j<span class="token punctuation">]</span> <span class="token operator">!=</span> A<span class="token punctuation">[</span>j <span class="token operator">+</span> i<span class="token punctuation">]</span><span class="token punctuation">)</span>  <span class="token punctuation">{</span> flag <span class="token operator">=</span> <span class="token number">0</span><span class="token punctuation">;</span>  <span class="token punctuation">}</span>
        <span class="token punctuation">}</span>
        <span class="token keyword">if</span><span class="token punctuation">(</span>flag<span class="token punctuation">)</span> <span class="token keyword">return</span> i<span class="token punctuation">;</span>
    <span class="token punctuation">}</span>
    <span class="token keyword">return</span> <span class="token operator">-</span><span class="token number">1</span><span class="token punctuation">;</span>
</code></pre>
<h1 id="assignments-for-lab-1">Assignments for Lab 1</h1>
<p>Today I have my first day as lab assistant. I have got many assignments to evaluate.  I have to evaluate between 17MA2038 and 2047.</p>
<p>17MA20037 - 13<br>
17MA20038 - HIGHEST 17<br>
17MA20039 - 15<br>
17MA20040 - 9<br>
17MA20041 - 13<br>
17MA20043 - 12<br>
17MA2044 - 14<br>
17MA20045 - 13<br>
17MA20046 - 14<br>
17MA20047 - highest 17</p>
<h1 id="converting-roman-to-integer">converting roman to integer</h1>
<p>First some examples<br>
XX - 20<br>
XXX- 30<br>
III - 3<br>
IX - 9<br>
V - 5;<br>
IV - 4<br>
L - 50<br>
XL - 40<br>
C - 100<br>
XC - 90<br>
D - 500<br>
CD - 400<br>
M - 1000<br>
CM - 900</p>
<p>89 - LXXXIX<br>
599 - DLXLIX</p>
<h2 id="initializing-an-unordered_map">initializing an unordered_map</h2>
<p>An unordered_map can be initialized in different ways like:</p>
<ul>
<li>simple initialization using assignment operator and subscript operator</li>
<li>initializing using a Initializer List</li>
<li>initializing using array of pairs</li>
<li>initializing from another map</li>
</ul>
<h3 id="following-is-code-snippet">Following is code snippet</h3>
<pre class=" language-cpp"><code class="prism  language-cpp">unordered_map<span class="token operator">&lt;</span><span class="token keyword">int</span><span class="token punctuation">,</span> string<span class="token operator">&gt;</span> m <span class="token operator">=</span>
 <span class="token punctuation">{</span>
     <span class="token punctuation">{</span><span class="token number">1</span><span class="token punctuation">,</span> <span class="token string">"one"</span><span class="token punctuation">}</span><span class="token punctuation">,</span>
     <span class="token punctuation">{</span><span class="token number">2</span><span class="token punctuation">,</span> <span class="token string">"two"</span><span class="token punctuation">}</span><span class="token punctuation">,</span>
     <span class="token punctuation">{</span><span class="token number">3</span><span class="token punctuation">,</span> <span class="token string">"three"</span><span class="token punctuation">}</span>
 <span class="token punctuation">}</span><span class="token punctuation">;</span>
</code></pre>
<p>Initilaizing from array of pairs</p>
<pre class=" language-cpp"><code class="prism  language-cpp">pair<span class="token operator">&lt;</span><span class="token keyword">int</span><span class="token punctuation">,</span> string<span class="token operator">&gt;</span> arr<span class="token punctuation">[</span><span class="token punctuation">]</span> <span class="token operator">=</span>
	<span class="token punctuation">{</span>
		<span class="token function">make_pair</span><span class="token punctuation">(</span><span class="token number">1</span><span class="token punctuation">,</span> <span class="token string">"one"</span><span class="token punctuation">)</span><span class="token punctuation">,</span>
		<span class="token function">make_pair</span><span class="token punctuation">(</span><span class="token number">2</span><span class="token punctuation">,</span> <span class="token string">"two"</span><span class="token punctuation">)</span><span class="token punctuation">,</span>
		<span class="token function">make_pair</span><span class="token punctuation">(</span><span class="token number">3</span><span class="token punctuation">,</span> <span class="token string">"three"</span><span class="token punctuation">)</span>
	<span class="token punctuation">}</span><span class="token punctuation">;</span>

	<span class="token keyword">int</span> n <span class="token operator">=</span> <span class="token keyword">sizeof</span><span class="token punctuation">(</span>arr<span class="token punctuation">)</span> <span class="token operator">/</span> <span class="token keyword">sizeof</span><span class="token punctuation">(</span>arr<span class="token punctuation">[</span><span class="token number">0</span><span class="token punctuation">]</span><span class="token punctuation">)</span><span class="token punctuation">;</span>
    <span class="token comment">//now we copy the pair values to our unordered_map</span>
	unordered_map<span class="token operator">&lt;</span><span class="token keyword">int</span><span class="token punctuation">,</span> string<span class="token operator">&gt;</span> <span class="token function">m</span><span class="token punctuation">(</span>arr<span class="token punctuation">,</span> arr <span class="token operator">+</span> n<span class="token punctuation">)</span><span class="token punctuation">;</span>

</code></pre>
<p>We can do the same for a vector.</p>
<pre class=" language-cpp"><code class="prism  language-cpp">vector<span class="token operator">&lt;</span><span class="token keyword">int</span><span class="token operator">&gt;</span> roman <span class="token operator">=</span> <span class="token punctuation">{</span> <span class="token number">1000</span><span class="token punctuation">,</span> <span class="token number">900</span><span class="token punctuation">,</span> <span class="token number">500</span><span class="token punctuation">,</span> <span class="token number">400</span><span class="token punctuation">,</span> <span class="token number">100</span><span class="token punctuation">,</span> <span class="token number">90</span><span class="token punctuation">,</span> <span class="token number">50</span><span class="token punctuation">,</span> <span class="token number">40</span><span class="token punctuation">,</span> <span class="token number">10</span><span class="token punctuation">,</span> <span class="token number">9</span><span class="token punctuation">,</span> <span class="token number">5</span><span class="token punctuation">,</span> <span class="token number">4</span><span class="token punctuation">,</span> <span class="token number">1</span><span class="token punctuation">}</span><span class="token punctuation">;</span>
</code></pre>
<h1 id="section">19-09-2020</h1>
<p>I was stuck here for a while. Use typecasting in long long int if dealing with very large numbers.</p>
<pre class=" language-cpp"><code class="prism  language-cpp"><span class="token keyword">long</span> <span class="token keyword">long</span> <span class="token keyword">int</span> sum <span class="token operator">=</span> <span class="token punctuation">(</span><span class="token keyword">long</span> <span class="token keyword">long</span> <span class="token keyword">int</span><span class="token punctuation">)</span>A<span class="token punctuation">[</span>i<span class="token punctuation">]</span> <span class="token operator">+</span> <span class="token punctuation">(</span><span class="token keyword">long</span> <span class="token keyword">long</span> <span class="token keyword">int</span><span class="token punctuation">)</span>A<span class="token punctuation">[</span>j<span class="token punctuation">]</span> <span class="token operator">+</span> <span class="token punctuation">(</span><span class="token keyword">long</span> <span class="token keyword">long</span> <span class="token keyword">int</span><span class="token punctuation">)</span>A<span class="token punctuation">[</span>k<span class="token punctuation">]</span><span class="token punctuation">;</span>
<span class="token operator">or</span> <span class="token comment">// </span>
<span class="token keyword">long</span> <span class="token keyword">long</span> sum <span class="token operator">=</span> <span class="token number">0LL</span> <span class="token operator">+</span> A<span class="token punctuation">[</span>i<span class="token punctuation">]</span> <span class="token operator">+</span>A<span class="token punctuation">[</span>j<span class="token punctuation">]</span> <span class="token operator">+</span> A<span class="token punctuation">[</span>k<span class="token punctuation">]</span><span class="token punctuation">;</span>
</code></pre>
<h2 id="problem---1-array-3-pointers">Problem - 1 Array 3 pointers</h2>
<p><strong>Input -</strong> Given 3 arrays of integers A, B, C find indecie i from A, j form B and k form C such that<br>
<span class="katex--display"><span class="katex-display"><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mtext>min</mtext><mo stretchy="false">(</mo><mi mathvariant="normal">∣</mi><msub><mi>A</mi><mi>i</mi></msub><mo>−</mo><msub><mi>B</mi><mi>j</mi></msub><mi mathvariant="normal">∣</mi><mo separator="true">,</mo><mi mathvariant="normal">∣</mi><msub><mi>B</mi><mi>j</mi></msub><mo>−</mo><msub><mi>C</mi><mi>k</mi></msub><mi mathvariant="normal">∣</mi><mo separator="true">,</mo><mi mathvariant="normal">∣</mi><msub><mi>C</mi><mi>k</mi></msub><mo>−</mo><msub><mi>A</mi><mi>i</mi></msub><mi mathvariant="normal">∣</mi><mo stretchy="false">)</mo></mrow><annotation encoding="application/x-tex">  \text{min}(|A_i - B_j|, |B_j - C_k|, |C_k - A_i|)</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 1em; vertical-align: -0.25em;"></span><span class="mord text"><span class="mord">min</span></span><span class="mopen">(</span><span class="mord">∣</span><span class="mord"><span class="mord mathdefault">A</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.311664em;"><span class="" style="top: -2.55em; margin-left: 0em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathdefault mtight">i</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mspace" style="margin-right: 0.222222em;"></span><span class="mbin">−</span><span class="mspace" style="margin-right: 0.222222em;"></span></span><span class="base"><span class="strut" style="height: 1.03611em; vertical-align: -0.286108em;"></span><span class="mord"><span class="mord mathdefault" style="margin-right: 0.05017em;">B</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.311664em;"><span class="" style="top: -2.55em; margin-left: -0.05017em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathdefault mtight" style="margin-right: 0.05724em;">j</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.286108em;"><span class=""></span></span></span></span></span></span><span class="mord">∣</span><span class="mpunct">,</span><span class="mspace" style="margin-right: 0.166667em;"></span><span class="mord">∣</span><span class="mord"><span class="mord mathdefault" style="margin-right: 0.05017em;">B</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.311664em;"><span class="" style="top: -2.55em; margin-left: -0.05017em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathdefault mtight" style="margin-right: 0.05724em;">j</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.286108em;"><span class=""></span></span></span></span></span></span><span class="mspace" style="margin-right: 0.222222em;"></span><span class="mbin">−</span><span class="mspace" style="margin-right: 0.222222em;"></span></span><span class="base"><span class="strut" style="height: 1em; vertical-align: -0.25em;"></span><span class="mord"><span class="mord mathdefault" style="margin-right: 0.07153em;">C</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.336108em;"><span class="" style="top: -2.55em; margin-left: -0.07153em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathdefault mtight" style="margin-right: 0.03148em;">k</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mord">∣</span><span class="mpunct">,</span><span class="mspace" style="margin-right: 0.166667em;"></span><span class="mord">∣</span><span class="mord"><span class="mord mathdefault" style="margin-right: 0.07153em;">C</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.336108em;"><span class="" style="top: -2.55em; margin-left: -0.07153em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathdefault mtight" style="margin-right: 0.03148em;">k</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mspace" style="margin-right: 0.222222em;"></span><span class="mbin">−</span><span class="mspace" style="margin-right: 0.222222em;"></span></span><span class="base"><span class="strut" style="height: 1em; vertical-align: -0.25em;"></span><span class="mord"><span class="mord mathdefault">A</span><span class="msupsub"><span class="vlist-t vlist-t2"><span class="vlist-r"><span class="vlist" style="height: 0.311664em;"><span class="" style="top: -2.55em; margin-left: 0em; margin-right: 0.05em;"><span class="pstrut" style="height: 2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mathdefault mtight">i</span></span></span></span><span class="vlist-s">​</span></span><span class="vlist-r"><span class="vlist" style="height: 0.15em;"><span class=""></span></span></span></span></span></span><span class="mord">∣</span><span class="mclose">)</span></span></span></span></span></span><br>
I struggled a lot on this question but I realized how easy it was to do<br>
with the help of two pointers technique.</p>
<h2 id="binary-search">Binary Search</h2>
<p>In this category of problems we often have a search space. And by some<br>
thought we can reduce our search space by half. Be it searching in an array or doing <strong>painter’s partition problem</strong> or  <strong>book’s problem</strong> or<br>
<strong>finding median of a matrix</strong><br>
all of these problems have a search space and we can reduce our search space by half after careful observation.<br>
Having a quick way to use for binary search in arrays is very useful.<br>
Here I have listed some handy tools from C++ STL.</p>
<pre class=" language-cpp"><code class="prism  language-cpp">	<span class="token function">binary_search</span><span class="token punctuation">(</span>v<span class="token punctuation">.</span><span class="token function">begin</span><span class="token punctuation">(</span><span class="token punctuation">)</span><span class="token punctuation">,</span> v<span class="token punctuation">.</span><span class="token function">end</span><span class="token punctuation">(</span><span class="token punctuation">)</span><span class="token punctuation">,</span> key<span class="token punctuation">)</span><span class="token punctuation">;</span>
</code></pre>
<p>This returns true or false depending on whether the key is present in the given range or not.</p>
<p>Next <strong>upper_bound()</strong> is a standard library function in C++ defined in the header . It returns an iterator pointing to the first element in the <strong>range [first, last)</strong> that is <strong>greater than value</strong>, or <strong>last</strong> if no such element is found. The elements in the range shall already be sorted or at least partitioned with respect to val.</p>
<pre class=" language-cpp"><code class="prism  language-cpp">vector<span class="token operator">&lt;</span><span class="token keyword">int</span><span class="token operator">&gt;</span> <span class="token operator">::</span> iterator itr <span class="token operator">=</span> <span class="token function">upper_bound</span><span class="token punctuation">(</span>v<span class="token punctuation">.</span><span class="token function">begin</span><span class="token punctuation">(</span><span class="token punctuation">)</span><span class="token punctuation">,</span> v<span class="token punctuation">.</span><span class="token function">end</span><span class="token punctuation">(</span><span class="token punctuation">)</span><span class="token punctuation">,</span> key<span class="token punctuation">)</span><span class="token punctuation">;</span>
</code></pre>
<blockquote>
<p>The lower_bound () method in C++ is used to <strong>return an iterator pointing to the first element in the range [first, last) which has a value not less than val</strong>. This means that the function returns the index of the next smallest number just greater than or equal to that number.</p>
</blockquote>
<h3 id="rotate-an-array">Rotate an array</h3>
<p>This will be very clear by an example.<br>
6, 7, 8, 9, 1, 2, 3, 4, 5,<br>
9, 8, 7, 6, 5, 4, 3, 2, 1<br>
Done right :)</p>
<h1 id="sunday">20-09-2020 Sunday</h1>
<h3 id="problem--1">Problem  1</h3>
<blockquote>
<p>check if given number is power of 2 or not. Number may contain more than 200 decimal digits.</p>
</blockquote>
<p>I solved this problem using strings and there was no shortcut to solve this problem. I had to actually divide the number by 2 using strings.<br>
Meanwhile I learned about <strong>boost library</strong>.</p>
<p>Boost libraries are intended to be widely useful, and usable across a broad spectrum of applications. For example, they are helpful for handling large numbers having range beyond the long long, long double data type (264) in C++.</p>
<pre class=" language-cpp"><code class="prism  language-cpp"><span class="token comment">// C++ program to find whether a number </span>
<span class="token comment">// is power of 2 or not </span>
<span class="token macro property">#<span class="token directive keyword">include</span> <span class="token string">&lt;bits/stdc++.h&gt;</span> </span>
<span class="token macro property">#<span class="token directive keyword">include</span> <span class="token string">&lt;boost/multiprecision/cpp_int.hpp&gt;</span> </span>

<span class="token keyword">using</span> <span class="token keyword">namespace</span> std<span class="token punctuation">;</span> 
<span class="token keyword">using</span> <span class="token keyword">namespace</span> boost<span class="token operator">::</span>multiprecision<span class="token punctuation">;</span> 

<span class="token comment">// Function to check whether a </span>
<span class="token comment">// number is power of 2 or not </span>
<span class="token keyword">bool</span> <span class="token function">ispowerof2</span> <span class="token punctuation">(</span> cpp_int num <span class="token punctuation">)</span> 
<span class="token punctuation">{</span> 
	<span class="token keyword">if</span> <span class="token punctuation">(</span> <span class="token punctuation">(</span> num <span class="token operator">&amp;</span> <span class="token punctuation">(</span> num <span class="token operator">-</span> <span class="token number">1</span> <span class="token punctuation">)</span> <span class="token punctuation">)</span> <span class="token operator">==</span> <span class="token number">0</span> <span class="token punctuation">)</span> 
		<span class="token keyword">return</span> <span class="token number">1</span><span class="token punctuation">;</span> 
	<span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span>	 
<span class="token punctuation">}</span> 

<span class="token comment">// Driver function </span>
<span class="token keyword">int</span> <span class="token function">main</span><span class="token punctuation">(</span><span class="token punctuation">)</span> 
<span class="token punctuation">{</span> 
	cpp_int num <span class="token operator">=</span> <span class="token number">549755813888</span><span class="token punctuation">;</span> 
	cout <span class="token operator">&lt;&lt;</span> <span class="token function">ispowerof2</span> <span class="token punctuation">(</span> num <span class="token punctuation">)</span> <span class="token operator">&lt;&lt;</span> endl<span class="token punctuation">;</span> 
	<span class="token keyword">return</span> <span class="token number">0</span><span class="token punctuation">;</span> 
<span class="token punctuation">}</span> 
</code></pre>

