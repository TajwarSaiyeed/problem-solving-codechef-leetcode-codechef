SELECT EMP.Name AS EMPLOYEE
FROM Employee as EMP
    JOIN Employee AS MNG ON EMP.managerId = MNG.id
WHERE
    EMP.salary > MNG.salary;