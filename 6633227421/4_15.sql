DELETE FROM order_line USING ordert
WHERE ordert.customer_id = 10001 AND ordert.order_id = order_line.order_id;

DELETE FROM ordert
WHERE customer_id = 10001;

DELETE FROM customer
WHERE customer_id = 10001;

SELECT *
FROM customer, ordert, order_line;