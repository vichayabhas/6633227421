--บางพลัดอาจจะเป็นแค่ชื่อเขต แต่เธอคือสาเหตุของความรัก--
select c.customer_id,c.customer_name,count(o.order_id) as number_of_orders
from ordert o join customer c
on o.customer_id = c.customer_id
group by c.customer_id,c.customer_name
order by (number_of_orders) desc;