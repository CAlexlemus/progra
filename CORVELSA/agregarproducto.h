#pragma once
#include "Header.h"

namespace CORVELSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de agregarproducto
	/// </summary>
	public ref class agregarproducto : public System::Windows::Forms::Form
	{
	public:
		agregarproducto(void)
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
		~agregarproducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtcode;
	private: System::Windows::Forms::TextBox^ txtnombre;
	private: System::Windows::Forms::TextBox^ txtprecio;
	private: System::Windows::Forms::TextBox^ txtdescripcion;




	private: System::Windows::Forms::Button^ botonguardar;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtcantidad;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtcode = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre = (gcnew System::Windows::Forms::TextBox());
			this->txtprecio = (gcnew System::Windows::Forms::TextBox());
			this->txtdescripcion = (gcnew System::Windows::Forms::TextBox());
			this->botonguardar = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtcantidad = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(9, 20);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 26);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Volver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &agregarproducto::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 93);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 26);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Código:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 139);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 26);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 367);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 26);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Descripción:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(45, 199);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 26);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Precio:";
			// 
			// txtcode
			// 
			this->txtcode->Location = System::Drawing::Point(128, 101);
			this->txtcode->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtcode->Name = L"txtcode";
			this->txtcode->Size = System::Drawing::Size(133, 20);
			this->txtcode->TabIndex = 14;
			this->txtcode->TextChanged += gcnew System::EventHandler(this, &agregarproducto::textBox2_TextChanged);
			// 
			// txtnombre
			// 
			this->txtnombre->Location = System::Drawing::Point(128, 146);
			this->txtnombre->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(133, 20);
			this->txtnombre->TabIndex = 15;
			// 
			// txtprecio
			// 
			this->txtprecio->Location = System::Drawing::Point(128, 206);
			this->txtprecio->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtprecio->Name = L"txtprecio";
			this->txtprecio->Size = System::Drawing::Size(133, 20);
			this->txtprecio->TabIndex = 16;
			// 
			// txtdescripcion
			// 
			this->txtdescripcion->Location = System::Drawing::Point(152, 349);
			this->txtdescripcion->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtdescripcion->Multiline = true;
			this->txtdescripcion->Name = L"txtdescripcion";
			this->txtdescripcion->Size = System::Drawing::Size(183, 114);
			this->txtdescripcion->TabIndex = 17;
			// 
			// botonguardar
			// 
			this->botonguardar->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonguardar->Location = System::Drawing::Point(241, 524);
			this->botonguardar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->botonguardar->Name = L"botonguardar";
			this->botonguardar->Size = System::Drawing::Size(94, 32);
			this->botonguardar->TabIndex = 18;
			this->botonguardar->Text = L"Agregar";
			this->botonguardar->UseVisualStyleBackColor = true;
			this->botonguardar->Click += gcnew System::EventHandler(this, &agregarproducto::botonguardar_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(45, 274);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 26);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Cantidad:";
			// 
			// txtcantidad
			// 
			this->txtcantidad->Location = System::Drawing::Point(140, 281);
			this->txtcantidad->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtcantidad->Name = L"txtcantidad";
			this->txtcantidad->Size = System::Drawing::Size(133, 20);
			this->txtcantidad->TabIndex = 20;
			this->txtcantidad->TextChanged += gcnew System::EventHandler(this, &agregarproducto::textBox1_TextChanged);
			// 
			// agregarproducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 609);
			this->Controls->Add(this->txtcantidad);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->botonguardar);
			this->Controls->Add(this->txtdescripcion);
			this->Controls->Add(this->txtprecio);
			this->Controls->Add(this->txtnombre);
			this->Controls->Add(this->txtcode);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"agregarproducto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"agregarproducto";
			this->Load += gcnew System::EventHandler(this, &agregarproducto::agregarproducto_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void agregarproducto_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void botonguardar_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Insertar4(
			txtcode->Text,
			txtnombre->Text,
			txtdescripcion->Text,
			txtprecio->Text,
			txtcantidad->Text
			
			);
		
			MessageBox::Show("Registro guardado exitosamente");
	}
		
		   














private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
