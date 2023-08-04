#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <list>
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
	using namespace System::Collections::Generic;

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


	protected:




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;








	private: System::Windows::Forms::PictureBox^ pictureBox1;







	private: System::Windows::Forms::DataGridView^ dgvCitas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cod;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Med;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Esp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pac;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Consultorio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FechaHora;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ txtcod;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::ComboBox^ cboPacientes;
	private:

	private: System::Windows::Forms::Label^ label4;
	public:
	private:


































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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dgvCitas = (gcnew System::Windows::Forms::DataGridView());
			this->Cod = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Med = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Esp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pac = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Consultorio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FechaHora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->txtcod = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cboPacientes = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->label1->Click += gcnew System::EventHandler(this, &Citas::label1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(311, 376);
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
			this->button3->Location = System::Drawing::Point(513, 376);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 27);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Borrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Citas::button3_Click);
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
			// dgvCitas
			// 
			this->dgvCitas->AllowUserToAddRows = false;
			this->dgvCitas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvCitas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Cod, this->Med,
					this->Esp, this->Pac, this->Consultorio, this->FechaHora
			});
			this->dgvCitas->Location = System::Drawing::Point(79, 159);
			this->dgvCitas->MultiSelect = false;
			this->dgvCitas->Name = L"dgvCitas";
			this->dgvCitas->ReadOnly = true;
			this->dgvCitas->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dgvCitas->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dgvCitas->Size = System::Drawing::Size(618, 199);
			this->dgvCitas->TabIndex = 17;
			// 
			// Cod
			// 
			this->Cod->HeaderText = L"Cod";
			this->Cod->Name = L"Cod";
			this->Cod->ReadOnly = true;
			this->Cod->Width = 50;
			// 
			// Med
			// 
			this->Med->HeaderText = L"Med";
			this->Med->Name = L"Med";
			this->Med->ReadOnly = true;
			// 
			// Esp
			// 
			this->Esp->HeaderText = L"Esp";
			this->Esp->Name = L"Esp";
			this->Esp->ReadOnly = true;
			// 
			// Pac
			// 
			this->Pac->HeaderText = L"Pac";
			this->Pac->Name = L"Pac";
			this->Pac->ReadOnly = true;
			// 
			// Consultorio
			// 
			this->Consultorio->HeaderText = L"Consultorio";
			this->Consultorio->Name = L"Consultorio";
			this->Consultorio->ReadOnly = true;
			// 
			// FechaHora
			// 
			this->FechaHora->HeaderText = L"Hora y Fecha";
			this->FechaHora->Name = L"FechaHora";
			this->FechaHora->ReadOnly = true;
			this->FechaHora->Width = 214;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(564, 101);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 31);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Buscar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Citas::button5_Click);
			// 
			// txtcod
			// 
			this->txtcod->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcod->Location = System::Drawing::Point(311, 92);
			this->txtcod->Name = L"txtcod";
			this->txtcod->Size = System::Drawing::Size(235, 27);
			this->txtcod->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(234, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 18);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Código:";
			// 
			// cboPacientes
			// 
			this->cboPacientes->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboPacientes->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboPacientes->FormattingEnabled = true;
			this->cboPacientes->Location = System::Drawing::Point(311, 127);
			this->cboPacientes->Name = L"cboPacientes";
			this->cboPacientes->Size = System::Drawing::Size(235, 26);
			this->cboPacientes->TabIndex = 44;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(220, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 18);
			this->label4->TabIndex = 45;
			this->label4->Text = L"Paciente:";
			// 
			// Citas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->ClientSize = System::Drawing::Size(756, 434);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cboPacientes);
			this->Controls->Add(this->txtcod);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dgvCitas);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
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
		LoadCitas();
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

	private: System::Void LoadCitas() {
		//std::vector<Paciente> v= Leer();
		//std::cout <<  "--->" << Leer()[0].nombres << std::endl;
		std::vector<Estructura::MedicoH> citas = leerMedH();
		//String^ net = msclr::interop::marshal_as<String^>(Leer()[0].nombres
		for (int i = 0; i < citas.size(); i++) {
			Estructura::MedicoH c = citas[i];
			Estructura::FechaH fecha = c.fechaCita;
			String^ fechatxt = String::Concat(fecha.hora , ":" , fecha.minutos, "   ", fecha.dia, " - ", fecha.mes, " - ", fecha.anio);
			llenarData(c.citaCod,c.medNom, c.medEsp, c.pacNom, c.medConsultorio, fechatxt, i);
		}
	}

	private: System::Void llenarData(int cod, const char* medNom, const char* esp, const char* pacNom, const char* cons, String^ fecha, int i) {
		dgvCitas->Rows->Add();
		dgvCitas->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<String^>(std::to_string(cod));
		dgvCitas->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(medNom);
		dgvCitas->Rows[i]->Cells[2]->Value = msclr::interop::marshal_as<String^>(esp);
		dgvCitas->Rows[i]->Cells[3]->Value = msclr::interop::marshal_as<String^>(pacNom);
		dgvCitas->Rows[i]->Cells[4]->Value = msclr::interop::marshal_as<String^>(cons);
		dgvCitas->Rows[i]->Cells[5]->Value = fecha;
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
		List<String^>^ cods = gcnew List<String^>();
		obj.cboPaciente->Items->Clear();
		for each (Object ^ item in cboPacientes->Items)
		{
			obj.cboPaciente->Items->Add(item);
		}
		for each (DataGridViewRow ^ row in dgvCitas->Rows) {
			//stringVector.push_back(row->Cells[0]->Value->ToString());
			cods->Add(row->Cells[0]->Value->ToString());
		}
		obj.cods = cods;
		obj.ShowDialog();
		dgvCitas->Rows->Clear();
		LoadCitas();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int i = dgvCitas->CurrentCell->RowIndex;
	AgregarCita obj;
	//String^ net = msclr::interop::marshal_as<String^>(dgvPacientes->Rows[i]->Cells[0]->Value);
	obj.estaAgregando = false;
	obj.Cod->Text= dgvCitas->Rows[i]->Cells[0]->Value->ToString();
	obj.Cod->Enabled = false;
	obj.cboMedico->Text= dgvCitas->Rows[i]->Cells[1]->Value->ToString();
	obj.cboEsp->Text = dgvCitas->Rows[i]->Cells[2]->Value->ToString();
	obj.cboPaciente->Text = dgvCitas->Rows[i]->Cells[3]->Value->ToString();
	obj.cboCons->Text = dgvCitas->Rows[i]->Cells[4]->Value->ToString();
	obj.cboPaciente->Items->Clear();
	for each (Object ^ item in cboPacientes->Items)
	{
		obj.cboPaciente->Items->Add(item);
	}
	//obj.Cod->Text = dgvCitas->Rows[i]->Cells[0]->Value->ToString();
	obj.ShowDialog();
	dgvCitas->Rows->Clear();
	LoadCitas();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int i = dgvCitas->CurrentCell->RowIndex;
	//String^ v = dgvPacientes->Rows[i]->Cells[0]->Value->ToString();
	//int cod = stoi(msclr::interop::marshal_as<std::string>(v));
	//bool rpta = (bool) MessageBox::Show("Are you sure to delete this item ??", "Confirm Delete!!", MessageBoxButtons::YesNo);
	if (MessageBox::Show("¿Estas seguro de eliminar?", "Confirm Delete!!", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
		BorrarMedH(i + 1);
		dgvCitas->Rows->Clear();
		LoadCitas();
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtcod->Text->Trim()->Length != 0) {
		String^ cod = txtcod->Text;
		String^ pac = cboPacientes->Text;
		for each (DataGridViewRow ^ row in dgvCitas->Rows) {
			// Verificar si la celda en la columna específica contiene el valor buscado
			if (row->Cells[0]->Value != nullptr && row->Cells[0]->Value->ToString() == cod->ToString()) {
				if (row->Cells[3]->Value->ToString() == pac->ToString()) {
					MessageBox::Show(row->Cells[0]->Value + " - " + row->Cells[1]->Value + " - " + row->Cells[2]->Value, "Registro Encontrado", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					MessageBox::Show(row->Cells[0]->Value + " - " + row->Cells[1]->Value + " - " + row->Cells[2]->Value, "Código Encontrado", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				dgvCitas->CurrentCell = row->Cells[0];
				return;
			}
		}
		MessageBox::Show("No hay ningún paciente registrado con ese código", "Código No Encontrado", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}
