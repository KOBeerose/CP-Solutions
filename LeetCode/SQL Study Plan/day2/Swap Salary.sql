/*
UPDATE salary
SET
    sex = CASE sex
        WHEN 'm' THEN 'f'
        ELSE 'm'
    END;
UPDATE Salary
SET sex =
    CASE 
     WHEN sex="m" THEN "f"
     WHEN sex="f" THEN "m"  
END
*/
UPDATE Salary
SET sex =
    CASE 
     WHEN sex="m" THEN "f"
     WHEN sex="f" THEN "m"  
END