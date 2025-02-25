# Stock Price Variation Tracker: Write a function track_price_variation that takes a list of daily stock prices and returns a list of tuples. Each tuple should contain the day number (starting from 0), the price for that day, and the difference in price from the previous day. For the first day, the difference can be listed as None.
def track_price_variation(stock1,stock2):
    updated_price_r=float(input("Enter the latest price of Reliance: "))
    updated_price_a=float(input("Enter the latest price of Adani: "))
    difference1=updated_price_r-stock1['price']
    difference2=updated_price_a-stock2['price']
    stock1['price']=updated_price_r
    stock2['price']=updated_price_a
    final=('Name of Stock','Previous Price','Day Difference','Final Price')
    final1=(stock1['name'],stock1['price']-difference1,difference1,stock1['price'])
    final2=(stock2['name'],stock2['price']-difference2,difference2,stock2['price'])
    print(f"Day Output of stock: \n{final}\n{final1}\n{final2}")
stock1={'name': 'Reliance', 'price': 2300.00}
stock2={'name': 'Adani', 'price': 1900.00}
track_price_variation(stock1,stock2)