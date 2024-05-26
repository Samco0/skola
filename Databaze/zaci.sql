create table zaci 
(id int primary key auto_increment, 
jmeno varchar(50), 
prijmeni varchar(50) not null, 
datum_narozeni date, 
trida varchar(3), 
vyska int(3) CHECK(vyska>0));

insert into zaci values (default,'Antonín','Zelený','2002.9.15','2.A',175);
insert into zaci values (default,'Tomáš','Sluníčkový','2001.12.9','3.A',172);
insert into zaci values (default,'Adriana','Usměvavá','2003.5.21','1.C',164);
insert into zaci values (default,'Daniela','Motýlova','2001.3.6','3.B',176);
insert into zaci values (default,'Adrian','Popelka','2000.4.21','4.C',182);
insert into zaci values (default,'Pavel','Perníček','2000.5.10','4.C',188);
insert into zaci values (default,'Pavel','Koláč','2002.6.8','2.C',188);
insert into zaci values (default,'Petr','Koblížek','2002.4.18','2.B',179);