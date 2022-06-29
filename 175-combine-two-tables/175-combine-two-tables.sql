# Write your MySQL query statement below
Select p.firstName , p.lastname , a.city , a.state FROM Person p 
Left Join Address a Using (personId);