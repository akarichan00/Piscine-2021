## Git commit 
Objective: Write a shell script that returns the last 5 hashes in your git deposit.
##solution 
- Git is a useful tool , check it out (I recommend this tuto: https://www.w3schools.com/git/)
```sh
git log -5 --format='%H' | cat -e
```