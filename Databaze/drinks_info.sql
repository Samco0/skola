CREATE TABLE drinks_info (
    id_d INT PRIMARY KEY AUTO_INCREMENT,
    drink_name VARCHAR(100) UNIQUE,
    cost FLOAT,
    carbs FLOAT,
    color ENUM('yellow','red','orange','purple','green','blue','brown','fan'),
    ice ENUM('Y','N'),
    calories INT,
    CONSTRAINT check_cost CHECK (cost >= 0),
    CONSTRAINT check_carbs CHECK (carbs >= 0)
);

INSERT INTO drinks_info VALUES (DEFAULT,'Blackthorn',3,8.4,1,1,33);
INSERT INTO drinks_info VALUES (DEFAULT,'Blue Moon',2.5,3.2,6,1,12);
INSERT INTO drinks_info VALUES (DEFAULT,'Oh My Gosh',3.5,8.6,3,1,35);
INSERT INTO drinks_info VALUES (DEFAULT,'Lime Fizz',2.5,5.4,5,1,24);
INSERT INTO drinks_info VALUES (DEFAULT,'Kiss on the Lips',5.5,42.5,4,1,171);
INSERT INTO drinks_info VALUES (DEFAULT,'Hot Gold',3.2,32.1,3,2,135);
INSERT INTO drinks_info VALUES (DEFAULT,'Lone Tree',3.6,4.2,2,1,17);
INSERT INTO drinks_info VALUES (DEFAULT,'Greyhound',4,14,1,1,50);
INSERT INTO drinks_info VALUES (DEFAULT,'Indian Summer',2.8,7.2,7,2,30);
INSERT INTO drinks_info VALUES (DEFAULT,'Bull Frog',2.6,21.5,8,1,80);
INSERT INTO drinks_info VALUES (DEFAULT,'Soda and It',3.8,4.7,2,2,19);
