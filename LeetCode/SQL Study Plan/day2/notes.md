### 1873. Calculate Special Bonus
Start with => "M%"

**You can use If in place of a column**

IF(condition, true_value, false_value) as Column name
<br></br>

### 627. Swap Salary
To dynamically set a value to a column, we can use `UPDATE` statement together when `CASE...WHEN... `flow control statement

**Example:** 

SET Column = CASE ....END;
<br></br>

### 196. Delete Duplicate Emails
We can **join this table with itself** and then add a `WHERE` to have a condition and we can delete one of the **tables** 

**Example:**

```
DELETE p1 FROM Person p1,
    Person p2
WHERE
    p1.Email = p2.Email AND p1.Id > p2.Id
```

**we have to enclose the sub select query with another select statement**
Explanation: The query optimizer does a derived merge optimization for the first query (which causes it to fail with the error), but the second query doesn't qualify for the derived merge optimization. Hence the optimizer is forced to execute the subquery first.
<br></br>

