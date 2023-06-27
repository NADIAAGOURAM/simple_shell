C Simple Shell Project

Task 1. <br>
	<BLOCKQUOTE> Write a UNIX command line interpreter. <br> </BLOCKQUOTE> </BLOCKQUOTE>
Task 2. <br>
	<BLOCKQUOTE> Handle command lines with arguments. <br> </BLOCKQUOTE>
Task 3. <br>
	<BLOCKQUOTE> Handle the PATH <br> </BLOCKQUOTE>
	<BLOCKQUOTE> fork must not be called if the command doesn’t exist <br> </BLOCKQUOTE>
Task 4. <br>
	<BLOCKQUOTE> Implement the exit built-in, that exits the shell <br> </BLOCKQUOTE>
	<BLOCKQUOTE> Usage: exit <br> </BLOCKQUOTE>
	<BLOCKQUOTE> You don’t have to handle any argument to the built-in exit <br> </BLOCKQUOTE>
Task 5. <br>
	<BLOCKQUOTE> Implement the env built-in, that prints the current environment <br> </BLOCKQUOTE>
Task 8. <br>
	<BLOCKQUOTE> handle arguments for the built-in exit <br> </BLOCKQUOTE>
	<BLOCKQUOTE> Usage: exit status, where status is an integer used to exit the shell <br> </BLOCKQUOTE>
Task 9. <br>
	<BLOCKQUOTE> Implement the setenv and unsetenv builtin commands <br> </BLOCKQUOTE>
		<BLOCKQUOTE> <BLOCKQUOTE> setenv <br> </BLOCKQUOTE> </BLOCKQUOTE>
			<BLOCKQUOTE> <BLOCKQUOTE> <BLOCKQUOTE> Initialize a new environment variable, or modify an existing one <br> </BLOCKQUOTE> </BLOCKQUOTE> </BLOCKQUOTE>
			<BLOCKQUOTE> <BLOCKQUOTE> <BLOCKQUOTE> Command syntax: setenv VARIABLE VALUE <br> </BLOCKQUOTE> </BLOCKQUOTE> </BLOCKQUOTE>
			<BLOCKQUOTE> <BLOCKQUOTE> <BLOCKQUOTE>Should print something on stderr on failure <br> </BLOCKQUOTE> </BLOCKQUOTE> </BLOCKQUOTE>
		<BLOCKQUOTE> <BLOCKQUOTE> unsetenv <br> </BLOCKQUOTE> </BLOCKQUOTE>
			<BLOCKQUOTE> <BLOCKQUOTE> <BLOCKQUOTE> Remove an environment variable <br> </BLOCKQUOTE> </BLOCKQUOTE> </BLOCKQUOTE>
			<BLOCKQUOTE> <BLOCKQUOTE> <BLOCKQUOTE> Command syntax: unsetenv VARIABLE <br> </BLOCKQUOTE> </BLOCKQUOTE> </BLOCKQUOTE>
			<BLOCKQUOTE> <BLOCKQUOTE> <BLOCKQUOTE> Should print something on stderr on failure <br> </BLOCKQUOTE> </BLOCKQUOTE> </BLOCKQUOTE>
Task 10. <br>
	<BLOCKQUOTE> Implement the builtin command cd: <br> </BLOCKQUOTE>
		<BLOCKQUOTE> <BLOCKQUOTE> Changes the current directory of the process. <br> </BLOCKQUOTE> </BLOCKQUOTE>
		<BLOCKQUOTE> <BLOCKQUOTE> Command syntax: cd [DIRECTORY] <br> </BLOCKQUOTE> </BLOCKQUOTE>
		<BLOCKQUOTE> <BLOCKQUOTE> If no argument is given to cd the command must be interpreted like cd $HOME <br> </BLOCKQUOTE> </BLOCKQUOTE>
		<BLOCKQUOTE> <BLOCKQUOTE> You have to handle the command cd - <br> </BLOCKQUOTE> </BLOCKQUOTE>
		<BLOCKQUOTE> <BLOCKQUOTE> You have to update the environment variable PWD when you change directory <br> </BLOCKQUOTE> </BLOCKQUOTE>
