# pragma once

#include "ingredient.hpp"
#include "coffeeType.hpp"
#include <bits/stdc++.h>
using namespace std;

class CoffeeInventory {
        unordered_map<string,Ingredient*> ingredientList;
        unordered_map<string,CoffeeType*> coffeeTypeList;
    public:
        Ingredient* findIngredientByName(string name) ;
        CoffeeType* findCoffeeTypeByName(string name) ;
        void addIngredient(Ingredient* ingredient) ;
        void addCoffeeType(CoffeeType* coffeeType) ;
        void showIngredients();
        void showCoffeeTypes();
};