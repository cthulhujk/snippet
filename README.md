# Git notes

## `git log` & `git log --oneline`
 `git log --oneline` would print the following lines:

```
10bb63f (HEAD -> master, origin/master, origin/HEAD) move files
6d0555c update
ce7bb96 Create happy_valentines_day.cpp
07e0ade Create permutation_msvc_only.cpp
21ec910 Initial commit
```
while `git log` prints more details:
```
Author: racaljk <1948638989@qq.com>
Date:   Fri Dec 29 11:34:06 2017 +0800

    move files

commit 6d0555cb4b486c277226a8d2e8693b743bbbec4c
Author: racaljk <1948638989@qq.com>
Date:   Sat Dec 16 15:10:53 2017 +0800

    update

commit ce7bb96f25d658a589bd2308ad1da970c4f5bc91
```

## `git branch` & `git branch --all`
`git branch` lists all local branchs and `git branch --all`
lists remote branchs in addition.

```
* master
  remotes/origin/HEAD -> origin/master
  remotes/origin/master
```
the star ** * ** means what branch you are working on

## `git checkout -b feature1`
`git branch feature1` and `git checkout feature1` is equvalient to `git checkout -b feature1`
