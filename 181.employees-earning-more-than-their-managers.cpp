SELECT name FROM Employee e 
JOIN Employee m ON (e.emanagerId = m.id)
WHERE e.salary > m.salery;