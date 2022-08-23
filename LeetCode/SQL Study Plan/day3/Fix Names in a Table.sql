/*
UPDATE Users
SET name =
CASE 

SELECT LOWER(name)
FROM Users;
*/

SELECT user_id, CONCAT(UCASE(MID(name,1,1)),LOWER(MID(name,2))) AS name 
FROM Users
ORDER BY user_id

/*
SELECT user_id, CONCAT(UPPER(LEFT(name,1)),LOWER(SUBSTRING(name,2))) AS name
FROM Users
ORDER BY user_id
*/