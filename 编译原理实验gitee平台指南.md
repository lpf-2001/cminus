
# 2021年秋编译原理实验平台手册
---
## 实验仓库&注册
[实验仓库地址](https://gitee.com/IceyBlackTea/cminus_compiler-2021-fall) ⬅实验相关的说明文档以及代码框架都在这里。

### 注册

>网页右上角可以找到注册的入口

>请在[个人信息](https://gitee.com/profile)页将自己的姓名修改成学号-姓名
>
>（如201708030211-程泽群）
>
>如果已经完成注册不想改名字，那么请在这一页的**自我介绍**栏写上自己的姓名、班级、学号，这样方便我们确认你的身份并进行实验的后续验收

---

## 实验仓库的搭建

### 将实验仓库fork到自己的目录下
进入[实验仓库根目录](https://gitee.com/IceyBlackTea/cminus_compiler-2021-fall)，选择上方右侧的 fork 选项，即可在你自己的账号中创建一个实验仓库的分支。

在接下来的实验中，你要完成的主要工作都需要上传到这个你创建的分支中，包括完成的代码、自测结果以及实验报告。

### 设置仓库为私有
出于防止抄袭行为的考虑，你需要将你 fork 出的这个仓库设置为**私有**。如果你不知道如何设置，可以参考下面的步骤：

> 1、首先点击页面右上角自己的头像进入个人主页
> 
> 2、找到你fork出的`cminus_compiler-2021-fall`，进入这个目录
>
> 3、在页面上方横向标签(\<\/\>代码，issues，Pull Requests，……)中，选择最右侧的**管理（settings）**按钮
> 
> 4、进入管理页面后，在**是否开源**选项中选择**私有（仅仓库成员可见）**，并点击下方的**保存**

### 将助教设置为观察员

> 1、和上面一样，先进入自己仓库的管理页面，在左侧表签中选择**仓库成员管理**，在下拉菜单中选择**观察者**，再选择右上角橙色高亮的**添加仓库成员**选项，选择邀请成员。
> 
> 2、在邀请成员界面，选择三个选项中间的**直接添加**，并选择权限为**观察者**，然后输入助教的用户标识，
> 
> 例如：HNU-BYYL-2021fall-class-3-5
> 
> 然后点击添加即可

### 将实验仓库克隆到本地

打开本地的工作目录，在命令行中输入

`git clone https://gitee.com/你的gitee用户名/cminus_compiler-2021-fall.git`

### 将工作上传至git仓库

打开本地的工作目录，在命令行中输入

`git add *`

`git commit -m "注释语句"`

然后push到仓库

`git push`

---

以下还有一些关于git的使用总结，如果仍然无法解决你的问题，可以尝试通过搜索引擎搜索解决方案。

**开发中常用操作**

```
/global/home/users/rdmaworkshop05/.ssh/id_rsa
```

删除文件：git rm 文件名[删除本地git仓库文件, 提交后远程服务器上的文件才会消失]

查看状态：git status

添加记录：git add 文件名 或 git add . [将文件提交到远程git服务器上]

添加描述：git commit -m "描述或备注类似svn提交时的注释"

同步数据：git pull [获取git远程服务器上的数据也可以具体到某一分支如: git pull origin 分支名]

提交数据：git push origin 分支名



验证账号：

ssh-agent bash

ssh-add ~/.ssh/id_rsa

ssh -T git@github.com



**分支操作**

查看分支：git branch

创建分支：git branch 分支名

切换分支：git checkout 分支名

创建+切换分支：git checkout -b 分支名

合并某分支到当前分支：git merge 分支名

　　[比如，如果要将开发中的分支（deve），合并到稳定分支（master），
   首先切换的master分支：git checkout master。
   然后执行合并操作：git merge deve。
   如果有冲突，会提示你，调用git status查看冲突文件。
   解决冲突，然后调用git add或git rm将解决后的文件暂存。
   所有冲突解决后，git commit 提交更改。]



删除自上次commit后所有更改

 git reset --hard 



## 代码冲突解决办法

有两种

1. ```sh
   git stash #将自己的改动放入堆栈
   git pull
   git stash pop #复原自己的更改
   ```

   保留原代码改动，拉新代码。

   
   
2. 强行用代码库中文件完全覆盖本地工作版本。本地的更改会丢失

   ```shell
   git reset --hard
   git pull
   ```

   



## ssh key:

https://blog.csdn.net/u013778905/article/details/83501204

**GitHub配置SSH Key的目的是为了帮助我们在通过git提交代码时，不需要繁琐的验证过程，简化操作流程。**

Ssh key 存放路径：

~/.ssh/id_rsa.pub



**分区**

　　**三个分区：工作区，缓存区，版本库**

　　**三个分区之间的联系：**

　　　　**工作区 >> git add >> 缓存区 >> git commit >> 版本库**

**输入命令**

　　**>a（新建文件夹a）**

　　**git status**
