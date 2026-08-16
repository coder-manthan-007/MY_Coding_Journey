<h2><a href="https://codeforces.com/contest/1225/problem/A" target="_blank" rel="noopener noreferrer">1225A — Forgetting Things</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1225A](https://codeforces.com/contest/1225/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Forgetting Things</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Kolya is very absent-minded. Today his math teacher asked him to solve a simple problem with the equation $$$a + 1 = b$$$ with positive integers $$$a$$$ and $$$b$$$, but Kolya forgot the numbers $$$a$$$ and $$$b$$$. He does, however, remember that the first (leftmost) digit of $$$a$$$ was $$$d_a$$$, and the first (leftmost) digit of $$$b$$$ was $$$d_b$$$.</p><p>Can you reconstruct any equation $$$a + 1 = b$$$ that satisfies this property? It may be possible that Kolya misremembers the digits, and there is no suitable equation, in which case report so.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains two space-separated digits $$$d_a$$$ and $$$d_b$$$ ($$$1 \leq d_a, d_b \leq 9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>If there is no equation $$$a + 1 = b$$$ with positive integers $$$a$$$ and $$$b$$$ such that the first digit of $$$a$$$ is $$$d_a$$$, and the first digit of $$$b$$$ is $$$d_b$$$, print a single number $$$-1$$$.</p><p>Otherwise, print any suitable $$$a$$$ and $$$b$$$ that <span class="tex-font-style-bf">both</span> are positive and do not exceed $$$10^9$$$. It is guaranteed that if a solution exists, there also exists a solution with both numbers not exceeding $$$10^9$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009290296410258264" id="id007787584385822993" class="input-output-copier">Copy</div></div><pre id="id009290296410258264">1 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003123141920622615" id="id0026599310231861495" class="input-output-copier">Copy</div></div><pre id="id003123141920622615">199 200
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009238562504130099" id="id007160059420654351" class="input-output-copier">Copy</div></div><pre id="id0009238562504130099">4 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008377640907100863" id="id002877271656486997" class="input-output-copier">Copy</div></div><pre id="id008377640907100863">412 413
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009146012583078492" id="id005358314529944846" class="input-output-copier">Copy</div></div><pre id="id009146012583078492">5 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0018970550345807657" id="id007788054141335902" class="input-output-copier">Copy</div></div><pre id="id0018970550345807657">-1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009392578742685834" id="id004604794899626925" class="input-output-copier">Copy</div></div><pre id="id009392578742685834">6 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0042083735958292423" id="id0012114601297810679" class="input-output-copier">Copy</div></div><pre id="id0042083735958292423">-1
</pre></div></div></div>