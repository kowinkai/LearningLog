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