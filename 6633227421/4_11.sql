select customer_id,customer_name
from customer
group by customer_id,customer_name
having customer_id !=  all(select customer_id
								from ordert
								group by customer_id)
order by customer_id;								
								