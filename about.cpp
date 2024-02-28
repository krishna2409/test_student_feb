#include &lt;stdio.h&gt;
int main()
{
int num, binary_val, decimal_val = 0, base = 1, rem;
printf(&quot;Insert a binary num (1s and 0s) \n&quot;);
scanf(&quot;%d&quot;, &amp;num);
binary_val = num;
while (num &gt; 0)
{
rem = num % 10;
decimal_val = decimal_val + rem * base;
num = num / 10 ; //these are the correct lines
base = base * 2; //these are the correct lines
}
printf(&quot;%d \n&quot;, binary_val);
printf(&quot;%d \n&quot;, decimal_val);
return 0;
}