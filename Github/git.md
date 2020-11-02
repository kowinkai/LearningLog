## Git学习

### Windows安装Git（到git官方网站下载进行安装）  
https://git-scm.com/

### Ubuntu安装Git：  
  查询版本：sudo apt-cache madison soft_name列出安装版本  
sudo apt-cache madison git  
查询版本：policy列出的信息比madison详细一些。  
sudo apt-cache policy git  
选择安装版本(xxx代表所选择的版本，省略xxx为默认指定的安装版本）  
sudo apt-get install git=xxx  

### git使用说明：  
  - Workspace:工作区
  - Index / Stage：暂存区
  - Repostitory：仓库区（或本地仓库）
  - git的概念为文件夹既是仓库

### 配置信息
  - 使用git bash（或linux命令行）进入到文件夹目录下（仓库即文件夹），配置信息  
  - 设置提交仓库时的用户名信息  
  git config --global user.name "xxx"

  - 设置提交仓库时的邮箱信息  
  git config --global user.email "xxx@xx.com"

  - 显示当前的git配置  
  git config --list

  - 查询配置文件  
  cd ~  
  ls -a  
  用vim打开.gitconfig  

  - 首先要为文件夹与git关联关联一个仓库（关联成功显示master）
  git init

  - 查询当前仓库状态（在当前仓库文件夹下）
  git status

  - 仓库内新建或修改的文件需要提交git add
  git commit [文件名]

  - 仓库内修改过的文件需要提交git commit -m "提交说明信息"
  git commit -m "提交说明信息"
  - 仓库已存在的文件add与commit一并提交
  git commit -a -m "提交说明信息"

* **至此本地仓库就可以正常使用了**

-----


### github远端仓库使用：
- 设置远程仓库地址，并为远程仓库命名git remote add [shortname] [url]（本例起名：origin）  
git remote add origin https://github.com/[您的用户名]/[仓库名]

- 将本地的提交推送到远程仓库git push [remote] [branch]（要求远端仓库已建好，会求输入用户名与密码）  
git push origin master

- 将远程仓库的提交拉下到本地git pull [remote] [branch]  
git pull origin master

- 将远程仓库克隆到本地，远程不能是空仓库。（不能在master下，换个文件目录）  
git clone [远程仓库url]
- 克隆自己的远程仓库，修改文件后可以直接git push 或 git pull，非常方便！

- 注意：每次在本地的修改要先在本地git add与commit；还要注意两端同时修改造成的分叉。  

- 免输入密码设置（新版本支持Windows输一次就不用再输入，下面说的是Linux的情况）  

  1.在仓库目录下修改本地的 .git/config 文件，  
   - 将url = https://github.com/[用户名]/[仓库名]  
   - 修改为 url = git@github.com:[用户名]/[仓库名].git（github仓库上查一下Clone with SSH地址）  

  2.Linux首先检查有没有在GitHub的https://github.com/settings/keys上添加你本机的SSH key。  
  
  3.Linux用户主目录里找到.ssh目录，里面有id_rsa和id_rsa.pub两个文件，这两个就是SSH Key的秘钥对，id_rsa是私钥，不能泄露出去，id_rsa.pub是公钥，可以放心地告诉任何人。
  
  - 查询！  
  cd ~ 到用户根目录  
ls -a 查询隐藏文件夹  
  - 如果没有.ssh目录就自己做一个（输入下面指令，一路回车就做好了，做好将id_rsa.pub添加到github）  
ssh-keygen -t rsa -C "youremail@xxx.com" 
  - 如果添加了还是出现这个问题，那么问题大概率就定位在了你本机的这个git仓库并没有和这个SSH key 关联上。用下述方法解决：(回到仓库下）  
ssh-add "你的id-rsa文件地址"  
  - 注意这里ssh-add后面填的是私钥地址，如linux电脑是 /home/用户名/.ssh/id_rsa  
  - 验证是不是添加成功  
ssh git@github.com

* **至此远端仓库就可以正常使用了**

---

### Git命令：
- 查询当前版本  
git --version

- 在当前目录关联Git代码库  
git init
- 取消关联Git  
rm -rf .git

- 下载一个项目和它的整个代码历史  
  - url  格式：https://github.com/[userName]/reposName  
git clone [url]

- 添加指定文件到暂存区  
git add [file1] [file2]  
git add .

- 删除工作区文件，并且将这次删除放入暂存区  
git rm [file1] [file2]

- 改名文件，并且将这个改名放入暂存区  
git mv [file-origin] [file-renamed]

- 提交暂存区到仓库  
git commit -m [message]

- 直接从工作区提交到仓库  
  - 前提该文件已经有从库中的历史版本  
git commit -a -m [message]

- 显示变更信息  
git status

- 显示当前分支的历史版本  
git log  
git log --oneline

- 增加远程仓库，并命名  
git remote add [shortname] [url]  
git remote add origin https://github.com/kowinkai/test

- 查询关联仓库  
git remote -v

- 将本地的提交推送到远程仓库  
git push [remote] [branch]

- 将远程仓库的提交拉下到本地  
git pull [remote] [branch]

- 将远程仓库克隆到本地，远程不能是空仓库。（不能在master下，换个文件目录）  
git clone [远程仓库url]  
  - 克隆自己的远程仓库，修改文件后可以直接git push 或 git pull，非常方便！



## 作业练习有3个：
一.在本地主机练习

二.在线练习Git  
https://try.github.io/

三.闯关练习Git-it  
1.要求安装nodeJS;  
2.npm install git-it -g;  
3.打通25关；  
4.理解并记忆每关的命令；  
