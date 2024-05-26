create table heroes
(
    id_h         int auto_increment
        primary key,
    jmeno_h      varchar(50)  null,
    profese      varchar(50)  null,
    plat_v_eur   float(10, 2) null,
    rok_narozeni year         null,
    constraint plat_v_eur
        check (`plat_v_eur` >= 0)
);

