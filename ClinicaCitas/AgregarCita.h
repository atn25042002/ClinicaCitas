#pragma once
#include <vector>
#include "crudMediCoHorInterface.h"
#include <string>
#include <msclr/marshal_cppstd.h>
#include <sstream>

namespace ClinicaCitas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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



	private:

	public:
	private: System::Windows::Forms::Label^ label4;

	private:


	private: System::Windows::Forms::Label^ label3;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private:

	private:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::MonthCalendar^ mcfecha;

	public: System::Windows::Forms::ComboBox^ cboPaciente;
	private:

	private: System::Windows::Forms::ComboBox^ cboMedico;
	private: System::Windows::Forms::ComboBox^ cboEsp;
	private: System::Windows::Forms::ComboBox^ cbohora;
	private: System::Windows::Forms::ComboBox^ cboCons;
	public:

	public:

	private:

	private:



	public:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AgregarCita::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->mcfecha = (gcnew System::Windows::Forms::MonthCalendar());
			this->cboPaciente = (gcnew System::Windows::Forms::ComboBox());
			this->cboMedico = (gcnew System::Windows::Forms::ComboBox());
			this->cboEsp = (gcnew System::Windows::Forms::ComboBox());
			this->cbohora = (gcnew System::Windows::Forms::ComboBox());
			this->cboCons = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
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
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(43, 194);
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
			// mcfecha
			// 
			this->mcfecha->Location = System::Drawing::Point(443, 81);
			this->mcfecha->MaxSelectionCount = 1;
			this->mcfecha->Name = L"mcfecha";
			this->mcfecha->TabIndex = 40;
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
				L"Dr. Alejandro Méndez", L"Dra. Laura Gómez", L"Dr. Carlos Ramírez",
					L"Dra. Ana Torres", L"Dr. Juan Rodríguez", L"Dra. Marta Silva", L"Dr. Andrés López", L"Dra. Sofía Herrera", L"Dr. Gabriel Castro",
					L"Dra. Isabella Vargas", L"Dr. Eduardo Mendoza", L"Dra. Valentina Morales", L"Dr. Manuel Pérez", L"Dra. Gabriela Fernández",
					L"Dr. Victoria Martínez"
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
				L"Medicina General", L"Pediatría", L"Ginecología y Obstetricia",
					L"Cardiología", L"Dermatología", L"Oftalmología", L"Otorrinolaringología (ORL)", L"Ortopedia y Traumatología", L"Neurología",
					L"Psiquiatría", L"Endocrinología", L"Nefrología", L"Gastroenterología", L"Urología", L"Oncología"
			});
			this->cboEsp->Location = System::Drawing::Point(166, 159);
			this->cboEsp->Name = L"cboEsp";
			this->cboEsp->Size = System::Drawing::Size(235, 26);
			this->cboEsp->TabIndex = 41;
			// 
			// cbohora
			// 
			this->cbohora->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbohora->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbohora->FormattingEnabled = true;
			this->cbohora->Items->AddRange(gcnew cli::array< System::Object^  >(17) {
				L"09:00 - 09:30", L"09:30 - 10:00", L"10:00 - 10:30",
					L"10:30 - 11:00", L"11:00 - 11:30", L"11:30 - 12:00", L"12:00 - 12:30", L"12:30 - 13:00", L"13:00 - 13:30", L"13:30 - 14:00",
					L"14:00 - 14:30", L"14:30 - 15:00", L"15:00 - 15:30", L"15:30 - 16:00", L"16:00 - 16:30", L"16:30 - 17:00", L"17:00 - 17:30"
			});
			this->cbohora->Location = System::Drawing::Point(475, 255);
			this->cbohora->Name = L"cbohora";
			this->cbohora->Size = System::Drawing::Size(199, 26);
			this->cbohora->TabIndex = 44;
			// 
			// cboCons
			// 
			this->cboCons->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboCons->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboCons->FormattingEnabled = true;
			this->cboCons->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"S1", L"S2", L"P1", L"P2", L"G1", L"G2" });
			this->cboCons->Location = System::Drawing::Point(166, 194);
			this->cboCons->Name = L"cboCons";
			this->cboCons->Size = System::Drawing::Size(235, 26);
			this->cboCons->TabIndex = 45;
			// 
			// AgregarCita
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->ClientSize = System::Drawing::Size(709, 368);
			this->Controls->Add(this->cboCons);
			this->Controls->Add(this->cbohora);
			this->Controls->Add(this->cboPaciente);
			this->Controls->Add(this->cboMedico);
			this->Controls->Add(this->cboEsp);
			this->Controls->Add(this->mcfecha);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
	std::string nomMed = msclr::interop::marshal_as<std::string>(this->cboMedico->Text);
	std::string nomPac = msclr::interop::marshal_as<std::string>(this->cboPaciente->Text);
	std::string esp = msclr::interop::marshal_as<std::string>(this->cboEsp->Text);
	std::string consul = msclr::interop::marshal_as<std::string>(this->cboCons->Text);
	std::string hors = msclr::interop::marshal_as<std::string>(this->cbohora->Text);
	DateTime fechaSeleccionada = this->mcfecha->SelectionStart;
	Estructura::FechaH fecha = {};
	fecha.anio = fechaSeleccionada.Year;
	fecha.mes = fechaSeleccionada.Month;
	fecha.dia = fechaSeleccionada.Day;
	fecha.hora = stoi(hors.substr(0, 2));
	fecha.minutos = stoi(hors.substr(3, 5));
	if (estaAgregando) {
		crearMedH(1, nomMed.c_str(), nomPac.c_str(), 1, esp.c_str(),fecha, consul.c_str());
		//String^ resultado = String::Concat(fecha.hora, " - ", fecha.minutos);
		//label4->Text = resultado;
	}
	else {
		//Actualizar(stoi(codigo), nombre.c_str(), apellido.c_str(), stoi(telefono));
	}
	this->Close();
}
};
}
