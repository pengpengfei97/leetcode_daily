/*
 * @Author: pengpengfei97 pengpengfei97@gmail.com
 * @Date: 2023-02-08 21:10:21
 * @LastEditors: pengpengfei97 pengpengfei97@gmail.com
 * @LastEditTime: 2023-02-08 21:34:08
 * @FilePath: /leetcode_daily/DataStructure/字符串/1_test_单词翻转.cpp
 * @Description: 字符串翻转举一反三：单词翻转
 * 
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved. 
 */

#include <string>
#include <iostream>

/**
 * @description: 字符翻转函数
 * @param {string} &s   字符串
 * @param {int} first   翻转首位
 * @param {int} last    翻转末尾
 * @return {*}
 */
void ReverseString(std::string &s, int first, int last)
{
    while(first < last)
    {
        char t = s[first];
        s[first++] = s[last];
        s[last--] = t;
    }
}

/**
 * @description: 句子翻转函数，先对句子整体翻转，然后遍历句子，遇到空格将空格前对应单词翻转一次
 * @param {string} &s
 * @return {*}
 */
void LeftRotateWord(std::string &s)
{
    int l = s.size();
    ReverseString(s,0,l-1);
    for(int i = 0,j = 0; i < l; i++)
    {
        if(s[i] == ' ')
        {
            ReverseString(s,j,i-1);
            j = i + 1;
        }
        if(i == l-1) ReverseString(s,j,i);
    }
}

int main()
{
    std::string s = "I am a student.";      // 要操作的字符串

    std::cout<<"before: s = " << s  << std::endl;

    // s = move(s,l,n);
    // LeftRotateString_1(s, l ,n);
    LeftRotateWord(s);

    std::cout<<"after: s = " << s << std::endl;


    return 0;
}