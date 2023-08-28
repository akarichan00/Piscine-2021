## EXERCISE 10

* In a file called **clear**, place the command line that will search for all files - in the current directory as well as in its sub-directories - end by ~, and/or all files that start or end by #
* The command line will show and erase all files found.
* Only one command is allowed: no ';' or '&&' or other shenanigans.

HINT: man find

------------------------------------------
## If we read the f***ing manual we will comprehend that :

* `find` is the command that can address all the requirements.
* so next we can `man find` and we can came up with the following solution:

```
$ find /path/to/search -type f \( -name '#*#' -o -name '~*' \) -exec rm -f {} +

In this command:

find: The command for searching files and directories.
/path/to/search: Replace this with the directory path where you want to start the search.

-type f: This specifies that you're only interested in files (not directories).

\( -name '#*#' -o -name '~*' \): This is the search pattern combining two conditions using the -o (or) operator.

-exec rm -f {} +: This part executes the rm command with the -f flag (force) on the found files. The {} gets replaced with the filenames found by find, and + at the end of the -exec command indicates that multiple filenames can be passed to a single rm command.

Remember to be extremely careful when using the rm command to delete files, as it's a permanent action and cannot be undone. Double-check your command and ensure you're targeting the correct files before proceeding.
```
---------------------

```bash
find f \( -name '#*#' -o -name '~*' \) -exec rm -f {} +
```
