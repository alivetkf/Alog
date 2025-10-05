# <center><font face="仿宋" color=orange>How to use git</font></center>
## <center><font face="楷体" color=orange>啊哈</font><center>
### 一.一句话科普 `git` ——分布式版本控制工具
### 二.`branch`
git在管理文件时，每一次 `commit` 都会创建一个与之对应的 `node`。
`node` --> `tree`
### 三.使用 `git`
git中的文件状态分为**未跟踪**和**已跟踪**（暂存 修改 未修改）
> add 跟踪文件 文件进入暂存状态
> commit 将文件有修改变为未修改状态
1. 配置 `git`
```
git config --global user.name "alivetkf"
git config --global user.email "alivetkf@foxmail.com"
```
2. **status** 
查看仓库状态 `git status`
3. **init** 
初始化仓库 `git init`
4. **add** 
track files `git add .\filename`
`git add *` 将所有**未跟踪**或**已修改**文件提升为暂存态
5. **commit** 
`git commit -m "log"`
`git commit -a -m "log"`
6. **restore** 
放弃修改 `git restore .\filename`
取消暂存状态 `git restore --staged .\filename`
7. **rm** 
`git rm .\filename`
`git rm .\filename -f` 强制删除
8. **mv**
`git mv old_filename new_filename` 移动文件（rename）
9. **branch**
查看当前分支 `git branch`
创建分支 `git branch branch_name`
切换分支 `git switch branch_name`
创建分支并切换到新创建分支 `git branch -c branch_name`
删除分支 `git branch -d branch_name`
合并分支 `git merge branch_name` (一线触发快速合并)
10. **rebase**
`git rebase master` 使`commit`记录更整洁
11. **remote**
关联远程仓库 `git remote add orgin(name) url`
`git branch -M main`
`git push -u orgin(name) main`