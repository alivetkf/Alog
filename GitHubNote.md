# ==<u>Git&GithubNote</u>==
## ==快捷键==
```/``` 快速打开搜索
```T``` 打开文件搜索栏
```L``` 快速定位行号
```?``` 打开快捷键速查表
```.``` 打开网页版vsc
## 1. what is ==git&github==？
## 2. 网站==简介==
## 3. ==发现==工具寻找灵感
   [每日探索](https://github.com/explore)
   [搜索](https://github.com/search)
   ```saved```可以创建搜索预设

   > 软件命名(cpu架构)
   > x86_64=x64=AMD64 大部分pc和服务器
   > arm mobile mac
## 4.git & github ==历史起源==
## 5.创建自己的第一个==repo==
==开源协议==
+ GPL 衍生作品必须开源
> LGPL(宽松版) 新增代码无需开源
+ 修改后可闭源
> Apache 需为每一个文件放置版权说说明
> MIT BSD 最为宽松 只需在项目中保留一份协议的副本（BSD不可以使用原作者的名字推广）
## 6. git ==branch==分支
+ main/master（主分支）
+ develop （开发分支）
+ feature（功能分支）
+ release （发布分支）
+ hotfix（修补分支）
## 7. github是怎么工作的
## 8. ==repo==
>1. github_wiki 项目说明书
>2. github_insights 查改repo的status
>3. github_project 看板
>4. github_discussion 论坛
## 8. github_desktop安装配置
## 9.  git 4分区
>1. WorkingDirectory(工作区)
>2. Staging/IndexArea(暂存区) commit之前临时保存点
>3. LocalRepository(本地仓库)
>4. RemoteRepository(远程仓库)

大部分git命令本质就是在4去中同步管理文件
```git clone``` remote->working
```git add``` working->staging
```git commit``` staging->Lrepo
```git push``` Lrepo->Rrepo

```git fetch``` Rrepo最新更新->Lrepo
```git merge``` Lrepo->working
```git pull``` 更新working&Lrepo
## 10. Desktop进阶操作
## 11.==4区3态==
> 4区
> Working Directory(工作区)
> Stage/Index()
> Repo
> Remote 
> 3态
> Modified 修改
> Staged 暂存
> Committed 本地仓
## 12. git命令行
> ==初始化==配置用户名和邮箱
> ```git config user.name```
> ```git config user.email```
>==创建repo== 
>```git clone```远程克隆
>```git init (name)```创建仓库
>==添加&提交==
> ```git add file```
> ```git add .``` 所有
> ```git commit -m "备注"```
> ```git commit -am "备注"```所有
> ==分支==
> ```git branch```查看分支
> ```*```当前 ```-r```远程 ```-a```所有
>```git branch name```
>```git checkout name```切换到并更新
>```git checkout -b name```创建并切换到
>```git branch -d name```删除一个已合并分支
>```git branch -D name```删除分支
>```git tag name```提交打标签
>```git pull origin branch-name --allow-unrelated-histories```