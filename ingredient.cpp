#include "ingredient.hpp"
#include <bits/stdc++.h>
using namespace std;

int Ingredient::calcIngredientCost(int qty) { 
    return qty*price;
}

string Ingredient::getName() { return name; }
int Ingredient::getPrice() { return price; }