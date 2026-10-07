select name as Employee from Employee e
where e.salary > (select salary from Employee e1 where e1.id = e.managerID);