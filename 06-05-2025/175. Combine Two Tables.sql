# Write your MySQL query statement below

SELECT 
    Person.firstName,
    Person.lastName,
    Address.city,
    Address.state
from
    Person 
LEFT JOIN Address ON Person.personId = Address.personId;


# Problem :  https://leetcode.com/problems/combine-two-tables/description/