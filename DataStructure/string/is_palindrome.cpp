/*
 * @Author: pengpengfei97 pengpengfei97@gmail.com
 * @Date: 2023-02-12 15:11:30
 * @LastEditors: pengpengfei97 pengpengfei97@gmail.com
 * @LastEditTime: 2023-02-12 15:42:54
 * @FilePath: /leetcode_daily/DataStructure/string/is_palindrome.cpp
 * @Description: 回文判断：即字符串正读和反读都一样
 * 
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved. 
 */

#include <iostream>
#include <cstring>
/**
 * @description: 两端同时往中间遍历
 * @param {char} *s
 * @param {int} len
 * @return {*}
 */
bool isPalindrome(const char *s, int len)
{
    if(s == NULL || len < 1) return false;
    const char *first, *last;       //这里关于字符和字符指针的用法还有点不懂。。。
    first = s;
    last = s + len - 1;
    
    while(first < last)
    {
        if(*first != *last) return false;
        first++;
        last--;
    }
    return true;
}


int main()
{
    char s[] = "heleaah";
    int len = strlen(s);
    std::cout<<isPalindrome(s, len)<<std::endl;

}