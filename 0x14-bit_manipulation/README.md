<h1 align="center">Understanding Bits</h1>

<p>A <b>bit</b> is the smallest unit of data in a computer, representing a single binary digit, either 0 or 1. A group of 8 bits is called a <b>byte</b>. Computers use binary to store and process information, as each binary digit can represent one of two states, such as on/off, true/false, or 1/0.</p>

<h2>Binary Arithmetic</h2>

<p>In binary arithmetic, the rightmost digit represents the least significant bit, while the leftmost digit represents the most significant bit. Binary addition is performed similarly to decimal addition, but with only two digits, 0 and 1, and carrying over to the next bit when the result is 2 or greater. Binary subtraction is performed similarly to decimal subtraction.</p>

<h2>Bitwise Operations</h2>

<p>Bitwise operations are operations that take place on individual bits within a binary value. Some common bitwise operations are:</p>

<ul>
  <li><b>AND (&):</b> returns 1 if both bits are 1, otherwise 0.</li>
  <li><b>OR (|):</b> returns 1 if either bit is 1, otherwise 0.</li>
  <li><b>XOR (^):</b> returns 1 if exactly one of the bits is 1, otherwise 0.</li>
  <li><b>NOT (~):</b> inverts each bit, producing the two's complement representation of the number.</li>
  <li><b>Left Shift (<<):</b> shifts each bit to the left, discarding the leftmost bit and adding a 0 on the right.</li>
  <li><b>Right Shift (>>):</b> shifts each bit to the right, discarding the rightmost bit and adding a 0 on the left.</li>
</ul>

<h2>Base Representations</h2>

<p>In addition to binary, numbers can also be represented in decimal (base 10), hexadecimal (base 16), and octal (base 8) formats. Hexadecimal uses the digits 0-9 and the letters A-F to represent 16 possible values, while octal uses only the digits 0-7. Converting between these different bases is often helpful when working with binary data.</p>

<h2>Summary</h2>

<p>Bits are the basic building blocks of computer data and can be combined to form larger data units. Bitwise operations allow for efficient manipulation of binary values, and understanding different base representations can aid in working with binary data.</p>






<h1 align="center">Bases in Bitwise Operations</h1>

<p>In computer science, a <b>base</b> is used to represent numbers. In bitwise operations, the most common bases used are binary (base 2), decimal (base 10), hexadecimal (base 16), and octal (base 8).</p>

<h2>Binary (Base 2)</h2>

<p>Binary is the most basic and fundamental base in bitwise operations, as it represents numbers using only two digits, 0 and 1. Each digit in a binary number represents a power of 2. The rightmost digit represents 2^0, the next digit to the left represents 2^1, and so on. To convert a binary number to decimal, we add the values of each digit that is set to 1. For example, the binary number 1001 can be represented as:</p>

<pre>
1 * 2^3 + 0 * 2^2 + 0 * 2^1 + 1 * 2^0 = 8 + 1 = 9
</pre>

<p>Therefore, the binary number 1001 represents the decimal value 9.</p>

<h2>Decimal (Base 10)</h2>

<p>Decimal is the base that we are most familiar with in everyday life, as it uses the digits 0-9 to represent numbers. To convert a decimal number to binary, we repeatedly divide the decimal number by 2 and keep track of the remainders. The binary representation is then built from the remainders, starting with the last one. For example, to convert the decimal number 9 to binary:</p>

<pre>
9 ÷ 2 = 4 with a remainder of 1
4 ÷ 2 = 2 with a remainder of 0
2 ÷ 2 = 1 with a remainder of 0
1 ÷ 2 = 0 with a remainder of 1
</pre>

<p>Reading the remainders from bottom to top, we get the binary representation 1001, which represents the decimal value 9.</p>

<h2>Hexadecimal (Base 16)</h2>

<p>Hexadecimal is a compact way to represent binary data, as it uses the digits 0-9 and the letters A-F to represent 16 possible values. Each hexadecimal digit represents 4 bits of binary data. To convert a hexadecimal number to decimal, we first convert each hexadecimal digit to binary and then convert the resulting binary number to decimal. For example, the hexadecimal number A can be represented as:</p>

<pre>
A = 10 in decimal = 1010 in binary
</pre>

<p>Therefore, the hexadecimal number A represents the decimal value 10. Converting between hexadecimal and binary can be helpful in working with computer memory and storage, as it allows us to represent large amounts of binary data in a compact and readable form.</p>

<h2>Octal (Base 8)</h2>
<p>Octal is another compact way to represent binary data, as it uses only the digits 0-7 to represent 8 possible values. Each octal digit represents 3 bits of binary data. To convert an octal number to decimal, we first convert each octal digit to binary and then convert the resulting binary number to decimal. For example,</p>

<p>Octal (base 8) number: 12<br>
Binary equivalent: 0001 0010<br>
Decimal (base 10) equivalent: 10</p>

<p>To convert a decimal number to octal, we first convert the decimal number to binary and then group the binary digits into groups of 3 starting from the right-most digit. Then, we convert each group of 3 binary digits to an octal digit. For example,</p>

<p>Decimal (base 10) number: 15<br>
Binary equivalent: 0000 1111<br>
Octal (base 8) equivalent: 17</p>

<p>Octal is often used in computer systems, as it can be used to represent file permissions, for example, in Unix-based systems.</p>

<h1 align="center"><b>OR</b></h1>


<h3>Octal (Base 8)</h3>
<p>Octal is a base 8 number system that uses eight digits: 0, 1, 2, 3, 4, 5, 6, and 7. It is used in computer programming as a compact way to represent binary data. In octal, each digit represents three binary bits.</p>

<h3>Example:</h3>
<p>Let's take the number 10 in decimal and represent it in octal:</p>

<p>Decimal (base 10): 10</p>
<p>Octal (base 8): 12</p>


<h2>Summary</h2>

<p>Different bases can be used to represent numbers in bitwise operations, including binary, decimal, hexadecimal, and octal. Understanding and converting between these different bases can aid in working with binary data in computer systems.</p>


