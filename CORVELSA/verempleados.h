#pragma once
#include"Header.h"

namespace CORVELSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de verempleados
	/// </summary>
	public ref class verempleados : public System::Windows::Forms::Form
	{
	public:
		verempleados(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~verempleados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ lista;
	protected:


	private: System::Windows::Forms::ComboBox^ cbxVerP;
	private: System::Windows::Forms::Button^ btnVerP;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ColumnHeader^ DPI;
	private: System::Windows::Forms::ColumnHeader^ NOMBRE;
	private: System::Windows::Forms::ColumnHeader^ APELLIDO;
	private: System::Windows::Forms::ColumnHeader^ PUESTO;
	private: System::Windows::Forms::ColumnHeader^ SUELDO;
	private: System::Windows::Forms::ColumnHeader^ BONO;
	private: System::Windows::Forms::ColumnHeader^ TOTALDEVENGADO;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lista = (gcnew System::Windows::Forms::ListView());
			this->cbxVerP = (gcnew System::Windows::Forms::ComboBox());
			this->btnVerP = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->DPI = (gcnew System::Windows::Forms::ColumnHeader());
			this->NOMBRE = (gcnew System::Windows::Forms::ColumnHeader());
			this->APELLIDO = (gcnew System::Windows::Forms::ColumnHeader());
			this->PUESTO = (gcnew System::Windows::Forms::ColumnHeader());
			this->SUELDO = (gcnew System::Windows::Forms::ColumnHeader());
			this->BONO = (gcnew System::Windows::Forms::ColumnHeader());
			this->TOTALDEVENGADO = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// lista
			// 
			this->lista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->DPI, this->NOMBRE, this->APELLIDO,
					this->PUESTO, this->SUELDO, this->BONO, this->TOTALDEVENGADO
			});
			this->lista->HideSelection = false;
			this->lista->Location = System::Drawing::Point(118, 63);
			this->lista->Name = L"lista";
			this->lista->Size = System::Drawing::Size(394, 261);
			this->lista->TabIndex = 16;
			this->lista->UseCompatibleStateImageBehavior = false;
			this->lista->View = System::Windows::Forms::View::Details;
			// 
			// cbxVerP
			// 
			this->cbxVerP->FormattingEnabled = true;
			this->cbxVerP->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Ver todos", L"Secretaria", L"Bodeguero", L"Vendedor" });
			this->cbxVerP->Location = System::Drawing::Point(118, 354);
			this->cbxVerP->Name = L"cbxVerP";
			this->cbxVerP->Size = System::Drawing::Size(121, 21);
			this->cbxVerP->TabIndex = 17;
			// 
			// btnVerP
			// 
			this->btnVerP->Location = System::Drawing::Point(271, 354);
			this->btnVerP->Name = L"btnVerP";
			this->btnVerP->Size = System::Drawing::Size(75, 23);
			this->btnVerP->TabIndex = 18;
			this->btnVerP->Text = L"button3";
			this->btnVerP->UseVisualStyleBackColor = true;
			this->btnVerP->Click += gcnew System::EventHandler(this, &verempleados::btnVerP_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(9, 63);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 26);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Volver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &verempleados::button1_Click);
			// 
			// DPI
			// 
			this->DPI->Text = L"DPI";
			// 
			// NOMBRE
			// 
			this->NOMBRE->Text = L"NOMBRE";
			// 
			// APELLIDO
			// 
			this->APELLIDO->Text = L"APELLIDO";
			// 
			// PUESTO
			// 
			this->PUESTO->Text = L"PUESTO";
			// 
			// SUELDO
			// 
			this->SUELDO->Text = L"SUELDO";
			// 
			// BONO
			// 
			this->BONO->Text = L"BONO";
			// 
			// TOTALDEVENGADO
			// 
			this->TOTALDEVENGADO->Text = L"TOTAL DEVENGADO";
			// 
			// verempleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 462);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnVerP);
			this->Controls->Add(this->cbxVerP);
			this->Controls->Add(this->lista);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"verempleados";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"verempleados";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnVerP_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ DPI; String^ NOMBRE; String^ APELLIDO; String^ TIPO; String^ SUELDO; String^ BONO; String^ TOTAL;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "CORVELSADB";//su base de datos se llama Biosisemas
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ Bio = gcnew ListView();

		if (cbxVerP->SelectedIndex == 0) {
			this->lista->Items->Clear();
			String^ sentencia = "SELECT EMPLEADOS.DPI, EMPLEADOS.NOMBRE, EMPLEADOS.APELLIDO, TIPOEMPLEADO.TIPO, EMPLEADOS.SUELDO, EMPLEADOS.BONO, (EMPLEADOS.SUELDO + EMPLEADOS.BONO) AS TOTAL FROM TIPOEMPLEADO INNER JOIN EMPLEADOS ON TIPOEMPLEADO.ID = EMPLEADOS.ID_EMP ";
			SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
			cn->Open();
			SqlDataReader^ reader = ejecutar->ExecuteReader();

			while (reader->Read())
			{
				DPI = (reader["DPI"]->ToString());
				NOMBRE = (reader["NOMBRE"]->ToString());
				APELLIDO = (reader["APELLIDO"]->ToString());
				TIPO = (reader["TIPO"]->ToString());
				SUELDO = (reader["SUELDO"]->ToString());
				BONO = (reader["BONO"]->ToString());
				TOTAL = (reader["TOTAL"]->ToString());

				String^ srtNew1 = gcnew String(DPI);
				String^ srtNew2 = gcnew String(NOMBRE);
				String^ srtNew3 = gcnew String(APELLIDO);
				String^ srtNew4 = gcnew String(TIPO);
				String^ srtNew5 = gcnew String(SUELDO);
				String^ srtNew6 = gcnew String(BONO);
				String^ srtNew7 = gcnew String(TOTAL);

				ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
				listView1->SubItems->Add(srtNew2);
				listView1->SubItems->Add(srtNew3);
				listView1->SubItems->Add(srtNew4);
				listView1->SubItems->Add(srtNew5);
				listView1->SubItems->Add(srtNew6);
				listView1->SubItems->Add(srtNew7);


				this->lista->Items->Add(listView1);
			}
			cn->Close();
		}
		else if (cbxVerP->SelectedIndex == 1) {
			this->lista->Items->Clear();
			String^ sentencia = "SELECT EMPLEADOS.DPI, EMPLEADOS.NOMBRE, EMPLEADOS.APELLIDO, TIPOEMPLEADO.TIPO, EMPLEADOS.SUELDO, EMPLEADOS.BONO, (EMPLEADOS.SUELDO + EMPLEADOS.BONO) AS TOTAL FROM TIPOEMPLEADO INNER JOIN EMPLEADOS ON TIPOEMPLEADO.ID = EMPLEADOS.ID_EMP WHERE ID = 0";
			SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
			cn->Open();
			SqlDataReader^ reader = ejecutar->ExecuteReader();

			while (reader->Read())
			{
				DPI = (reader["DPI"]->ToString());
				NOMBRE = (reader["NOMBRE"]->ToString());
				APELLIDO = (reader["APELLIDO"]->ToString());
				TIPO = (reader["TIPO"]->ToString());
				SUELDO = (reader["SUELDO"]->ToString());
				BONO = (reader["BONO"]->ToString());
				TOTAL = (reader["TOTAL"]->ToString());

				String^ srtNew1 = gcnew String(DPI);
				String^ srtNew2 = gcnew String(NOMBRE);
				String^ srtNew3 = gcnew String(APELLIDO);
				String^ srtNew4 = gcnew String(TIPO);
				String^ srtNew5 = gcnew String(SUELDO);
				String^ srtNew6 = gcnew String(BONO);
				String^ srtNew7 = gcnew String(TOTAL);

				ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
				listView1->SubItems->Add(srtNew2);
				listView1->SubItems->Add(srtNew3);
				listView1->SubItems->Add(srtNew4);
				listView1->SubItems->Add(srtNew5);
				listView1->SubItems->Add(srtNew6);
				listView1->SubItems->Add(srtNew7);


				this->lista->Items->Add(listView1);
			}
			cn->Close();
		}
		else if (cbxVerP->SelectedIndex == 2) {
			this->lista->Items->Clear();
			String^ sentencia = "SELECT EMPLEADOS.DPI, EMPLEADOS.NOMBRE, EMPLEADOS.APELLIDO, TIPOEMPLEADO.TIPO, EMPLEADOS.SUELDO, EMPLEADOS.BONO, (EMPLEADOS.SUELDO + EMPLEADOS.BONO) AS TOTAL FROM TIPOEMPLEADO INNER JOIN EMPLEADOS ON TIPOEMPLEADO.ID = EMPLEADOS.ID_EMP WHERE ID = 1";
			SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
			cn->Open();
			SqlDataReader^ reader = ejecutar->ExecuteReader();

			while (reader->Read())
			{
				DPI = (reader["DPI"]->ToString());
				NOMBRE = (reader["NOMBRE"]->ToString());
				APELLIDO = (reader["APELLIDO"]->ToString());
				TIPO = (reader["TIPO"]->ToString());
				SUELDO = (reader["SUELDO"]->ToString());
				BONO = (reader["BONO"]->ToString());
				TOTAL = (reader["TOTAL"]->ToString());

				String^ srtNew1 = gcnew String(DPI);
				String^ srtNew2 = gcnew String(NOMBRE);
				String^ srtNew3 = gcnew String(APELLIDO);
				String^ srtNew4 = gcnew String(TIPO);
				String^ srtNew5 = gcnew String(SUELDO);
				String^ srtNew6 = gcnew String(BONO);
				String^ srtNew7 = gcnew String(TOTAL);

				ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
				listView1->SubItems->Add(srtNew2);
				listView1->SubItems->Add(srtNew3);
				listView1->SubItems->Add(srtNew4);
				listView1->SubItems->Add(srtNew5);
				listView1->SubItems->Add(srtNew6);
				listView1->SubItems->Add(srtNew7);


				this->lista->Items->Add(listView1);
			}
			cn->Close();
		}
		else if (cbxVerP->SelectedIndex == 3) {
			this->lista->Items->Clear();
			String^ sentencia = "SELECT EMPLEADOS.DPI, EMPLEADOS.NOMBRE, EMPLEADOS.APELLIDO, TIPOEMPLEADO.TIPO, EMPLEADOS.SUELDO, EMPLEADOS.BONO, (EMPLEADOS.SUELDO + EMPLEADOS.BONO) AS TOTAL FROM TIPOEMPLEADO INNER JOIN EMPLEADOS ON TIPOEMPLEADO.ID = EMPLEADOS.ID_EMP  WHERE ID = 2";
			SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
			cn->Open();
			SqlDataReader^ reader = ejecutar->ExecuteReader();

			while (reader->Read())
			{
				DPI = (reader["DPI"]->ToString());
				NOMBRE = (reader["NOMBRE"]->ToString());
				APELLIDO = (reader["APELLIDO"]->ToString());
				TIPO = (reader["TIPO"]->ToString());
				SUELDO = (reader["SUELDO"]->ToString());
				BONO = (reader["BONO"]->ToString());
				TOTAL = (reader["TOTAL"]->ToString());

				String^ srtNew1 = gcnew String(DPI);
				String^ srtNew2 = gcnew String(NOMBRE);
				String^ srtNew3 = gcnew String(APELLIDO);
				String^ srtNew4 = gcnew String(TIPO);
				String^ srtNew5 = gcnew String(SUELDO);
				String^ srtNew6 = gcnew String(BONO);
				String^ srtNew7 = gcnew String(TOTAL);

				ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
				listView1->SubItems->Add(srtNew2);
				listView1->SubItems->Add(srtNew3);
				listView1->SubItems->Add(srtNew4);
				listView1->SubItems->Add(srtNew5);
				listView1->SubItems->Add(srtNew6);
				listView1->SubItems->Add(srtNew7);


				this->lista->Items->Add(listView1);
			}
			cn->Close();
		}

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
