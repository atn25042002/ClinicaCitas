#pragma once

namespace ClinicaCitas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Horario
	/// </summary>
	public ref class Horario : public System::Windows::Forms::Form
	{
	public:
		Horario(void)
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
		~Horario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Horario::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(326, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 25);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Horario";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Dr. Alejandro M�ndez", L"Dra. Laura G�mez", L"Dr. Carlos Ram�rez",
					L"Dra. Ana Torres", L"Dr. Juan Rodr�guez", L"Dra. Marta Silva", L"Dr. Andr�s L�pez", L"Dra. Sof�a Herrera", L"Dr. Gabriel Castro",
					L"Dra. Isabella Vargas", L"Dr. Eduardo Mendoza", L"Dra. Valentina Morales", L"Dr. Manuel P�rez", L"Dra. Gabriela Fern�ndez",
					L"Dr. Victoria Mart�nez"
			});
			this->comboBox2->Location = System::Drawing::Point(226, 80);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(281, 26);
			this->comboBox2->TabIndex = 16;
			this->comboBox2->Text = L"Seleccione M�dico";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Medicina General", L"Pediatr�a", L"Ginecolog�a y Obstetricia",
					L"Cardiolog�a", L"Dermatolog�a", L"Oftalmolog�a", L"Otorrinolaringolog�a (ORL)", L"Ortopedia y Traumatolog�a", L"Neurolog�a",
					L"Psiquiatr�a", L"Endocrinolog�a", L"Nefrolog�a", L"Gastroenterolog�a", L"Urolog�a", L"Oncolog�a"
			});
			this->comboBox1->Location = System::Drawing::Point(226, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(281, 26);
			this->comboBox1->TabIndex = 15;
			this->comboBox1->Text = L"Seleccione Especialidad";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(28, 131);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(745, 289);
			this->dataGridView1->TabIndex = 17;
			// 
			// Horario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 432);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Horario";
			this->Text = L"Horario";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
