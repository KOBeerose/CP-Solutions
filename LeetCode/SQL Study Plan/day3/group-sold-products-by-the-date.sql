/*
SELECT sell_date, COUNT(sell_date) as num_sold ,product
FROM Activities
GROUP BY sell_date
*/

SELECT 
    sell_date, 
    COUNT(DISTINCT(product)) as num_sold, 
    GROUP_CONCAT(DISTINCT product ORDER BY product) as products
FROM 
    Activities
GROUP BY 
    sell_date