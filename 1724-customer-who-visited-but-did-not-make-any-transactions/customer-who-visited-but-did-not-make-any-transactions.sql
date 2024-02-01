# Write your MySQL query statement below

# Select customer_id, count(*)  as count_no_trans from visits
# where
# visit_id not in (select visit_id from transactions) group by customer_id;

Select customer_id, count(*) as count_no_trans from visits
left join transactions
on  visits.visit_id = transactions.visit_id
where
transactions.visit_id is null group by customer_id