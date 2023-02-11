/*
 * @Author: pengpengfei97 pengpengfei97@gmail.com
 * @Date: 2023-02-07 20:19:04
 * @LastEditors: pengpengfei97 pengpengfei97@gmail.com
 * @LastEditTime: 2023-02-11 21:10:13
 * @FilePath: /leetcode_daily/DataStructure/string/1_string_rotate.cpp
 * @Description: 
 * 
 * Copyright (c) 2023 by pengpengfei97@gmail.com, All Rights Reserved. 
 */


#include <string>
#include <iostream>

// ------------------------------- 我的解法 ----------------------------------

/**
 * @description: 我的解法
 * @param {string} s    操作的字符串
 * @param {int} l   字符串长度
 * @param {int} n   操作位数
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
void LeftRotateString_1(std::string &s,int l,int n)
{
    while(n--)
    {
        LeftShiftOne(s, l);
    }
}

//  ------------------------解法二：三步翻转法 ---------------------------
/**
 * @description: 字符串字符位置翻转函数
 * @param {string} &s    要操作字符串
 * @param {int} first   要操作的首位置
 * @param {int} last    要操作的末尾位置
 * @return {*}
 */
void ReverseString(std::string &s,int first,int last)
{
    while(first < last)
    {
        char t = s[first];
        s[first++] = s[last];
        s[last--] = t;
    }
}

/**
 * @description: 将整个字符串分成前后两个部分，先翻转前面部分，再翻转后面部分，最后翻转整个字符串
 * @param {string} &s   字符串
 * @param {int} l   字符串长度
 * @param {int} n   要操作的位数
 * @return {*}
 */
void LeftRotateString_2(std::string &s,int l,int n)
{
    ReverseString(s,0,n-1);
    ReverseString(s,n,l-1);
    ReverseString(s,0,l-1);
}


int main()
{
    std::string s = "abcdefg";      // 要操作的字符串
    int l = s.size();
    int n = 3;      // 要移动的字符串前面的位数

    std::cout<<"before: s = " << s << "  n = " << n << std::endl;

    // s = move(s,l,n);
    // LeftRotateString_1(s, l ,n);
    LeftRotateString_2(s, l ,n);

    std::cout<<"after: s = " << s << std::endl;


    return 0;
}