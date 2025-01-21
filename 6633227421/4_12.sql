select all	 count (o.order_date) as total_orders
from ordert o
where o.order_date>= '2020-01-10'
and o.order_date <= '2020-01-16'
