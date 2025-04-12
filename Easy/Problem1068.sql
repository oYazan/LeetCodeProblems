SELECT product_name, year, price from sales
INNER JOIN product
ON product.product_id = sales.product_id;