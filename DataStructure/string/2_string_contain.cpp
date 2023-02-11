/*
 * @Author: pengpengfei97 pengpengfei97@gmail.com
 * @Date: 2023-02-11 19:40:12
 * @LastEditors: pengpengfei97 pengpengfei97@gmail.com
 * @LastEditTime: 2023-02-11 21:40:28
 * @FilePath: /leetcode_daily/DataStructure/string/2_string_contain.cpp
 * @Description: 给定一长字符串a和一短字符串b，快速判断出短字符串b中的所有字符是否都在长字符串a中
 * 
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved. 
 */

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

/**
 * @description: 我的解法
 * @param {string} a
 * @param {string} b
 * @return {*}
 */
// bool StringContain(string a,string b)
// {
//     for(int i = 0; i < b.size(); i++)
//     {
//         for(int j = 0; j < a.size(); j++)
//         {
//             if(b[i] == a[j]) break;
//             if(j == (a.size() - 1) ) return false;
//         }
//         //if(i == b.size() - 1) return false;
//     }
//     return true;
// }


/**
 * @description: 蛮力轮询
 * @param {string} &a
 * @param {string} &b
 * @return {*}
 */
// bool StringContain(string &a, string &b)
// {
//     for(int i = 0; i < b.length(); ++i)
//     {
//         int j;
//         for(j = 0; (j < a.length()) && (a[j] != b[i]); ++j);
//         if( j >= a.length()) return false;
//     }
//     return true;
// }


/**
 * @description: 排序后轮询
 * @param {string} &a
 * @param {string} &b
 * @return {*}
 */
// bool StringContain(string &a, string &b)
// {
//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());
    
//     for(int pa = 0, pb = 0; pb < b.length();)
//     {
//         while((pa < a.length()) && (a[pa] < b[pb])) pa++;
//         if((pa >= a.length()) || (a[pa] > b[pb])) return false;
//         pb++;
//     }
//     return true;
// }

/**
 * @description: 位运算法
 * @param {string} &a
 * @param {string} &b
 * @return {*}
 */
bool StringContain(string &a, string &b)
{
    int hash = 0;
    for(int i = 0; i < a.length(); i++) hash |= (1 << (a[i] - 'A'));
    for(int i = 0; i < b.length(); i++)
        if((hash & (1 << (b[i] - 'A'))) == 0) return false;
    return true;
}

int main()
{
    string a = "ABCDEE";
    string b = "CDEAAE1";
    cout << StringContain(a, b) << endl;
}