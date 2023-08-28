#!/bin/bash
#first method
cat .gitignore | sed  's/^M//'
# sed -> stream editor for filtering and transforming text
# 's/^M//' -> If no -e, --expression, -f, or --file option is given, then the first non-option argument is taken 
#as the script to interpret.  All remaining arguments are names  of  input  files;  if  no  input  files  are
#specified, then the standard input is read.

#second method 
#git clean -ndX | awk '{print $3}' 
# awk '{print $3}' ==> cat -e