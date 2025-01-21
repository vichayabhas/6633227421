select p.product_id,p.product_description
from order_line o join product p
on o.product_id =p.product_id 
group by p.product_id,p.product_description
having sum(o.product_id) >= ALL( SELECT sum(product_id)
										from order_line
										group by product_id);