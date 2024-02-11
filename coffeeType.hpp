# pragma once

#include <bits/stdc++.h>
using namespace std;

class CoffeeType{
        string name;
        int price;
    public:
        CoffeeType(string name, int price): name(name), price(price) {}
        string getName() ;
        int getPrice() ;
};