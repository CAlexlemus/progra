#pragma once
#include "Header.h"
#include "agregarproducto.h"

namespace CORVELSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de inventario
	/// </summary>
	public ref class inventario : public System::Windows::Forms::Form
	{
	public:
		inventario(void)
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
		~inventario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListView^ listainventario;

	private: System::Windows::Forms::Button^ botonconsulta;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;

	private: System::Windows::Forms::ColumnHeader^ Cantidad;

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listainventario = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Cantidad = (gcnew System::Windows::Forms::ColumnHeader());
			this->botonconsulta = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 32);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Volver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &inventario::button1_Click);
			// 
			// listainventario
			// 
			this->listainventario->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->Cantidad
			});
			this->listainventario->HideSelection = false;
			this->listainventario->Location = System::Drawing::Point(218, 32);
			this->listainventario->Name = L"listainventario";
			this->listainventario->Size = System::Drawing::Size(722, 620);
			this->listainventario->TabIndex = 8;
			this->listainventario->UseCompatibleStateImageBehavior = false;
			this->listainventario->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Código";
			this->columnHeader1->Width = 110;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Nombre";
			this->columnHeader2->Width = 110;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Descripción";
			this->columnHeader3->Width = 110;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Precio";
			this->columnHeader4->Width = 110;
			// 
			// Cantidad
			// 
			this->Cantidad->Text = L"Existencia";
			this->Cantidad->Width = 110;
			// 
			// botonconsulta
			// 
			this->botonconsulta->Font = (gcnew System::Drawing::Font(L"MS PGothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonconsulta->Location = System::Drawing::Point(43, 312);
			this->botonconsulta->Name = L"botonconsulta";
			this->botonconsulta->Size = System::Drawing::Size(141, 49);
			this->botonconsulta->TabIndex = 9;
			this->botonconsulta->Text = L"Consultar";
			this->botonconsulta->UseVisualStyleBackColor = true;
			this->botonconsulta->Click += gcnew System::EventHandler(this, &inventario::botonconsulta_Click);
			// 
			// inventario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1116, 759);
			this->Controls->Add(this->botonconsulta);
			this->Controls->Add(this->listainventario);
			this->Controls->Add(this->button1);
			this->Name = L"inventario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"inventario";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void botonconsulta_Click(System::Object^ sender, System::EventArgs^ e) {
		//Listado->Items->Clear();
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ ID_PRODU; String^ NOMBRE; String^ DESCRIPCION;
		String^ PRECIO;String^ CANTIDAD;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "CORVELSADB";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ Bio = gcnew ListView();
		String^ sentencia = "select * from PRODUCTOS";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		while (reader->Read())
		{
			ID_PRODU = (reader["ID_PRODU"]->ToString());
			NOMBRE = (reader["NOMBRE"]->ToString());
			DESCRIPCION = (reader["DESCRIPCION"]->ToString());
			PRECIO = (reader["PRECIO"]->ToString());
			CANTIDAD= (reader["CANTIDAD"]->ToString());

			String^ srtNew1 = gcnew String(ID_PRODU);
			String^ srtNew2 = gcnew String(NOMBRE);
			String^ srtNew3 = gcnew String(DESCRIPCION);
			String^ srtNew4 = gcnew String(PRECIO);
			String^ srtNew5 = gcnew String(CANTIDAD);

			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			listView1->SubItems->Add(srtNew3);
			listView1->SubItems->Add(srtNew4);
			listView1->SubItems->Add(srtNew5);

			this->listainventario->Items->Add(listView1);
		}
		cn->Close();
	};









		   private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			   CORVELSA::agregarproducto^ sexto = gcnew CORVELSA::agregarproducto();
			   this->Visible = false;
			   sexto->ShowDialog();

			   this->Visible = true;
		   }
};


	}
	