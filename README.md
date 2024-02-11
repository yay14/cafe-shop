Create the order and show the bill for the coffee maker:


-> Each Coffee Type has a Different Name and Prepartion Cost. You Select 1 Coffee Type only once.
-> You can add the incredients to your coffee. The quantity of the incredient is fixed and you dont get any option to modify the quantity.
-> The price of the incredients is also fixed.
-> Each coffee type will use all the incredients you select.
-> The cost of a single coffee is given by: Sum(cost of each incregients) + preparation cost of coffee type.
-> You can select the number of coffees you want.
-> The final bill is show to the user in the 5 sections below:
   1> Coffee Type Preparation Cost
   2> Cost of Ingredients(without breakup)
   3> Cost of Single Coffee
   4> Quantity Ordered
   5> Total Cost = Cost of 1 Quantity * Quantity Ordered


Provide functions for a working Machine:
-> Show Types of Coffee Available in the Machine
-> Select One Coffee Type
-> Show Ingredients Available in the Machine
-> Add Ingredients for Coffee
-> Select/Update Quantity of Coffee
-> Show Final Bill


Assumptions :
-> Infinite Supply of Ingredients.
-> Users cannot modify the Coffee Type once selected.
-> Users cannot subtract a increditent once added.


CoffeType - name, price
Ingredient - name, quantity, price


CoffeBill - coffetypecost, igCost, quantity




CoffeBill getCoffeBill(CoffeType coffeType, List<Ingredients> ingredients) {
   
}



