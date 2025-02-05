SELECT DISTINCT num AS ConsecutiveNums
FROM (
    SELECT num, 
          LAG(num) OVER(ORDER BY id) AS prev_num,
          LEAD(num) OVER(ORDER BY id) AS next_num
    FROM Logs
) temp
Where num = prev_num and num = next_num;