C Simple Shell Project

Task 1. <br>
	Write a UNIX command line interpreter. <br>
Task 2. <br>
	Handle command lines with arguments. <br>
Task 3. <br>
	Handle the PATH <br>
	fork must not be called if the command doesn’t exist <br>
Task 4. <br>
	Implement the exit built-in, that exits the shell <br>
	Usage: exit <br>
	You don’t have to handle any argument to the built-in exit <br>
Task 5. <br>
	Implement the env built-in, that prints the current environment <br>
Task 8. <br>
	handle arguments for the built-in exit <br>
	Usage: exit status, where status is an integer used to exit the shell <br>
Task 9. <br>
	Implement the setenv and unsetenv builtin commands <br>
		setenv <br>
			Initialize a new environment variable, or modify an existing one <br>
			Command syntax: setenv VARIABLE VALUE <br>
			Should print something on stderr on failure <br>
		unsetenv <br>
			Remove an environment variable <br>
			Command syntax: unsetenv VARIABLE <br>
			Should print something on stderr on failure <br>
Task 10. <br>
	Implement the builtin command cd: <br>
		Changes the current directory of the process. <br>
		Command syntax: cd [DIRECTORY] <br>
		If no argument is given to cd the command must be interpreted like cd $HOME <br>
		You have to handle the command cd - <br>
		You have to update the environment variable PWD when you change directory <br>
