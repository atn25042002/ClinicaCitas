#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "crudMediCoHorInterface.h"
#include "crudPacientesInterface.h"
#include "Horario.h"
#include "AgregarCita.h"

namespace ClinicaCitas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Citas1
	/// </summary>
	public ref class Citas : public System::Windows::Forms::Form
	{
	public:
		Citas(void)
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
		~Citas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ cboPacientes;

	protected:


	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;







	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaHora;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Consultorio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pac;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Esp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Med;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cod;
	private: System::Windows::Forms::DataGridView^ dgvCitas;



















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Citas::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cboPacientes = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->FechaHora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Consultorio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pac = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Esp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Med = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cod = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvCitas = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCitas))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(116, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 27);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Citas::button1_Click);
			// 
			// cboPacientes
			// 
			this->cboPacientes->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboPacientes->FormattingEnabled = true;
			this->cboPacientes->Location = System::Drawing::Point(226, 127);
			this->cboPacientes->Name = L"cboPacientes";
			this->cboPacientes->Size = System::Drawing::Size(281, 26);
			this->cboPacientes->TabIndex = 11;
			this->cboPacientes->Text = L"Seleccione Paciente";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Dr. Alejandro Méndez", L"Dra. Laura Gómez", L"Dr. Carlos Ramírez",
					L"Dra. Ana Torres", L"Dr. Juan Rodríguez", L"Dra. Marta Silva", L"Dr. Andrés López", L"Dra. Sofía Herrera", L"Dr. Gabriel Castro",
					L"Dra. Isabella Vargas", L"Dr. Eduardo Mendoza", L"Dra. Valentina Morales", L"Dr. Manuel Pérez", L"Dra. Gabriela Fernández",
					L"Dr. Victoria Martínez"
			});
			this->comboBox2->Location = System::Drawing::Point(226, 98);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(281, 26);
			this->comboBox2->TabIndex = 10;
			this->comboBox2->Text = L"Seleccione Médico";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Medicina General", L"Pediatría", L"Ginecología y Obstetricia",
					L"Cardiología", L"Dermatología", L"Oftalmología", L"Otorrinolaringología (ORL)", L"Ortopedia y Traumatología", L"Neurología",
					L"Psiquiatría", L"Endocrinología", L"Nefrología", L"Gastroenterología", L"Urología", L"Oncología"
			});
			this->comboBox1->Location = System::Drawing::Point(226, 66);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(281, 26);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->Text = L"Seleccione Especialidad";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Citas::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(194, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(345, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Rellene los siguientes datos para su cita";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(340, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 23);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Citas";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(249, 376);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 27);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Citas::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(374, 376);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 27);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Borrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Citas::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(491, 376);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 27);
			this->button4->TabIndex = 16;
			this->button4->Text = L"A";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Citas::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(22, 21);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Citas::pictureBox1_Click);
			// 
			// FechaHora
			// 
			this->FechaHora->HeaderText = L"Fecha y Hora";
			this->FechaHora->Name = L"FechaHora";
			this->FechaHora->ReadOnly = true;
			// 
			// Consultorio
			// 
			this->Consultorio->HeaderText = L"Consultorio";
			this->Consultorio->Name = L"Consultorio";
			this->Consultorio->ReadOnly = true;
			// 
			// Pac
			// 
			this->Pac->HeaderText = L"Pac";
			this->Pac->Name = L"Pac";
			this->Pac->ReadOnly = true;
			// 
			// Esp
			// 
			this->Esp->HeaderText = L"Esp";
			this->Esp->Name = L"Esp";
			this->Esp->ReadOnly = true;
			// 
			// Med
			// 
			this->Med->HeaderText = L"Med";
			this->Med->Name = L"Med";
			this->Med->ReadOnly = true;
			// 
			// Cod
			// 
			this->Cod->HeaderText = L"Cod";
			this->Cod->Name = L"Cod";
			this->Cod->ReadOnly = true;
			this->Cod->Width = 50;
			// 
			// dgvCitas
			// 
			this->dgvCitas->AllowUserToAddRows = false;
			this->dgvCitas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvCitas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Cod, this->Med,
					this->Esp, this->Pac, this->Consultorio, this->FechaHora
			});
			this->dgvCitas->Location = System::Drawing::Point(46, 159);
			this->dgvCitas->MultiSelect = false;
			this->dgvCitas->Name = L"dgvCitas";
			this->dgvCitas->ReadOnly = true;
			this->dgvCitas->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dgvCitas->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dgvCitas->Size = System::Drawing::Size(588, 187);
			this->dgvCitas->TabIndex = 17;
			// 
			// Citas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 434);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dgvCitas);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cboPacientes);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Citas";
			this->Text = L"Citas";
			this->Load += gcnew System::EventHandler(this, &Citas::Citas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCitas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Citas_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadPacientes();
	}

	private: System::Void LoadPacientes() {
		//Carga los pacientes a la lista
		//std::vector<Paciente> v= Leer();
		//std::cout <<  "--->" << Leer()[0].nombres << std::endl;
		std::vector<Estructura::Paciente> pacientes = Leer();
		//String^ net = msclr::interop::marshal_as<String^>(Leer()[0].nombres
		for (int i = 0; i < pacientes.size(); i++) {
			Estructura::Paciente p = pacientes[i];
			std::string name(p.nombres);
			std::string apell(p.apellidos);
			cboPacientes->Items->Add(gcnew System::String((name + " " + apell).c_str()));
		}
	}

	private: System::Void llenarData(int cod, const char* medNom, const char* esp, const char* pacNom, const char* cons, const char* fecha, int i) {
		dgvCitas->Rows->Add();
		dgvCitas->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<String^>(std::to_string(cod));
		dgvCitas->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(medNom);
		dgvCitas->Rows[i]->Cells[2]->Value = msclr::interop::marshal_as<String^>(esp);
		dgvCitas->Rows[i]->Cells[3]->Value = msclr::interop::marshal_as<String^>(pacNom);
		dgvCitas->Rows[i]->Cells[4]->Value = msclr::interop::marshal_as<String^>(cons);
		dgvCitas->Rows[i]->Cells[5]->Value = msclr::interop::marshal_as<String^>(fecha);
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		AgregarCita obj;
		obj.estaAgregando = true;
		obj.cboPaciente->Items->Clear();
		for each (Object ^ item in cboPacientes->Items)
		{
			obj.cboPaciente->Items->Add(item);
		}		
		obj.ShowDialog();
		dgvCitas->Rows->Clear();
		cboPacientes->Items->Clear();
		LoadPacientes();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int i = dgvCitas->CurrentCell->RowIndex;
	AgregarCita obj;
	//String^ net = msclr::interop::marshal_as<String^>(dgvPacientes->Rows[i]->Cells[0]->Value);
	obj.estaAgregando = false;
	//obj.Cod->Text = dgvCitas->Rows[i]->Cells[0]->Value->ToString();
	obj.ShowDialog();
	dgvCitas->Rows->Clear();
	LoadPacientes();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int i = dgvCitas->CurrentCell->RowIndex;
	//String^ v = dgvPacientes->Rows[i]->Cells[0]->Value->ToString();
	//int cod = stoi(msclr::interop::marshal_as<std::string>(v));
	//bool rpta = (bool) MessageBox::Show("Are you sure to delete this item ??", "Confirm Delete!!", MessageBoxButtons::YesNo);
	if (MessageBox::Show("¿Estas seguro de eliminar?", "Confirm Delete!!", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
		Borrar(i + 1);
		dgvCitas->Rows->Clear();
		LoadPacientes();
	}
}
};
}
