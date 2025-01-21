select a.postal_code, count(customer_id)
from customer a
group by postal_code

order by (count) desc;