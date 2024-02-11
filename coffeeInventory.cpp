#include "coffeeInventory.hpp"
#include "ingredient.hpp"
#include "coffeeType.hpp"
#include <bits/stdc++.h>
using namespace std;


void CoffeeInventory::addIngredient(Ingredient* ingredient) {
    ingredientList.insert({ingredient->getName(), ingredient});
}
void CoffeeInventory::addCoffeeType(CoffeeType* coffeeType) {
    coffeeTypeList.insert({coffeeType->getName(), coffeeType});
}
void CoffeeInventory::showIngredients(){
    cout<< "List of Ingredients available : "<<endl;
    cout<<"Name \t \t Price"<<endl;
    for(auto ingredient: ingredientList){
        cout<<ingredient.first<<" \t \t "<<ingredient.second->getPrice()<<endl;
    }
}
void CoffeeInventory::showCoffeeTypes(){
    cout<< "List of Coffee Types available : "<<endl;
    cout<<"Name \t \t Price"<<endl;
    for(auto coffeeType: coffeeTypeList){
        cout<<coffeeType.first<<" \t \t "<<coffeeType.second->getPrice()<<endl;
    }
}
Ingredient* CoffeeInventory::findIngredientByName(string name) {
    return ingredientList[name];
}
CoffeeType* CoffeeInventory::findCoffeeTypeByName(string name) {
    return coffeeTypeList[name];
}