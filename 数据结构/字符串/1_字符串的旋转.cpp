/*
 * @Author: pengpengfei97 pengpengfei97@gmail.com
 * @Date: 2023-02-07 20:19:04
 * @LastEditors: pengpengfei97 pengpengfei97@gmail.com
 * @LastEditTime: 2023-02-07 22:11:43
 * @FilePath: /leetcode_daily/数据结构/字符串/1_字符串的旋转.cpp
 * @Description: 
 * 
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved. 
 */


#include <string>
#include <iostream>

// ------------------------------- 我的解法 ----------------------------------

/**
 * @description: 我的解法
 * @param {string} s
 * @param {int} l
 * @param {int} n
 * @return {*}
 */
std::string move(std::string s, int l,int n)
{
    // int l = s.size();   // l为字符串的长度
    std::string temp;

    // 先把前面要移动的n个字符放入中间遍历
    for(int i = 0; i < n; i++)
        temp[i] = s[i];
    for(int i = 0; i < l; i++)
    {
        if(i < l - n) s[i] = s[i + n];
        else s[i] = temp[i - l + n];
    }
    return s;
}

// ------------------------- 解法一：蛮力解法” --------------------------------

/**
 * @description: 先定义一个函数将首字符移至尾部
 * @param {string} &s   字符串
 * @param {int} l   字符串长度
 * @return {*}
 */
void LeftShiftOne(std::string &s, int l)    
{
    char t = s[0];
    for(int i = 1; i < l; i++)
    {
        s[i - 1] = s[i];
    }
    s[l - 1] = t;
}

/**
 * @description: 让字符串首字符单独移动n次
 * @param {string} &s
 * @param {int} l   字符串长度
 * @param {int} n   字符串要移动的位数
 * @return {*}
 */
void LeftRotateString(std::string &s,int l,int n)
{
    while(n--)
    {
        LeftShiftOne(s, l);
    }
}


int main()
{
    std::string s = "abcdefg";      // 要操作的字符串
    int l = s.size();
    int n = 3;      // 要移动的字符串前面的位数

    std::cout<<"before: s = " << s << "  n = " << n << std::endl;

    // s = move(s,l,n);
    LeftRotateString(s, l ,n);

    std::cout<<"after: s = " << s << std::endl;


    return 0;
}