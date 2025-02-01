SELECT * FROM Weather as Today
JOIN Weather as Yesterday
ON (DATE_SUB(Today.recordDate, INTERVAL 1 DAY) = Yesterday.recordDate)
WHERE Today.temperature > Yesterday.temperature;