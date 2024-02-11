#include "coffeeOrder.hpp"
#include "ingredient.hpp"
#include "coffeeType.hpp"
#include <bits/stdc++.h>
using namespace std;

void CoffeeOrder::calculateCoffeeCost(){

    for(auto ingredient : ingredients){
        string ingredientName = ingredient->getName();
        ingredientsCost+= (ingredient->getPrice() * ingredientsQty[ingredientName]);
    }
    coffeeCost+=ingredientsCost;
    coffeeCost+= coffee->getPrice();
}
void CoffeeOrder::calculateTotalBillCost(){
    totalBill = coffeeQty * coffeeCost;
}
void CoffeeOrder::showDetailedBill(){
    calculateCoffeeCost(); 
    calculateTotalBillCost();
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<" Showing detailed bill "<<endl;
    cout<<" Coffee Type Preparation Cost: "<< coffee->getPrice() * coffeeQty << endl;
    cout<<" Cost of Ingredients: "<<ingredientsCost* coffeeQty << endl;
    cout<<" Quantity of coffee: "<<coffeeQty << endl;
    cout<<" Cost of single coffee: "<<coffeeCost<<endl;
    cout<<" Total Bill Cost: "<<totalBill<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
}