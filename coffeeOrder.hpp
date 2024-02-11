# pragma once

#include "ingredient.hpp"
#include "coffeeType.hpp"
#include "bits/stdc++.h"
using namespace std;

class CoffeeOrder {
        CoffeeType* coffee;
        vector<Ingredient*> ingredients;
        unordered_map<string,int> ingredientsQty;
        int coffeeCost;
        int ingredientsCost;
        int coffeeQty;
        int totalBill;
    public:
        CoffeeOrder(CoffeeType* coffee, vector<Ingredient*> ingredients, unordered_map<string,int> ingredientsQty, int coffeeQty) : coffee(coffee), ingredients(ingredients), ingredientsQty(ingredientsQty), coffeeQty(coffeeQty){}
        void calculateCoffeeCost();
        void calculateTotalBillCost();
        void showDetailedBill();
};