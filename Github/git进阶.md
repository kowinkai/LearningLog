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