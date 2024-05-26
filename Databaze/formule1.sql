CREATE TABLE formule1 (
  id_j INT(4) ZEROFILL PRIMARY KEY AUTO_INCREMENT,
  jmeno VARCHAR(50),
  prijmeni VARCHAR(50) not null,
  cislo INT(2) ZEROFILL UNIQUE CHECK (cislo>0),
  datum_narozeni DATE,
  tym VARCHAR(50),
  body FLOAT(6,1) CHECK(body>=0.0)
);

INSERT INTO formule1 (jmeno,prijmeni,cislo,datum_narozeni,tym,body) VALUES ("Lewis","Hamilton",44,"1985.01.07","Mercedes",216.0);
INSERT INTO formule1 (jmeno,prijmeni,cislo,datum_narozeni,tym,body) VALUES ("George","Russell",63,"1998.02.15","Mercedes",231.0);  
INSERT INTO formule1 (jmeno,prijmeni,cislo,datum_narozeni,tym,body) VALUES ("Charles","Leclerc",16,"1985.10.16","Ferrari",275.0);
INSERT INTO formule1 (jmeno,prijmeni,cislo,datum_narozeni,tym,body) VALUES ("Carlos","Sainz",55,"1994.09.01","Ferrari",212.0);  
INSERT INTO formule1 (jmeno,prijmeni,cislo,datum_narozeni,tym,body) VALUES ("Max","Verstappen",1,"1997.09.30","Red Bull Racing",416.0);
INSERT INTO formule1 (jmeno,prijmeni,cislo,datum_narozeni,tym,body) VALUES ("Sergio","Peréz",11,"1990.01.26","Red Bull Racing",280.0);
INSERT INTO formule1 (jmeno,prijmeni,cislo,datum_narozeni,tym,body) VALUES ("Jenson","Button",22,"1980.01.19","McLaren",35.0);
INSERT INTO formule1 (jmeno,prijmeni,cislo,datum_narozeni,tym,body) VALUES ("Lando","Norris",4,"1999.11.13","McLaren",111.0);  
INSERT INTO formule1 (jmeno,prijmeni,cislo,datum_narozeni,tym,body) VALUES ("Fernando","Alonso",14,"1981-07-29","Aston Martin",36.0);
INSERT INTO formule1 (jmeno,prijmeni,cislo,datum_narozeni,tym,body) VALUES ("Lance","Stroll",18,"1998.10.29","Aston Martin",13.0);