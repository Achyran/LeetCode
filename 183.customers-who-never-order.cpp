SELECT *  FROM Customers
     Left JOIN Orders ON Customers.id = Orders.customerId
     ;