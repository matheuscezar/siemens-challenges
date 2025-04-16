SELECT
    IF(n.Grade >= 8, s.Name, 'NULL') AS Name,
    n.Grade,
    s.Value
FROM Students s
JOIN Notes n
    ON s.Value BETWEEN n.Min_Value AND n.Max_Value
ORDER BY
    n.Grade DESC,
    s.Name ASC,
    n.Grade ASC;
