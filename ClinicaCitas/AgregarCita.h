#pragma once
#include <vector>
#include "crudMediCoHorInterface.h"
#include <string>
#include <msclr/marshal_cppstd.h>

namespace ClinicaCitas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AgregarCita
	/// </summary>
	public ref class AgregarCita : public System::Windows::Forms::Form
	{
	public:
		AgregarCita(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~AgregarCita()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	public: bool estaAgregando = true;

	public: System::Windows::Forms::TextBox^ Tel;
	private:
	private: System::Windows::Forms::Label^ label5;
	public:
	private: System::Windows::Forms::Label^ label4;

	private:


	private: System::Windows::Forms::Label^ label3;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ textBox1;
	private:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	public: System::Windows::Forms::ComboBox^ cboPaciente;
	private:

	private: System::Windows::Forms::ComboBox^ cboMedico;
	private: System::Windows::Forms::ComboBox^ cboEsp;
	public:

	public:

	private:

	private:



	public:

	protected:

















	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Tel = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->cboPaciente = (gcnew System::Windows::Forms::ComboBox());
			this->cboMedico = (gcnew System::Windows::Forms::ComboBox());
			this->cboEsp = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// Tel
			// 
			this->Tel->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tel->Location = System::Drawing::Point(166, 191);
			this->Tel->Name = L"Tel";
			this->Tel->Size = System::Drawing::Size(235, 27);
			this->Tel->TabIndex = 33;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(43, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 18);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Telefono:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(283, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 25);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Agregar Cita";
			this->label4->Click += gcnew System::EventHandler(this, &AgregarCita::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(43, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 18);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Especialidad:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(43, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 18);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Paciente:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(43, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 18);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Medico:";
			this->label1->Click += gcnew System::EventHandler(this, &AgregarCita::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(166, 222);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(235, 27);
			this->textBox1->TabIndex = 37;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(43, 225);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 18);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Consultorio:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(149, 278);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 33);
			this->button3->TabIndex = 39;
			this->button3->Text = L"Cancelar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AgregarCita::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(302, 278);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 33);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Actualizar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AgregarCita::button4_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(443, 114);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 40;
			// 
			// cboPaciente
			// 
			this->cboPaciente->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboPaciente->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboPaciente->FormattingEnabled = true;
			this->cboPaciente->Location = System::Drawing::Point(166, 127);
			this->cboPaciente->Name = L"cboPaciente";
			this->cboPaciente->Size = System::Drawing::Size(235, 26);
			this->cboPaciente->TabIndex = 43;
			// 
			// cboMedico
			// 
			this->cboMedico->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboMedico->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboMedico->FormattingEnabled = true;
			this->cboMedico->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Dr. Alejandro M�ndez", L"Dra. Laura G�mez", L"Dr. Carlos Ram�rez",
					L"Dra. Ana Torres", L"Dr. Juan Rodr�guez", L"Dra. Marta Silva", L"Dr. Andr�s L�pez", L"Dra. Sof�a Herrera", L"Dr. Gabriel Castro",
					L"Dra. Isabella Vargas", L"Dr. Eduardo Mendoza", L"Dra. Valentina Morales", L"Dr. Manuel P�rez", L"Dra. Gabriela Fern�ndez",
					L"Dr. Victoria Mart�nez"
			});
			this->cboMedico->Location = System::Drawing::Point(166, 98);
			this->cboMedico->Name = L"cboMedico";
			this->cboMedico->Size = System::Drawing::Size(235, 26);
			this->cboMedico->TabIndex = 42;
			this->cboMedico->SelectedIndexChanged += gcnew System::EventHandler(this, &AgregarCita::cboPac_SelectedIndexChanged);
			// 
			// cboEsp
			// 
			this->cboEsp->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboEsp->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboEsp->FormattingEnabled = true;
			this->cboEsp->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Medicina General", L"Pediatr�a", L"Ginecolog�a y Obstetricia",
					L"Cardiolog�a", L"Dermatolog�a", L"Oftalmolog�a", L"Otorrinolaringolog�a (ORL)", L"Ortopedia y Traumatolog�a", L"Neurolog�a",
					L"Psiquiatr�a", L"Endocrinolog�a", L"Nefrolog�a", L"Gastroenterolog�a", L"Urolog�a", L"Oncolog�a"
			});
			this->cboEsp->Location = System::Drawing::Point(166, 159);
			this->cboEsp->Name = L"cboEsp";
			this->cboEsp->Size = System::Drawing::Size(235, 26);
			this->cboEsp->TabIndex = 41;
			// 
			// AgregarCita
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 368);
			this->Controls->Add(this->cboPaciente);
			this->Controls->Add(this->cboMedico);
			this->Controls->Add(this->cboEsp);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Tel);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AgregarCita";
			this->Text = L"AgregarCita";
			this->Load += gcnew System::EventHandler(this, &AgregarCita::AgregarCita_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void AgregarCita_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cboPac_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	/*
	std::string codigo = msclr::interop::marshal_as<std::string>(this->Cod->Text);
	std::string nombre = msclr::interop::marshal_as<std::string>(this->Nom->Text);
	std::string apellido = msclr::interop::marshal_as<std::string>(this->Ape->Text);
	std::string telefono = msclr::interop::marshal_as<std::string>(this->Tel->Text);
	if (estaAgregando) {
		Crear(stoi(codigo), nombre.c_str(), apellido.c_str(), stoi(telefono));
	}
	else {
		Actualizar(stoi(codigo), nombre.c_str(), apellido.c_str(), stoi(telefono));
	}*/
	this->Close();
}
};
}
