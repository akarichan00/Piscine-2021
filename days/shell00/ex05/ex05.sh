#!/bin/bash
#used for printing the last 5 commits in your git repo.
git log --pretty=oneline | head -n 5 
#| awk '{print $1}' => | cat -e
#or
#git log --pretty=format:'%H' -n5 
#or
#git log --format='%H' -n5
