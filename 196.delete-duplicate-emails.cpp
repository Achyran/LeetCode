DELETE p2
FROM Person AS p1
INNER JOIN Person AS p2
  ON (p1.email = p2.email)
WHERE p1.id < p2.id;