SELECT * FROM Weather as today
JOIN Weather as Yesterday
ON (DATE_SUB(Today.recordDate, INTERVAL 1 DAY) = Yesterday.recordDate);