<h2>Creating a File</h2>
<p>To create a new file in C, you can use the <code>fopen</code> function with a <code>"w"</code> (write) mode argument:</p>
<pre><code>FILE *file;
file = fopen("filename.txt", "w");
if (file == NULL) {
    // error handling
}
</code></pre>

<h2>Opening a File</h2>
<p>You can open an existing file in C by using the <code>fopen</code> function with a <code>"r"</code> (read) mode argument:</p>
<pre><code>FILE *file;
file = fopen("filename.txt", "r");
if (file == NULL) {
    // error handling
}
</code></pre>

<h2>Closing a File</h2>
<p>To close a file, use the <code>fclose</code> function:</p>
<pre><code>FILE *file;
file = fopen("filename.txt", "r");
if (file == NULL) {
    // error handling
}
fclose(file);
</code></pre>

<h2>Reading a File</h2>
<p>You can read the contents of a file in C using the <code>fgets</code> function:</p>
<pre><code>FILE *file;
char buffer[1024];
file = fopen("filename.txt", "r");
if (file == NULL) {
    // error handling
}
while (fgets(buffer, 1024, file) != NULL) {
    // process the contents of buffer
}
fclose(file);
</code></pre>

<h2>Writing to a File</h2>
<p>You can write to a file in C using the <code>fprintf</code> function:</p>
<pre><code>FILE *file;
file = fopen("filename.txt", "w");
if (file == NULL) {
    // error handling
}
fprintf(file, "Hello, World!");
fclose(file);
</code></pre>

<h2>dprintf</h2>
<p>The <code>dprintf</code> function is similar to <code>fprintf</code>, but it writes to a file descriptor instead of a <code>FILE</code> pointer:</p>
<pre><code>int fd;
fd = open("filename.txt", O_WRONLY | O_CREAT, 0644);
if (fd == -1) {
    // error handling
}
dprintf(fd, "Hello, World!");
close(fd);
</code></pre>
<p>Note that the <code>open</code> and <code>close</code> functions are used here to open and close the file descriptor, while the <code>fopen</code> and <code>fclose</code> functions were used in the previous examples to open and close <code>FILE</code> pointers.</p>


<h1 align="center" style="color:blue;">MORE ON FILES IN C<b></b></h1>


<h2>File Descriptors</h2>
<p>A file descriptor is a unique integer identifier assigned by the operating system to represent an open file or a system resource. In C, file descriptors are used for low-level file and I/O operations, such as reading and writing data to a file or network socket.</p>

<h2>Standard File Descriptors</h2>
<p>The three standard file descriptors in UNIX-based systems are:</p>
<ol>
  <li><b>STDIN (0):</b> The standard input file descriptor, used for reading data from the keyboard or another input device. The POSIX name for this file descriptor is <code>STDIN_FILENO</code>.</li>
  <li><b>STDOUT (1):</b> The standard output file descriptor, used for writing data to the screen or another output device. The POSIX name for this file descriptor is <code>STDOUT_FILENO</code>.</li>
  <li><b>STDERR (2):</b> The standard error file descriptor, used for writing error messages to the screen or another output device. The POSIX name for this file descriptor is <code>STDERR_FILENO</code>.</li>
</ol>

<h2>I/O System Calls</h2>
<p>The I/O system calls are low-level functions provided by the operating system for reading from and writing to files and other resources. In C, the four main I/O system calls are:</p>
<ul>
  <li><b>open:</b> Opens a file or resource and returns a file descriptor representing the open file.</li>
  <li><b>close:</b> Closes a file descriptor and releases any resources associated with it.</li>
  <li><b>read:</b> Reads data from an open file represented by a file descriptor.</li>
  <li><b>write:</b> Writes data to an open file represented by a file descriptor.</li>
</ul>

<h2>Open Flags</h2>
<p>When opening a file using the <code>open</code> system call, you can specify one of the following flags to control the mode of the open file:</p>
<ul>
  <li><b>O_RDONLY:</b> Open the file for reading only.</li>
  <li><b>O_WRONLY:</b> Open the file for writing only.</li>
  <li><b>O_RDWR:</b> Open the file for reading and writing.</li>
</ul>

<h2>File Permissions</h2>
<p>File permissions determine who is allowed to access a file and what they are allowed to do with it. In UNIX-based systems, file permissions are represented by a set of bits associated with each file. When creating a file using the <code>open</code> system call, you can set the file permissions using the <code>mode</code> argument, which is specified as an octal value.</p>

<h2>System Call</h2>
<p>A system call is a low-level function provided by the operating system that allows a program to request a service from the kernel, such as reading from or writing to a file, creating a process, or allocating memory. System calls provide a bridge between a user-level program and the underlying operating system, allowing the program to access system resources and services.</p>

<h2>Function vs System Call</h2>
<p>The main difference between a function and a system call is that a function is a piece of code within a program that performs a specific task, while a system call is a low-level function provided by the operating system that allows a program to request a service from the kernel. Functions are executed entirely within the user space, while system calls require the program to enter kernel space and interact with the operating system at a low level.</p>
