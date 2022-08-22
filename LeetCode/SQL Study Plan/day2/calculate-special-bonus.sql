/*
SELECT employee_id, 
CASE WHEN employee_id%2=1 AND name NOT LIKE "M%" 
    THEN salary
    ELSE 0
END AS 'bonus'
FROM Employees
ORDER BY employee_id
*/
SELECT employee_id, 
    (IF (name NOT LIKE "M%" AND employee_id%2=1, salary, 0 )) AS bonus 
FROM Employees
ORDER BY employee_id