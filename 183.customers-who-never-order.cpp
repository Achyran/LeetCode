SELECT cs.name AS Customers  FROM Customers cs
     Left JOIN Orders o ON (cs.id = o.customerId)
     WHERE o.customerId IS null ;