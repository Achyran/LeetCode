SELECT name AS Customers FROM Customers
    LEFT JOIN Orders ON Customers.id = Order.Id