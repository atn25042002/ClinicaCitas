#pragma once
#include <Windows.h>
#include "crudPacientesInterface.h"
#include <vector>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include <string>
#include <list>
#include "AgregarPaciente.h"

namespace ClinicaCitas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de Paciente
	/// </summary>
	public ref class Paciente : public System::Windows::Forms::Form
	{
	public:
		Paciente(void)
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
		~Paciente()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ txtcod;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::DataGridView^ dgvPacientes;





	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Codigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Paciente::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtcod = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dgvPacientes = (gcnew System::Windows::Forms::DataGridView());
			this->Codigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPacientes))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(133, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Código:";
			this->label1->Click += gcnew System::EventHandler(this, &Paciente::label1_Click);
			// 
			// txtcod
			// 
			this->txtcod->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcod->Location = System::Drawing::Point(210, 74);
			this->txtcod->Name = L"txtcod";
			this->txtcod->Size = System::Drawing::Size(162, 27);
			this->txtcod->TabIndex = 4;
			this->txtcod->TextChanged += gcnew System::EventHandler(this, &Paciente::textBox1_TextChanged);
			this->txtcod->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Paciente::txtcod_KeyPress);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(22, 21);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Paciente::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(110, 290);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 34);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Paciente::button1_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(249, 290);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 34);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Modificar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Paciente::button3_Click);
			// 
			// dgvPacientes
			// 
			this->dgvPacientes->AllowUserToAddRows = false;
			this->dgvPacientes->AllowUserToDeleteRows = false;
			this->dgvPacientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPacientes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Codigo,
					this->Column2, this->Column3, this->Column4
			});
			this->dgvPacientes->Location = System::Drawing::Point(52, 116);
			this->dgvPacientes->MultiSelect = false;
			this->dgvPacientes->Name = L"dgvPacientes";
			this->dgvPacientes->ReadOnly = true;
			this->dgvPacientes->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dgvPacientes->Size = System::Drawing::Size(461, 163);
			this->dgvPacientes->TabIndex = 12;
			this->dgvPacientes->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Paciente::dgvPacientes_CellClick);
			this->dgvPacientes->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Paciente::dataGridView1_CellContentClick);
			// 
			// Codigo
			// 
			this->Codigo->HeaderText = L"Código";
			this->Codigo->Name = L"Codigo";
			this->Codigo->ReadOnly = true;
			this->Codigo->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Apellidos";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 130;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Nombres";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 130;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Teléfono";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 108;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(402, 290);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 34);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Borrar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Paciente::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(248, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 25);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Pacientes";
			this->label4->Click += gcnew System::EventHandler(this, &Paciente::label4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(378, 74);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 26);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Buscar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Paciente::button5_Click);
			// 
			// Paciente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(587, 384);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvPacientes);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtcod);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Paciente";
			this->Text = L"Paciente";
			this->Load += gcnew System::EventHandler(this, &Paciente::Paciente_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPacientes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = dgvPacientes->CurrentCell->RowIndex;
		//String^ v = dgvPacientes->Rows[i]->Cells[0]->Value->ToString();
		//int cod = stoi(msclr::interop::marshal_as<std::string>(v));
		//bool rpta = (bool) MessageBox::Show("Are you sure to delete this item ??", "Confirm Delete!!", MessageBoxButtons::YesNo);
		if(MessageBox::Show("¿Estas seguro de eliminar?", "Confirm Delete!!", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			Borrar(i+1);
			dgvPacientes->Rows->Clear();
			ReLoad();
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Paciente_Load(System::Object^ sender, System::EventArgs^ e) {
		ReLoad();
	}

	private: System::Void ReLoad() {
		//std::vector<Paciente> v= Leer();
		//std::cout <<  "--->" << Leer()[0].nombres << std::endl;
		std::vector<Estructura::Paciente> pacientes = Leer();
		//String^ net = msclr::interop::marshal_as<String^>(Leer()[0].nombres
		for (int i = 0; i < pacientes.size(); i++) {
			Estructura::Paciente p = pacientes[i];
			llenarData(p.PacCod, p.nombres, p.apellidos, p.telefono, i);
		}
	}

	private: System::Void llenarData(int p1, const char* p2, const char* p3, int p4, int i) {
		dgvPacientes->Rows->Add();
		dgvPacientes->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<String^>(std::to_string(p1));
		dgvPacientes->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(p2);
		dgvPacientes->Rows[i]->Cells[2]->Value = msclr::interop::marshal_as<String^>(p3);
		dgvPacientes->Rows[i]->Cells[3]->Value = msclr::interop::marshal_as<String^>(std::to_string(p4));
	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = dgvPacientes->CurrentCell->RowIndex;
		AgregarPaciente obj;
		//String^ net = msclr::interop::marshal_as<String^>(dgvPacientes->Rows[i]->Cells[0]->Value);
		obj.estaAgregando = false;
		obj.Cod->Enabled = false;
		obj.Cod->Text = dgvPacientes->Rows[i]->Cells[0]->Value->ToString();
		obj.Nom->Text = dgvPacientes->Rows[i]->Cells[1]->Value->ToString();
		obj.Ape->Text = dgvPacientes->Rows[i]->Cells[2]->Value->ToString();
		obj.Tel->Text = dgvPacientes->Rows[i]->Cells[3]->Value->ToString();
		obj.ShowDialog();
		dgvPacientes->Rows->Clear();
		ReLoad();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		AgregarPaciente obj;
		obj.estaAgregando = true;
		List<String^>^ cods = gcnew List<String^>();
		for each (DataGridViewRow ^ row in dgvPacientes->Rows) {
			//stringVector.push_back(row->Cells[0]->Value->ToString());
			cods->Add(row->Cells[0]->Value->ToString());
		}
		obj.cods = cods;
		obj.ShowDialog();
		dgvPacientes->Rows->Clear();
		ReLoad();
	}
private: System::Void dgvPacientes_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtcod->Text->Trim()->Length != 0) {
		String^ cod= txtcod->Text;
		for each (DataGridViewRow ^ row in dgvPacientes->Rows) {
			// Verificar si la celda en la columna específica contiene el valor buscado
			if (row->Cells[0]->Value != nullptr && row->Cells[0]->Value->ToString() == cod->ToString()) {
				MessageBox::Show(row->Cells[0]->Value + " - " + row->Cells[1]->Value + " - " + row->Cells[2]->Value, "Código Encontrado", MessageBoxButtons::OK, MessageBoxIcon::Information);
				dgvPacientes->CurrentCell = row->Cells[0];
				return;
			}
		}
		MessageBox::Show("No hay ningún paciente registrado con ese código", "Código No Encontrado", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void txtcod_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != '\b') {
		// Si no es un dígito ni una tecla especial, cancela el evento KeyPress para evitar que se ingrese el carácter
		e->Handled = true;
	}
}
};
}
