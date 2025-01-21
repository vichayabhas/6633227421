select customer_id,order_date
--บางพลัดอาจจะเป็นแค่ชื่อเขต แต่เธอคือสาเหตุของความรัก--
--รักบางพลัดมากๆนะครับ--
from ordert
group by customer_id,order_date
having (customer_id = 10001)
;
