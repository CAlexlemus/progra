#pragma once
#include "Empleados.h"

namespace CORVELSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de contraseña
	/// </summary>
	public ref class contraseña : public System::Windows::Forms::Form
	{
	public:
		contraseña(void)
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
		~contraseña()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_usuario;
	protected:

	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ btn_iniciosesion;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_contra;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_usuario = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_iniciosesion = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_contra = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(207, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario:";
			// 
			// txt_usuario
			// 
			this->txt_usuario->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_usuario->Location = System::Drawing::Point(25, 167);
			this->txt_usuario->Name = L"txt_usuario";
			this->txt_usuario->Size = System::Drawing::Size(516, 30);
			this->txt_usuario->TabIndex = 1;
			this->txt_usuario->TextChanged += gcnew System::EventHandler(this, &contraseña::txt_usuario_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(187, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 31);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Contraseña:";
			// 
			// btn_iniciosesion
			// 
			this->btn_iniciosesion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_iniciosesion->Location = System::Drawing::Point(162, 378);
			this->btn_iniciosesion->Name = L"btn_iniciosesion";
			this->btn_iniciosesion->Size = System::Drawing::Size(193, 48);
			this->btn_iniciosesion->TabIndex = 4;
			this->btn_iniciosesion->Text = L"Iniciar Sesión";
			this->btn_iniciosesion->UseVisualStyleBackColor = true;
			this->btn_iniciosesion->Click += gcnew System::EventHandler(this, &contraseña::btn_iniciosesion_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(25, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 32);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Volver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &contraseña::button1_Click);
			// 
			// txt_contra
			// 
			this->txt_contra->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_contra->Location = System::Drawing::Point(25, 304);
			this->txt_contra->Name = L"txt_contra";
			this->txt_contra->Size = System::Drawing::Size(516, 30);
			this->txt_contra->TabIndex = 6;
			this->txt_contra->UseSystemPasswordChar = true;
			// 
			// contraseña
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 608);
			this->Controls->Add(this->txt_contra);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_iniciosesion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_usuario);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"contraseña";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"contraseña";
			this->Load += gcnew System::EventHandler(this, &contraseña::contraseña_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void contraseña_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_iniciosesion_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_usuario->Text == "Corvelsa" && txt_contra->Text == "Goku12345") {
			CORVELSA::Empleados^ tercero = gcnew CORVELSA::Empleados();
			this->Visible = false;
			tercero->ShowDialog();
			this->Visible = true;
		}
		else
		{
			MessageBox::Show ("Usuario o contraseña incorrectos, intente de nuevo");
		}



		
		

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void txt_contra_TextChanged(System::Object^ sender, System::EventArgs^ e) {



}
private: System::Void txt_usuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
