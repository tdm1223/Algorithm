# 보호소에서 중성화한 동물
SELECT B.ANIMAL_ID, B.ANIMAL_TYPE, B.NAME
FROM(
    SELECT *
    FROM ANIMAL_INS A
    WHERE SEX_UPON_INTAKE LIKE "%INTACT%"
) SQ1, ANIMAL_OUTS B
WHERE SQ1.ANIMAL_ID = B.ANIMAL_ID
AND B.SEX_UPON_OUTCOME NOT LIKE "%INTACT%"
