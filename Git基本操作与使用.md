# Git基本操作与使用

## 一 、命令模式

### 1、常用命令

#### 1.1 、查看项目远程地址

 git remote

 git  remote -v 查看详情， 如果没有（push）则没有推送远程权限

#### 1.2、查看远程项目所有分支

git branch -a

 #### 1.3、查看当前仓库基本信息

git remote show origin

#### 1.4、切换分支

git check <name> / git switch <name>

注释：当前分支如果有修改则切换失败，需要优先提交代码

#### 1.5、创建+切换分支

git checkout -b <name> / git switch -c <name>

#### 1.6、 合并分支到当前分支

git merge <name>

#### 1.7、 删除分支

git branch -d <name> 已提交的分支

git branch -D <name> 强行删除，无论是否提交

#### 1.8、 查看分支合并图

git log --graph

#### 1.9、合并分支上的一条提交记录

git cherry-pick <commit>

注: 需要git log 获取当前提交记录的sha1码，切换到需要合并的分支，执行命令

#### 1.10、推送分支到远程仓库

git push origin <branch-name>

#### 1.11、建立分支链接

git branch --set-upstream branch-name origin/branch-name



## 二、Git常见报错解决方案

#### 1、OpenSSL SSL_read: Connection was reset, errno 10054

解决方案：修改设置解除SSL验证

git config --global http.sslVerify "false"

#### 2、fatal: remote origin already exists

解决方案：：

  1、先输入$ [git](http://lib.csdn.net/base/git) remote rm origin

  2、再输入$ git remote add origin git@github.com:djqiang/gitdemo.git 就不会报错了！

  3、如果输入$ git remote rm origin 还是报错的话，error: Could not remove config section 'remote.origin'. 我们需要修改gitconfig文件的内容

  4、找到你的github的安装路径，我的是C:\Users\ASUS\AppData\Local\GitHub\PortableGit_ca477551eeb4aea0e4ae9fcd3358bd96720bb5c8\etc

  5、找到一个名为gitconfig的文件，打开它把里面的`[remote "origin"]那一行`删掉就好了！

#### 3、看不到远程分支

解决方案：

1、先用fetch命令更新remote索引

$ git fetch

2、再查看remote分支，发现已经可以看到目标分支

$ git branch -a

3、再切换分支

$ git checkout dev-1.0

4、如需合并master分支到dev-1.0，则执行：

$ git merge master



https://www.cnblogs.com/ningboliuwei/p/6606279.html

















