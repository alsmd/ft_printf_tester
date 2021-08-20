# ft_printf_tester

<p>This program can test if the project of 42 is working fine.</p>
<p>The whole program runs around "<strong>PRINT(STRING, SHOW, ...)</strong>" macro. It will take a string as first parameter and a var number of parameter and throw it to printf and ft_printf to compare the results. The second parameter decide if a log file will be created to show the output of ft_printf and printf. A log will also be created if a test fails</p>

<h3>Dependencis:</h2>
<ul>
	<li>clang</li>
	<li>valgrind</li>
</ul>

<h3>Commands:</h2>
<ul>
	<li>make - run mandatory and bonus</li>
	<li>make b- run bonus</li>
	<li>make m- run mandatory</li>
</ul>
<hr>
<h3>Make your own tests:</h2>
<ul>
	<li>Include <strong>print.h</strong> where you want to create your tests</li>
	<li>Compile your program with the file <strong>print.c</strong> </li>
	<li>Call inside braces "<strong>PRINT(STRING, CREATE LOG, ...)</strong>" to see if your function works in this context.</li>
	<li>You have to pass at least 1 parameter starting from the third one.</li>
	<li>Example: </li>
	<br>
	{
	<br>
		&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp<i>PRINT("is it %s in this %s", 0, "working", "context")</i>
		<br>
	}<br>
	<li>it will print ok or ko. use however you want</li>
</ul>