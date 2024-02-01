# Write your MySQL query statement below
# Write your MySQL query statement below
Select prices.product_id,  ifnull(round(sum(price*units )/sum(units),2),0) as average_price from prices 
left join unitssold
on prices.product_id=unitssold.product_id
and
unitssold.purchase_date between prices.start_date and prices.end_date 

group by prices.product_id