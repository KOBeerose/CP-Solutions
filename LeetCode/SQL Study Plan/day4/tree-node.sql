# Write your MySQL query statement below

/*
SELECT 
    id, 'Root' AS type
FROM
    Tree
WHERE 
    p_id IS NULL

UNION

SELECT
    id, 'Inner' AS type
FROM
    Tree
WHERE
    id IN ( SELECT p_id FROM Tree ) and p_id IS NOT NULL

UNION

SELECT
    id, 'Leaf' AS type
FROM
    Tree
WHERE
     id NOT IN (SELECT p_id FROM Tree WHERE p_id IS NOT NULL) and p_id IS NOT NULL
*/

/*
SELECT 
    id,
    CASE
        WHEN p_id IS NULL
            THEN 'Root'
        WHEN id IN ( SELECT p_id FROM Tree ) and p_id IS NOT NULL
            THEN 'Inner'
        ELSE 'Leaf'
    END as Type
FROM
    Tree
*/

SELECT
    id,
    IF (ISNULL(p_id),
       'Root',
       IF ( id IN ( SELECT p_id FROM Tree ) and p_id IS NOT NULL, 'Inner', 'Leaf')) Type
FROM
    tree
    