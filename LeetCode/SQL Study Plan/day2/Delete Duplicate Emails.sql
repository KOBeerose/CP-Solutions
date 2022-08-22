DELETE FROM Person
WHERE id NOT IN
    (
    SELECT *
    FROM
    (SELECT MIN(id)
    FROM Person
    Group by Email
    ) AS b
    ) ;

/*
DELETE p2
FROM Person p1,
    Person p2
WHERE
    p1.Email = p2.Email AND p1.id < p2.id
;
*/