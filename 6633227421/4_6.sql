select c.customer_id,c.customer_name--, count(c.customer_id)
from ordert o  join customer c
on o.customer_id = c.customer_id
group by c.customer_id,c.customer_name
having count(c.customer_id) >= ALL( SELECT count(customer_id)
										from ordert
										group by customer_id);
--บางพลัดอาจจะเป็นแค่ชื่อเขต แต่เธอคือสาเหตุของความรัก--