C Simple Shell Project

Task 1.
	Write a UNIX command line interpreter.
Task 2.
<<<<<<< HEAD
	Handle command lines with arguments.
=======
	Handle command lines with arguments
>>>>>>> aa975f11f346c5a81b1fa21f68428aff2dcb3af6
Task 3.
	Handle the PATH
	fork must not be called if the command doesn’t exist
Task 4.
	Implement the exit built-in, that exits the shell
	Usage: exit
	You don’t have to handle any argument to the built-in exit
<<<<<<< HEAD
Task 5
=======
Task 5.
>>>>>>> aa975f11f346c5a81b1fa21f68428aff2dcb3af6
	Implement the env built-in, that prints the current environment
Task 8.
	handle arguments for the built-in exit
	Usage: exit status, where status is an integer used to exit the shell
Task 9.
	Implement the setenv and unsetenv builtin commands
		setenv
			Initialize a new environment variable, or modify an existing one
			Command syntax: setenv VARIABLE VALUE
			Should print something on stderr on failure
		unsetenv
			Remove an environment variable
			Command syntax: unsetenv VARIABLE
			Should print something on stderr on failure
Task 10.
	Implement the builtin command cd:
		Changes the current directory of the process.
		Command syntax: cd [DIRECTORY]
		If no argument is given to cd the command must be interpreted like cd $HOME
		You have to handle the command cd -
		You have to update the environment variable PWD when you change directory
