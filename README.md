<!--
 * @Author: pengpengfei97 pengpengfei97@gmail.com
 * @Date: 2023-02-07 20:10:47
 * @LastEditors: pengpengfei97 pengpengfei97@gmail.com
 * @LastEditTime: 2023-03-10 23:24:59
 * @FilePath: /leetcode_daily/README.md
 * @Description: 
 * 
 * Copyright (c) 2023 by pengpengfei, All Rights Reserved. 
-->
# 一个用来记录leetcode刷题过程的仓库

## 前期准备

几年前也有断断续续的刷过力扣上的题目，但通常都是刷了就忘，所以决定汲取一些前人的经验，以提高自己的刷题质量。

### 视频参考

1. [新手必看，如何上手刷题？刷完300题的干货攻略LeetCode](https://www.bilibili.com/video/BV1yi4y1M7b6/?spm_id_from=333.337.search-card.all.click&vd_source=282f37391013c05220098e8ba9716446)

2. [Leetcode（力扣）1600多道题目，刷哪些？什么顺序？刷多少？难度怎么分配？](https://www.bilibili.com/video/BV1UA411q7cL/?spm_id_from=333.788.top_right_bar_window_history.content.click&vd_source=282f37391013c05220098e8ba9716446)

### 书籍准备

始终觉得找本书作为参考，以书中的目录结构刷题可以使自己的思路更清晰，记忆效果或许也更好。本来开始打算用《剑指offer》作为参考书籍，后来在图书馆找书的过程中发现了《编程之法》这本书，相比与《剑指offer》针对面试整个过程细致入微的讲解，感觉《编程之法》结构更清晰明了，所以打算以《编程之法》为主要参考书籍，结合《剑指offer》的内容，再将视频里提到的学习顺序和方法结合起来，配套使用 😋

1. [《编程之法：面试和算法心得》](https://book.douban.com/subject/26641732/)  
在豆瓣找这本书的时候发现这本书的评价好低，大多是说其内容东拼西凑且并非原创。不过我用这本书的目的主要是根据它的目录列一个自己的刷题大纲，且有几道题让我初步了解这个模块的内容，所以也还ok）

2. [《剑指offer：名企面试官精讲典型编程题》](https://book.douban.com/subject/25910559/) 

## 学习顺序

学习顺序是将上面两本书籍的目录和视频里建议的顺序结合起来设定的

### 数据结构部分

#### 字符串

1. [字符串的旋转](DataStructure/string/string_rotate.cpp)
2. [单词翻转](DataStructure/string/word_rotate.cpp)
3. [字符串的包含](DataStructure/string/string_contain.cpp)
4. [回文串判断](DataStructure/string/is_palindrome.cpp)
5. [最大回文串数量计算](DataStructure/string/longest_palindrome.cpp)

- 简单
    1. [旋转字符串-796](https://leetcode.cn/problems/rotate-string/)
    2. [统计包含给定前缀的字符串-2185](https://leetcode.cn/problems/counting-words-with-a-given-prefix/)
    3. [最长公共前缀 -14](https://leetcode.cn/problems/longest-common-prefix/)

- 中等
    1. [交错字符串-97](https://leetcode.cn/problems/interleaving-string/)  
    看起来是字符串，其实主要还是动态规划的知识点，刚开始刷题且第一次做动态规划，一道题磕了一晚上,有被难到 TT。掌握了动态规划的基本思想，同时get了使用vector创建并初始化二维数组的方法。
    2. [字符串解码-394](https://leetcode.cn/problems/decode-string/)   
    字符串和栈的结合，因为还没看栈的题加上对栈有点忘了，也用了一点时间。
    3. [无重复字符的最长子串-3](https://leetcode.cn/problems/longest-substring-without-repeating-characters/)
    4. [在排序数组中查找元素的第一个和最后一个位置-34](https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array)   
    二分查找及其相关应用


#### 数组

- 简单
    1. [删除有序数组中的重复项-26](https://leetcode.cn/problems/remove-duplicates-from-sorted-array/)
    2. [杨辉三角-118](https://leetcode.cn/problems/pascals-triangle/)    
    主要get了里面不同长度vector的创建方法，比如初始化的时候只给最外围的vector赋长度，后面在for循环里用resize重新赋长度。
- 中等
    1. [盛最多水的容器-11](https://leetcode.cn/problems/container-with-most-water/)
    2. [跳跃游戏-55](https://leetcode.cn/problems/jump-game/)
    3. [有效的数独-36](https://leetcode.cn/problems/valid-sudoku/)

#### 链表
#### 树
#### 栈和队列
- 中等
    1. [字符串解码-394](https://leetcode.cn/problems/decode-string/)（字符串）
#### 哈希表
- 中等
    1. [无重复字符的最长子串-3](https://leetcode.cn/problems/longest-substring-without-repeating-characters/)(字符串)
    2. [有效的数独-36](https://leetcode.cn/problems/valid-sudoku/)(数组)
#### 数学

### 算法部分

#### 查找和排序
- 中等
    1. [在排序数组中查找元素的第一个和最后一个位置-34](https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array)  
#### 动态规划
- 中等
    1. [交错字符串-97](https://leetcode.cn/problems/interleaving-string/)（字符串）

#### 递归和循环
#### 贪心算法
#### 双指针
- 简单
    1. [删除有序数组中的重复项-26](https://leetcode.cn/problems/remove-duplicates-from-sorted-array/)(数组)
- 中等
    1. [盛最多水的容器-11](https://leetcode.cn/problems/container-with-most-water/)(数组)
#### 深度优先和广度优先
#### 滑动窗口
- 中等
    1. [无重复字符的最长子串-3](https://leetcode.cn/problems/longest-substring-without-repeating-characters/)(字符串)
#### 回溯
#### 位运算
