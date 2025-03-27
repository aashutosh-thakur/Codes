# You're analyzing sales data and need to group sales amounts by product category and calculate the total sales for each category. Write a Python function calculate_total_sales(sales_data) that takes a list of tuples (product, amount) as input, where the product is the product category and the amount is the sales amount. It should return a dictionary where keys are product categories and values are the total sales amounts for each category.
def calculate_total_sales(sales_data):
    sales_dictionary = {}
    for data in sales_data:
        if data[0] in sales_dictionary:
            sales_dictionary[data[0]] += data[1]
        else:
           sales_dictionary[data[0]] = data[1]
    return sales_dictionary
sales_data = [('Grocery',3500),('Electric',6000),('Grocery',2000),('Fmcg',9000)]
dictionary = calculate_total_sales(sales_data)
print(dictionary)