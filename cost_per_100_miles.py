#this program takes the user input for the 
# • The number of gallons of gas in the tank
# • The fuel efficiency in miles per gallon
# • The price of gas per gallon
# Then print the cost per 100 miles and how far the car can go with the gas in the tank

gallons = float(input("Enter the number of gallons: "))
miles_per_gallon = float(input("Enter the number of miles per gallon: "))
price = float(input("Enter the price: $ "))

cost_per_100_miles = (100/miles_per_gallon) * price

total_distance = gallons * miles_per_gallon

print("Cost per 100 miles is: $", cost_per_100_miles)
print("Total distance ca go is:", total_distance, "miles")