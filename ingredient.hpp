# pragma once

#include <bits/stdc++.h>
using namespace std;

class Ingredient {
        string name;
        int price;
    public:
        Ingredient(string name, int price): name(name), price(price){}
        string getName() ;
        int getPrice() ;
        int calcIngredientCost(int qty);
};