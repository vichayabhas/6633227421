select distinct  o.customer_id,   c.customer_name
from 
ordert o  join 
customer c
on o.customer_id = c.customer_id
group by o.customer_id,c.customer_name,order_date
having (order_date > '2020-01-10'
and order_date < '2020-01-15')
--บางพลัดอาจจะเป็นแค่ชื่อเขต แต่เธอคือสาเหตุของความรัก--
--รักบางพลัดมากๆนะครับ--
