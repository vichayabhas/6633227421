select c.postal_code, sum(p.standard_price*l.ordered_quantity)  as total_payment
from customer c join ordert o
on c.customer_id = o.customer_id
join order_line l 
on o.order_id = l.order_id
join product p

on l.product_id = p.product_id
group by c.postal_code
--select * from customer
having sum(p.standard_price*l.ordered_quantity) > 0
order by c.postal_code