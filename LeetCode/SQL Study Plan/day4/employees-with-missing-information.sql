# Write your MySQL query statement below
/* SELECT *
FROM
(   SELECT employee_id FROM Salaries
    UNION
    SELECT employee_id FROM Employees
) AS U
WHERE U.employee_id 
NOT IN 
    (
    SELECT 
        Employees.employee_id
    FROM 
        Employees
    INNER JOIN 
        Salaries
    ON 
        Employees.employee_id = Salaries.employee_id
    )

ORDER BY employee_id
*/
SELECT employee_id FROM Employees
WHERE employee_id NOT IN (SELECT employee_id FROM Salaries)
UNION
SELECT employee_id FROM Salaries
WHERE employee_id NOT IN (SELECT employee_id FROM Employees)
ORDER BY employee_id