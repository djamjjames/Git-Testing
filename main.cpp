/* 
 * File:   main.cpp
 * Author: James
 *
 * Created on June 15, 2013, 12:53 AM
 */

#include <cstdlib>
#include<iostream>
#include<vector>
#include<string>
#include"Sales_data.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    vector<Sales_data> v1;
    Sales_data currentData(cin);
    v1.push_back(currentData);
    cout<<currentData.getISBN()<<endl;
}

