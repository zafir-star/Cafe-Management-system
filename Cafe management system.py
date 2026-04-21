menu={

    'Pizza':60,

    'Pasta':40,

    'Burger':30,

    'Momos':90,

    'Coffee':20,

    'Salad':10,

}

print("Welcome to My Restourant")

print("Pizza:60tk\nPasta:40tk\nBurger:30tk\nMomos:90tk\nCoffee:20tk\nSalad:10")

order_total=0

item_1=input("Enter the number of Item")

if item_1 in menu:

    order_total+=menu[item_1]

    print("Your Item {item_1} has been added to your cart.")

else:

    print("Item is not Available.")

another_order=input("Do you want another item(yes/no)?")

if another_order=="Yes":

    item_2=input("Enter the name of second item:")

    if item_2 in menu:

    order_total+=menu[item_2]

    print("Your Item {item_2} has been added to your cart.")

else:

    print("Item is not Available.")

print("The total ammount of item to pay{order_total}")