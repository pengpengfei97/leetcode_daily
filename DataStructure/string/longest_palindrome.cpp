/*
 * @Author: pengpengfei97 pengpengfei97@gmail.com
 * @Date: 2023-02-12 16:00:33
 * @LastEditors: pengpengfei97 pengpengfei97@gmail.com
 * @LastEditTime: 2023-02-12 19:12:00
 * @FilePath: /leetcode_daily/DataStructure/string/longest_palindrome.cpp
 * @Description: 
 * 
 * Copyright (c) 2023 by pengpengfei, All Rights Reserved. 
 */

#include <string>
#include <iostream>

using namespace std;

// --------------------------------------- 方法一 --------------------------------------
// int longestPalindrome(string s)
// {
//     if(s.length() == 0) return 0;
//     int max = 0,temp = 0;
//     for(int i = 0 ; i < s.length(); i++)
//     {
//         // 奇数情况
//         for(int j = 0; (i - j) >= 0 && (i + j) < s.length(); j++)
//         {
//             if(s[i - j] != s[i + j]) break;
//             temp = j * 2 + 1;
//         }
//         if(max < temp) max = temp;

//         // 偶数情况
//         for(int j = 0; (i - j) >= 0 && (i + j + 1) < s.length(); j++)
//         {
//             if(s[i - j] != s[i + j + 1]) break;
//             temp = j * 2 + 2;
//         }
//         if(max < temp) max = temp;
//     }

//     return max;
    
// }

// ------------------------------------ 方法二 -------------------------------------------
int longestPalindrome(string s)
{
    int len = s.length();
    int max = 0,temp = 0;
    for(int i = 0; i < len *2 - 1;i++)
    {
        int left = i/2;
        int right = left + i%2;
        while(left >= 0 && right < len && s[left] == s[right])
        {
            temp = right - left + 1;
            left--;
            right++;
        }
        if(max < temp) max = temp;
    }
    return max;
}

int main()
{
    string s = "abaaaba";
    cout << longestPalindrome(s) <<endl;

}