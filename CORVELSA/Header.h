#pragma once
#include "Header.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace Data;
using namespace Data::SqlClient;

ref class Conexion
{
    SqlConnection^ cn;
    SqlConnectionStringBuilder^ st;

protected:
    void Conectar() {
        st = gcnew SqlConnectionStringBuilder();
        //st->DataSource = "localhost\\SQLEXPRESS";
        st->DataSource = "localhost\\SQLEXPRESS";
        st->InitialCatalog = "CORVELSADB";
        st->IntegratedSecurity = true;
        cn = gcnew SqlConnection(Convert::ToString(st));
    }


public:
    void Insertar(String^ DPI, String^ NOMBRE, String^ APELLIDO, int EDAD, int ID_EMP, int SUELDO, int COMISION) {
        Conectar();
        String^ sentencia = "INSERT INTO EMPLEADOS VALUES(@DPI, @NOMBRE, @APELLIDO, @EDAD, @ID_EMP, @SUELDO, @COMISION)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@DPI", DPI);
        ejecutar->Parameters->AddWithValue("@NOMBRE", NOMBRE);
        ejecutar->Parameters->AddWithValue("@APELLIDO", APELLIDO);
        ejecutar->Parameters->AddWithValue("@EDAD", EDAD);
        ejecutar->Parameters->AddWithValue("@ID_EMP", ID_EMP);
        ejecutar->Parameters->AddWithValue("@SUELDO", SUELDO);
        ejecutar->Parameters->AddWithValue("@COMISION", COMISION);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertar2(int ID_ARTICULO, String^ DESCRIPCION, float PRECIO, int ID_FABRI) {
        Conectar();
       
    }
    void Insertar3(int id_venta, int cantidad, int id_cliente, int id_producto) {
        Conectar();
        
    }
    void Insertar4(String^ ID_PRODU, String^ NOMBRE, String^ DESCRIPCION, String^ PRECIO,  String^ CANTIDAD) {
        Conectar();
        String^ sentencia = "INSERT INTO PRODUCTOS VALUES(@ID_PRODU, @NOMBRE, @DESCRIPCION, @PRECIO, @CANTIDAD)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@ID_PRODU", ID_PRODU);
        ejecutar->Parameters->AddWithValue("@NOMBRE", NOMBRE);
        ejecutar->Parameters->AddWithValue("@DESCRIPCION", DESCRIPCION);
        ejecutar->Parameters->AddWithValue("@PRECIO", PRECIO);
        ejecutar->Parameters->AddWithValue("@CANTIDAD", CANTIDAD);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
  
};