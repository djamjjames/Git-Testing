/* 
 * File:   Sales_data.cpp
 * Author: James
 * 
 * Created on June 15, 2013, 3:03 PM
 */

#include "Sales_data.h"

Sales_data::Sales_data(string ISBN,  int units_sold, double price):m_units_sold(units_sold),m_ISBN(ISBN),m_price(price) {
}

Sales_data::Sales_data(std::istream &is) {
    read(is);
}

Sales_data::Sales_data(const Sales_data& orig) {
}

Sales_data::~Sales_data() {
}

Sales_data::Sales_data() {
    m_ISBN=" ";
    m_units_sold=0;
    m_price=0;
}

