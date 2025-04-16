SELECT DISTINCT name FROM (
  SELECT name FROM dogs
  UNION
  SELECT name FROM cats
) AS all_pets;
