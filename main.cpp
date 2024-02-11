#include "coffeeType.hpp"
#include "ingredient.hpp"
#include "coffeeOrder.hpp"
#include "coffeeInventory.hpp"
#include <bits/stdc++.h>
using namespace std;

void addIngredientToInventory(string name, int price, CoffeeInventory* inventory){
    Ingredient* ingredient= new Ingredient(name, price);
    inventory->addIngredient(ingredient);
}

void addCoffeeToInventory(string name, int price, CoffeeInventory* inventory){
    CoffeeType* coffee= new CoffeeType(name, price);
    inventory->addCoffeeType(coffee);
}

int main(){
    CoffeeInventory* inventory = new CoffeeInventory();
    addIngredientToInventory("Sugar",100, inventory);
    addIngredientToInventory("Cinnamon",50, inventory);
    addIngredientToInventory("Chocolate",150, inventory);

    addCoffeeToInventory("Mocha",100, inventory); 
    addCoffeeToInventory("Caramel Delight",150, inventory); 
    addCoffeeToInventory("Hazelnul Coffee",250, inventory); 
    addCoffeeToInventory("Espresso",50, inventory); 

    cout<<"Welcome to coffee shop!"<<endl;
    cout<<"We have the following coffee options available"<<endl;
    inventory->showCoffeeTypes();
    cout<<"We have the following ingredients available"<<endl;
    inventory->showIngredients();

    // Assumes 1 order will have multiple qty of same coffee variant 
    int qty,ing;
    string coffeeType;
    vector<Ingredient*> ingredients;     
    unordered_map<string,int> ingredientsQty;
    CoffeeType* coffee; ///
    cout<<"Please select coffee variant and ingredients in format described below"<<endl;
    cout<<"Coffee type" <<endl<<"Total Ingredients"<<endl<<"Ingredient name  quantity"<<endl;
    cin>>coffeeType;
    cin>>ing;
    coffee = inventory->findCoffeeTypeByName(coffeeType);
    while(ing--){
        string name;
        int ingQty;
        cin>>name>>ingQty;
        Ingredient* ingredientObj = inventory->findIngredientByName(name);
        ingredients.push_back(ingredientObj);
        ingredientsQty[name]=ingQty;
    }

    CoffeeOrder* order= new CoffeeOrder(coffee,ingredients,ingredientsQty,qty);

    order->showDetailedBill();
}