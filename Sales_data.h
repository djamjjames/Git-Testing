/* 
 * File:   Sales_data.h
 * Author: James
 *
 * Created on June 15, 2013, 3:03 PM
 */

#ifndef SALES_DATA_H
#define	SALES_DATA_H
#include<string>
#include<iostream>
using namespace std;
using std::string;
using std::cin;
using std::cout;
using std::endl;

class Sales_data {
public:
    Sales_data(std::string ISBN,  int units_sold, double price);
    Sales_data(const Sales_data& orig);
    Sales_data(std::istream &is);
    Sales_data();
    virtual ~Sales_data();
    string getISBN  () {
        return m_ISBN;
    }
    double getPrice  () {
        return m_price;
    }
    int getUnitsSold  () {
        return m_units_sold;
    }
    void read(std::istream& it) {
        cout<<"Please enter ISBN: "<<endl;
        it>>m_ISBN;
        cout<<"Please enter price: "<<endl;
        it>>m_price;
        cout<<"Please enter units sold: "<<endl;
        it>>m_units_sold;
    }
private:
     int m_units_sold;
    double m_price;
    string m_ISBN;
    

};

#endif	/* SALES_DATA_H */

