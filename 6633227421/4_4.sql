select p.product_id,p.product_description
from order_line o join product p
on o.product_id =p.product_id 
--บางพลัดอาจจะเป็นแค่ชื่อเขต แต่เธอคือสาเหตุของความรัก--
group by p.product_id,p.product_description
having count(o.product_id) >= ALL( SELECT count(product_id)
										from order_line
										group by product_id);
