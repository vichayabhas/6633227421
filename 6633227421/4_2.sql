select a.postal_code, count(customer_id)
from customer a
group by postal_code
having count(*) > 1
order by (count) desc;
