#pragma once
#include "Header.h"
namespace CORVELSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	using namespace Data;
	using namespace Data::SqlClient;
	/// <summary>
	/// Resumen de Empleados
	/// </summary>
	public ref class Empleados : public System::Windows::Forms::Form
	{
	public:
		Empleados(void)
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
		~Empleados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txtDpi;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtEdad;
	private: System::Windows::Forms::ComboBox^ cbxTipo;
	private: System::Windows::Forms::TextBox^ txtSueldo;
	private: System::Windows::Forms::TextBox^ txtComision;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;










	protected:

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtDpi = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->cbxTipo = (gcnew System::Windows::Forms::ComboBox());
			this->txtSueldo = (gcnew System::Windows::Forms::TextBox());
			this->txtComision = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(15, 513);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 32);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Volver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Empleados::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(207, 420);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 41);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Empleados::button2_Click);
			// 
			// txtDpi
			// 
			this->txtDpi->Location = System::Drawing::Point(207, 62);
			this->txtDpi->Margin = System::Windows::Forms::Padding(4);
			this->txtDpi->Name = L"txtDpi";
			this->txtDpi->Size = System::Drawing::Size(132, 22);
			this->txtDpi->TabIndex = 8;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(207, 111);
			this->txtNombre->Margin = System::Windows::Forms::Padding(4);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(132, 22);
			this->txtNombre->TabIndex = 9;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(207, 156);
			this->txtApellido->Margin = System::Windows::Forms::Padding(4);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(132, 22);
			this->txtApellido->TabIndex = 10;
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(207, 203);
			this->txtEdad->Margin = System::Windows::Forms::Padding(4);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(132, 22);
			this->txtEdad->TabIndex = 11;
			// 
			// cbxTipo
			// 
			this->cbxTipo->FormattingEnabled = true;
			this->cbxTipo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Secretaria", L"Bodeguero", L"Vendedor" });
			this->cbxTipo->Location = System::Drawing::Point(207, 258);
			this->cbxTipo->Margin = System::Windows::Forms::Padding(4);
			this->cbxTipo->Name = L"cbxTipo";
			this->cbxTipo->Size = System::Drawing::Size(160, 24);
			this->cbxTipo->TabIndex = 12;
			// 
			// txtSueldo
			// 
			this->txtSueldo->Location = System::Drawing::Point(207, 312);
			this->txtSueldo->Margin = System::Windows::Forms::Padding(4);
			this->txtSueldo->Name = L"txtSueldo";
			this->txtSueldo->Size = System::Drawing::Size(132, 22);
			this->txtSueldo->TabIndex = 13;
			// 
			// txtComision
			// 
			this->txtComision->Location = System::Drawing::Point(207, 354);
			this->txtComision->Margin = System::Windows::Forms::Padding(4);
			this->txtComision->Name = L"txtComision";
			this->txtComision->Size = System::Drawing::Size(132, 22);
			this->txtComision->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(72, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 15;
			this->label1->Text = L"DPI:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(72, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(72, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 20);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Apellido:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(72, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 20);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Edad:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(72, 262);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 20);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Puesto:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(72, 314);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Sueldo:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(72, 354);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 20);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Comisión:";
			// 
			// Empleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 559);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtComision);
			this->Controls->Add(this->txtSueldo);
			this->Controls->Add(this->cbxTipo);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtDpi);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Empleados";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Empleados";
			this->Load += gcnew System::EventHandler(this, &Empleados::Empleados_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Insertar(
			txtDpi->Text,
			txtNombre->Text,
			txtApellido->Text,
			Convert::ToInt64(txtEdad->Text),
			Convert::ToInt64(cbxTipo->SelectedIndex),
			Convert::ToInt64(txtSueldo->Text),
			Convert::ToInt64(txtComision->Text)
		);
	

		MessageBox::Show("Registro guardado exitosamente");
	}


private: System::Void Empleados_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lista_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
