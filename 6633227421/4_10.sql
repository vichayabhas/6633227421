select product_id,product_description,product_finish
from product
group by product_id,product_description,product_finish
having product_finish = 'White Ash';