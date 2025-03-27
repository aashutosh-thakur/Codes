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