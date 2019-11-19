#include <iostream> 
#include<bits/stdc++.h> 

using namespace std; 

string findSum(string num1, string str2) 
{ 
    if (num1.length() > str2.length()) 
        swap(num1, str2); 

    string str = ""; 

    int n1 = num1.length(), n2 = str2.length(); 

    reverse(num1.begin(), num1.end()); 
    reverse(str2.begin(), str2.end()); 

  

    int carry = 0; 

    for (int i = 0; i < n1; i++) 
    {
        int sum = ((num1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0');
        carry = sum > 9? 1: 0; 
    } 


    for (int i=n1; i<n2; i++)
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum > 9? 1 : 0; 
    } 

    if (carry > 0){
        str.push_back(carry+'0'); 
    }

    reverse(str.begin(), str.end()); 

  
    return str; 
} 

int main() 
{ 

    string num1 = "321"; 

    string str2 = "45678"; 

    cout << findSum(num1, str2); 

    return 0; 
} 