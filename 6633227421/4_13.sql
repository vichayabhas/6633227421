
select all	sum (o.ordered_quantity*n.standard_price) as total_payment
from product n join order_line o
on n.product_id =o.product_id 
where order_id=3