select   o.customer_id,   c.customer_name, count(o.customer_id) as order_count
from 
ordert o  join 
customer c
on o.customer_id = c.customer_id
group by o.customer_id,c.customer_name

order by count(o.customer_id) desc
limit 3;