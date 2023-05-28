CREATE DATABASE CORVELSADB;

USE CORVELSADB;

CREATE TABLE TIPOEMPLEADO(
ID INT PRIMARY KEY NOT NULL,
TIPO VARCHAR(35) NOT NULL
);

INSERT INTO TIPOEMPLEADO
VALUES(0,'SECRETARIA'),
(1,'BODEGUERO'),
(2, 'VENDEDOR');

CREATE TABLE EMPLEADOS(
DPI VARCHAR(11) NOT NULL PRIMARY KEY,
NOMBRE VARCHAR(20) NOT NULL,
APELLIDO VARCHAR(40) NOT NULL,
EDAD INT NOT NULL,
ID_EMP INT FOREIGN KEY REFERENCES TIPOEMPLEADO (ID),
SUELDO FLOAT NOT NULL,
BONO FLOAT NOT NULL,
);

SELECT SUELDO, BONO, (SUELDO + BONO) AS TOTAL
FROM EMPLEADOS;

INSERT INTO EMPLEADOS (DPI, NOMBRE, APELLIDO, EDAD, ID_EMP,SUELDO, BONO)
VALUES(1213,'JONCO', 'LUCIANO', 32,1,4000,200),
(623, 'ALEJAS','DARIO',18,2,3500,300);

SELECT * FROM EMPLEADOS;

SELECT EMPLEADOS.DPI, EMPLEADOS.NOMBRE, EMPLEADOS.APELLIDO, TIPOEMPLEADO.TIPO, EMPLEADOS.SUELDO, EMPLEADOS.BONO, (EMPLEADOS.SUELDO + EMPLEADOS.BONO) AS TOTAL
FROM TIPOEMPLEADO
INNER JOIN EMPLEADOS ON TIPOEMPLEADO.ID = EMPLEADOS.ID_EMP;


CREATE TABLE VENTAS(
IDVENTA INT PRIMARY KEY NOT NULL,
ID_EMP INT FOREIGN KEY REFERENCES TIPOEMPLEADO(ID) NOT NULL,
PRODUCTO INT FOREIGN KEY REFERENCES PRODUCTOS(ID_PRODU) NOT NULL,
CANTIDAD INT 
);


CREATE TABLE PRODUCTOS(
ID_PRODU INT NOT NULL PRIMARY KEY,
NOMBRE VARCHAR (80) NOT NULL,
DESCRIPCION VARCHAR (100) NOT NULL,
PRECIO int NOT NULL,
CANTIDAD int  NOT NULL
);

INSERT INTO PRODUCTOS
VALUES (1,'NOVO HERKLIN','CREMA PARA LA PIEL',50, 100),
(2,'IBUPROFENO','600 MG  6 TABLETAS',70, 40),
(3,'COFAPRIM','TIMETOPRIM SULFAMETOZAZXOL',100, 60),
(4,'COFAVITS FORTE','ESTIMULANTE DEL APETITO',50, 70),
(5,'MIM','30 CAPS VITAMINAS Y HIERRO',90, 45);

SELECT * FROM PRODUCTOS;

SELECT * FROM VENTAS;
SELECT * FROM PRODUCTOS