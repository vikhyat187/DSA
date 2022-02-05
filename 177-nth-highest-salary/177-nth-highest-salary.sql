CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    DECLARE M INT;
    SET M = N-1;
  RETURN (
    
      # Write your MySQL query statement below.
      select distinct salary from Employee e1 where M=(select count(distinct salary) from Employee e2 where e1.salary < e2.salary)
  );
END