# Write your MySQL query statement below
SELECT name AS customers from customers where id NOT IN (SELECT customerid FROM orders);