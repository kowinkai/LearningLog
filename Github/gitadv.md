## Git进阶

### Git简介
- 开源的分布式的版本管理系统
- 发明人Linus Torvalds（Linux创始人）
- 目的是管理Linux Kernel源代码
- 2005年4月开始开发
- 2005年6月开始管理Linux Kernel
- 2005年12月发布v1.0版

### 三个区域
- Working Directory(工作区)
  - Stage Fixes -> Staging Area
- Staging Area(暂存区)
  - commit -> .git directory
- .git directory(Repository)(仓库区)
  - Checkout the project -> Working Directory

### 四种状态
- Untracked(工作区-未跟踪)
  - Add the file -> Staged
- Unmodified(仓库区-未修改)
  - Edit the file -> Modified
  - Remove the file -> Untracked
- Modified(工作区-已修改)
  - Stage the file -> Stage the file
- Staged(暂存区)
  - Commit -> Unmodified


### Git GUI
- Git GUI
  - Git官方工具，可以图形界面操作
    - 视图区如果显示乱码需要修改Encoding -> UTF-8-  
  - gitk
    - Repository -> Vsualize All Branch Histroy(命令gitk)
- SourceTree
  - SourceTree 是 Windows 和Mac OS X 下免费的 Git 和 Hg 客户端，拥有可视化界面，容易上手操作。同时它也是Mercurial和Subversion版本控制系统工具。支持创建、提交、clone、push、pull 和merge等操作。
- EGit
  - EGit就是一款Eclipse上的Git插件。  

- 查看变更内容
git show
git show HEAD
git show HEAD~1

- 回退文件
git reset HEAD
  - 回撤最后一条提交的命令  

- .gitignore（忽略提交到远端仓库）
  - 在仓库目录下用vim新建.gitignore文件
  - #用来注释，输入忽略列表,每行一个。如：*.exe
  - 在Github新建仓库时，官方有提供是否添加.gitignore模板
  - 被过滤掉的文件就不会出现在git仓库中（gitlab或github）了，当然本地库中还有，只是push的时候不会上传。
  - 查询.exe是被谁忽略(会提示哪一行规则忽略)  
    git check-ignore -v .exe
  
  
   |.gitignore|忽略规则简单说明|
   |:----------:|--------------|
   |*.a|表示忽略所有 .a 结尾的文件|
   |!lib.a|表示但lib.a除外|
   |/TODO|表示仅仅忽略项目根目录下的 TODO 文件，不包括 subdir/TODO|
   |build/|表示忽略 build/目录下的所有文件，过滤整个build文件夹；|
   |doc/*.txt|表示会忽略doc/notes.txt但不包括 doc/server/arch.txt|
   |bin/:|表示忽略当前路径下的bin文件夹，该文件夹下的所有内容都会被忽略，不忽略 bin 文件|
   |/bin:|表示忽略根目录下的bin文件|
   |/*.c:|表示忽略cat.c，不忽略 build/cat.c|
   |debug/*.obj:|表示忽略debug/io.obj，不忽略 debug/common/io.obj和tools/debug/io.obj|
   |**/foo:|表示忽略/foo,a/foo,a/b/foo等|
   |a/**/b:|表示忽略a/b, a/x/b,a/x/y/b等|
   |!/bin/run.sh|表示不忽略bin目录下的run.sh文件|
   |*.log:|表示忽略所有 .log 文件|
   |config.php:|表示忽略当前路径的 config.php 文件|
   |/mtk/|表示过滤整个文件夹|
   |*.zip|表示过滤所有.zip文件|
   |/mtk/do.c|表示过滤某个具体文件|
   |!*.zip|指定要将哪些文件添加到版本管理中|
   |!/mtk/one.txt|指定要将哪些文件添加到版本管理中|
   |/mtk/*|如有添加，忽略不能写为/mtk/，否则父目录被前面的规则排除掉了|
   |fd1/*|忽略目录 fd1 下的全部内容，任何目录下的fd1/目录都会被忽略|

  忽略例子：  
```
/*
!.gitignore
!/fw/ 
/fw/*
!/fw/bin/
!/fw/sf/
说明：忽略全部内容，但是不忽略 .gitignore 文件、根目录下的 /fw/bin/ 和 /fw/sf/ 目录；注意要先对bin/的父目录使用!规则，使其不被排除。
```

- 换行符
  - CR:carriage return回车，光标到首行；'\r' = return
  - LF:line feed换行，光标下移一行； '\n' = newline
    - Linux:换行 \n
	- Windows:换行 \r\n
	- MAC OS:换行 \r  
	 
  - 自动转换不同平台换行  
    - 提交时转换为LF，检出时转换为CRLF（默认是true开启的）  
	  git config --global core.autocrlf true  
	  
	- 允许提交包含混合换行符的,如下：(添加后无警告信息)  
	  git config --global core.safecrlf false  
	
	- 查询配置  
	  git config --list  
	  
- 别名
  - 别名设置(将status别名设置为st)  
    git config --global alias.st status  
	
  - 以图形格式显示log  
    git log --pretty=format:'%h %ad | %s%d [%an]' --graph --date=short  
	
	- 改别名为vi(view)  
	  git config --global alias.vi log --pretty=format:'%h %ad | %s%d [%an]' --graph --date=short  
	- 也可以到配置内[alias]项添加内容  

- 凭证
  - 存储凭证(http协议适用)  
    git config --global credential.helper wincred  
	
  - 方法二看Git入门

- 传输协议
  - 本地协议
    - 克隆本地仓库  
	  git clone /c/wd/test.git  
	  
	- 克隆本地仓库（不建议使用）  
	  git clone file:///c/wd/test.git  
	  
	- 添加远程仓库链接
	  git remote add origin /c/wd/test.git  
	  
  - Git协议  
    - 克隆远程仓库  
	  git clone git://server_ip/test.git  
	  
	- 添加远程仓库的链接  
	  git remote add origin git://server_ip/test.git  
	  
	- 权限缺点是只读或全写，需要配合SSH协议使用，优点是传输快需要开9418端口  
	
  - HTTP协议
    - 克隆远程仓库  
	  git clone https://github.com/.../test.git  
	  
	- 添加远程仓库链接  
	  git remote add origin https://github.com/.../test.git  
	  
	- 优点是简单方便，使用HTTP/HTTPS端口；缺点是公司自建服务器繁琐，传输效率差一些。  
	
  - SSH协议  
    - 克隆远程仓库，一般写成简短的命令  
	  git clone ssh://git@github.com/.../test.git  
	  git clone git@github.com:.../test.git  
	  
	- 添加远程仓库的链接  
	  git remote ad origin git@github.com:.../test.git  
	  
	- 生产RSA密钥对（在GitHub网站添加公钥）  
	  ssh-keygen -t rsa -C "your email"  
	  
	- 查询公钥信息（复制粘贴到Github里面）  
	  cat id_rsa.pub  
	  
	  
- 命令信息  
  git  
  
- 查看全部git子命令  
  git help -a  
  
- 逐行查看文件的修改历史  
  git blame \<file name>  
	  
- 从第100行开始，到110行。逐行查看文件修改历史  
  git blame -L 100,110 \<file name>  
  
- Untracked文件清除
  - 列出打算清除的档案）  
    git clean -n  
  
  - 删除文件（执行）  
  git clean -f  
  
  - 连.gitignore中忽略的文件也清除  
  git clean -x -f
  
- status查询（精简参数）  
  git status -sb  
  
- 文件变动添加到暂存区（新建、删除、编辑、改名、移动等）  
  git add .  
  - 使用git命令进行的删除变动等是有跟踪的，可以回撤  
  - 直接进行删除变动是不会进入暂存区（跟踪），需要手动添加到暂存区  
  
- 一个文件多个提交（会有提示分隔提交）  
  git add -p \<file name>
  - Stage this hunk [y,n,q,a,d,/,s,e,?]?
    y=全部添加 n=不添加 q=退出 a= d= s=分隔添加  

- 工作区与暂存区变更查询
  git diff \<file name>
  
- 暂存区与已提交变更查询  
  git diff --cached
  
- git commit mothed 1(新建文件必须分开提交)  
  git add .  
  git commit -m "message"  
  
- git commit mothed 2  
  git commit -a -m "message"  
  
- git commit mothed 3  
  git commit -am "message"  
  
  
- commit提交要保证适当的颗粒度、相关性和独立性  
  - 以一个小功能、小改进或一个bug fix为单位  
  - 对应的unit test程序在同一个commit  
  - 无相关的修改不在同一个commit
  - 语法错误的半成品程序不能commit  

- commit message规范(现在常用的有Angular规范)  
  - type常用类型:  
    - feat:新功能(feature)
	- fix:修补bug  
	- docs:文档(documentation)
	- style:格式(不影响代码运行的变动)
	- refactor:重构(即不是新功能，也不是修改bug的代码变动)
	- test:添加测试
	- chore:构建过程或辅助工具的变动  
	
	```
	<type>(scope):<subject>  //类型 范围 主题
	// 空一行  
	<body>
	// 空一行
	<footer>
	```
	- git commit后面不带参数就可以多行编辑(还可以关闭requests)
	详细查阅：
	www.ruanyifeng.com/blog/2016/01/commit_message_change_log.html
	

- short and branch  
  git status -sb  
  
- 查看某个提交信息  
  git show HEAD  
  
- 查看提交历史  
  git log \<file name>  
  git log --grep <msg>