/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zroehl
 *
 * Created on November 6, 2017, 1:09 PM
 */

#include <iostream>
#include <regex>

using namespace std;



int main() {
    
    cout << "Please input IP header" << endl;
    
    string source;
    cin >> source;
    string destin;
    cin >> destin;
   
    regex pattern("(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5]).){3}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])$");
    
    try
    {
        if(regex_match(source,pattern))
        {
            if(regex_match(destin,pattern))
            {
                cout << "Valid IP Header." << endl;
            }
            else
            {
                throw string("Destination IP Address is invalid.");
            }
        }
        else
        {
            throw string("Source IP Address is invalid.");
        }
    }
    catch(string &exe)
    {
        cout << "Invalid IP header - " << exe << endl;
    }
}

