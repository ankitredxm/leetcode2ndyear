# Write your MySQL query statement below
select unique_id ,name
from EmployeeUNI eu
right join Employees em
on eu.id=em.id;